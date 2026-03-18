/*
 * XREFs of ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18005A6A8
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x180035490 (-Release@CVisual@@UEAAKXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18003706C (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180067F90 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180067FF4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_xx @ 0x1800E218C (Template_xx.c)
 */

__int64 __fastcall CInteraction::SetVisual(CInteraction *this, struct CVisual *a2)
{
  __int64 v2; // rbx
  struct CWeakReferenceBase **v3; // rsi
  struct CWeakReferenceBase *v6; // rdx
  unsigned int v7; // edi
  struct CVisual *v8; // rax
  int WeakReferenceBase; // eax

  v2 = 0LL;
  v3 = (struct CWeakReferenceBase **)((char *)this + 80);
  v6 = (struct CWeakReferenceBase *)*((_QWORD *)this + 10);
  v7 = 0;
  if ( v6 )
    v8 = *(struct CVisual **)v6;
  else
    v8 = 0LL;
  if ( a2 == v8 )
    goto LABEL_8;
  if ( v6 )
  {
    CComposition::ReleaseWeakReference(*((CComposition **)this + 3), v6);
    *v3 = 0LL;
  }
  if ( a2
    && (WeakReferenceBase = CComposition::GetWeakReferenceBase(*((CComposition **)this + 3), a2, v3),
        v7 = WeakReferenceBase,
        WeakReferenceBase < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x68u);
  }
  else
  {
LABEL_8:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      if ( *v3 )
        v2 = *(_QWORD *)*v3;
      Template_xx(this, &INTERACTION_VISUAL_UPDATE, (char *)this + 8, v2);
    }
  }
  return v7;
}
