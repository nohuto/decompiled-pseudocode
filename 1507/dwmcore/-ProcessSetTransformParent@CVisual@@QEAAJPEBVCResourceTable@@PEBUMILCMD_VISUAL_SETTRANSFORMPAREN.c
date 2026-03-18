/*
 * XREFs of ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800355CC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180036438 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180067F90 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180067FF4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetTransformParent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETTRANSFORMPARENT *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  struct CResource *Resource; // rax
  struct CWeakReferenceBase *v8; // rdx
  struct CResource *v9; // rcx
  struct CWeakReferenceBase *v10; // rsi
  int WeakReferenceBase; // eax
  struct CWeakReferenceBase *v12; // rdx
  struct CWeakReferenceBase *v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 && (Resource = (struct CResource *)CResourceTable::GetResource(a2, v5, 31LL)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x75Eu);
  }
  else
  {
    v8 = (struct CWeakReferenceBase *)*((_QWORD *)this + 45);
    if ( v8 )
      v9 = *(struct CResource **)v8;
    else
      v9 = 0LL;
    if ( Resource == v9 )
    {
      if ( v8 && !v9 )
      {
        CComposition::ReleaseWeakReference(*((CComposition **)this + 2), v8);
        *((_QWORD *)this + 45) = 0LL;
      }
    }
    else
    {
      v10 = 0LL;
      v14 = 0LL;
      if ( Resource )
      {
        WeakReferenceBase = CComposition::GetWeakReferenceBase(*((CComposition **)this + 2), Resource, &v14);
        v4 = WeakReferenceBase;
        if ( WeakReferenceBase < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x76Du);
          return v4;
        }
        v10 = v14;
      }
      v12 = (struct CWeakReferenceBase *)*((_QWORD *)this + 45);
      if ( v12 )
        CComposition::ReleaseWeakReference(*((CComposition **)this + 2), v12);
      *((_QWORD *)this + 45) = v10;
      CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    }
    CVisual::OnOuterTransformChanged(this);
  }
  return v4;
}
