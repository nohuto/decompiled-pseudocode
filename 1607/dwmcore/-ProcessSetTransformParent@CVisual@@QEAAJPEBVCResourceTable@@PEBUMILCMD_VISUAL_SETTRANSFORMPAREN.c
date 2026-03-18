/*
 * XREFs of ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x18004F010
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18003B058 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004F938 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18004F984 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800510C8 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800B2100 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetTransformParent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETTRANSFORMPARENT *a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // edx
  char v6; // r15
  struct CResource *Resource; // rsi
  char v10; // r13
  int v11; // r12d
  struct CResource ***TransformParentDataInternal; // rax
  struct CResource *v13; // r14
  __int64 v14; // rbx
  char v15; // r12
  CComposition *v16; // rcx
  int WeakReferenceBase; // eax
  struct TransformParentData *v18; // rdx
  __int64 v19; // r10
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v23; // eax
  struct CResource **v24; // rdx
  int v25; // r9d
  __int64 v26; // rcx
  unsigned int v27; // [rsp+20h] [rbp-48h]
  struct CWeakReferenceBase *v28; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0;
  Resource = 0LL;
  if ( v5 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x20u);
    if ( !Resource )
    {
      v4 = -2003303421;
      v27 = 1974;
LABEL_39:
      v25 = v4;
LABEL_41:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v27);
      return v4;
    }
  }
  v10 = *((_DWORD *)a3 + 3) != 0;
  v11 = *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) >> 28;
  TransformParentDataInternal = (struct CResource ***)CVisual::GetTransformParentDataInternal(this);
  v13 = 0LL;
  v14 = (__int64)TransformParentDataInternal;
  v15 = v11 & 1;
  if ( v15 )
  {
    v24 = *TransformParentDataInternal;
    if ( *TransformParentDataInternal )
      v13 = *v24;
    if ( !v13 )
    {
      CComposition::ReleaseWeakReference(*((CComposition **)this + 2), v24);
      v6 = 1;
    }
  }
  if ( Resource == v13 )
    goto LABEL_18;
  if ( Resource && !v15 )
  {
    v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            16LL);
    if ( v14 )
    {
      *(_QWORD *)v14 = 0LL;
      *(_QWORD *)(v14 + 8) = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    if ( !v14 )
    {
      v4 = -2147024882;
      v27 = 2001;
      goto LABEL_39;
    }
  }
  if ( v13 )
    CComposition::ReleaseWeakReference(*((CComposition **)this + 2), *(struct CResource ***)v14);
  if ( !Resource )
  {
    if ( v14 )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v14);
      v14 = 0LL;
    }
    v18 = 0LL;
    goto LABEL_16;
  }
  v16 = (CComposition *)*((_QWORD *)this + 2);
  v28 = 0LL;
  WeakReferenceBase = CComposition::GetWeakReferenceBase(v16, Resource, &v28);
  v4 = WeakReferenceBase;
  if ( WeakReferenceBase < 0 )
  {
    v27 = 2012;
    v25 = WeakReferenceBase;
    goto LABEL_41;
  }
  *(_QWORD *)v14 = v28;
  if ( !v15 )
  {
    v18 = (struct TransformParentData *)v14;
LABEL_16:
    CVisual::SetTransformParentDataInternal(this, v18);
  }
  v6 = 1;
LABEL_18:
  if ( v14 && *(_BYTE *)(v14 + 8) != v10 )
  {
    *(_BYTE *)(v14 + 8) = v10;
    v6 = 1;
  }
  if ( v6 )
  {
    if ( v15 )
    {
      if ( !Resource )
      {
        v26 = *((_QWORD *)this + 2) + 936LL;
        v28 = this;
        DynArray<CVisual *,0>::Remove(v26, &v28);
      }
    }
    else if ( Resource )
    {
      v19 = *((_QWORD *)this + 2);
      v28 = this;
      v20 = *(_DWORD *)(v19 + 960);
      v21 = v20 + 1;
      if ( v20 + 1 < v20 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else if ( v21 > *(_DWORD *)(v19 + 956) )
      {
        v23 = DynArrayImpl<0>::AddMultipleAndSet(v19 + 936, 8LL, 1LL, &v28);
        if ( v23 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v19 + 936) + 8LL * v20) = v28;
        *(_DWORD *)(v19 + 960) = v21;
      }
    }
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    CVisual::OnOuterTransformChanged(this);
  }
  return v4;
}
