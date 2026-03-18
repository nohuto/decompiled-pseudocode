/*
 * XREFs of ?ClearContentTreeDataCaches@CVisual@@AEAAXXZ @ 0x180050DE0
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18000B8F0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180050B44 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180053710 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x180031364 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::ClearContentTreeDataCaches(CVisual *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  unsigned int i; // edi
  __int64 j; // rcx
  _QWORD *k; // rbx
  CMILRefCountBase *v7; // rcx
  void (*v8)(void); // rax
  _QWORD *v9; // [rsp+30h] [rbp+8h]

  v1 = *((_QWORD *)this + 56);
  if ( v1 )
  {
    for ( i = 0; i < *(_DWORD *)(v1 + 24); ++i )
    {
      v7 = *(CMILRefCountBase **)(*(_QWORD *)v1 + 16LL * i + 8);
      if ( v7 )
      {
        v8 = *(void (**)(void))(*(_QWORD *)v7 + 8LL);
        if ( (char *)v8 == (char *)CMILRefCountBase::Release )
          CMILRefCountBase::Release(v7);
        else
          v8();
      }
      v1 = *((_QWORD *)this + 56);
    }
    *(_DWORD *)(*((_QWORD *)this + 56) + 24LL) = 0;
  }
  v3 = *((_QWORD *)this + 34);
  if ( (*(_DWORD *)(v3 + 4) & 0x80000) != 0 )
  {
    for ( j = v3 + 12; (*(_DWORD *)j & 0x7F000000) != 0xD000000; j += (*(_DWORD *)j & 0xFFFFFF) + 4LL )
      ;
    v9 = *(_QWORD **)(j + 4);
    if ( v9 )
    {
      for ( k = (_QWORD *)*v9; k != v9; k = (_QWORD *)*k )
        CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(k - 12));
    }
  }
}
