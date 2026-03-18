/*
 * XREFs of ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800A4D80
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004ED80 (-Release@CVisual@@UEAAKXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180051DA4 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18003B058 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_xx @ 0x18011436C (Template_xx.c)
 */

__int64 __fastcall CInteraction::SetVisual(CInteraction *this, struct CVisual *a2)
{
  __int64 v2; // rbx
  struct CWeakReferenceBase **v3; // rsi
  struct CResource **v6; // rdx
  unsigned int v7; // edi
  struct CVisual *v8; // rax
  int WeakReferenceBase; // eax

  v2 = 0LL;
  v3 = (struct CWeakReferenceBase **)((char *)this + 176);
  v6 = (struct CResource **)*((_QWORD *)this + 22);
  v7 = 0;
  if ( v6 )
    v8 = *v6;
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x99u);
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
