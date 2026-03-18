/*
 * XREFs of ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1C016CB48
 * Callers:
 *     DxgkFlipOverlay @ 0x1C016DF10 (DxgkFlipOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0008750 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z @ 0x1C014AEE4 (-DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::FlipOverlay(DXGOVERLAY *this, struct _D3DKMT_FLIPOVERLAY *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall **v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64); // rcx
  __int64 v7; // rax
  ULONG_PTR Count; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rax
  UINT PrivateDriverDataSize; // eax
  __int64 v16; // rdx
  PVOID v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 hSource; // rcx
  size_t v22; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v24; // r9
  int v25; // edi
  _DXGKARG_FLIPOVERLAY v26; // [rsp+30h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v27; // [rsp+80h] [rbp+18h] BYREF

  v3 = (__int64)this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 402LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL))
    || v6[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 403LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *(_DWORD *)(v3 + 32) == -1 )
    return 0LL;
  memset(&v26, 0, sizeof(v26));
  DXGPROCESS::GetAllocationSafe(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 40LL), (DXGALLOCATIONREFERENCE *)&v27, a2->hSource);
  if ( !v27 )
    goto LABEL_28;
  v12 = *(_QWORD *)(v3 + 16);
  v11 = *(_QWORD *)(*(_QWORD *)(v27[1].Count + 16) + 16LL);
  v13 = *(_QWORD *)(v12 + 16);
  if ( v11 != *(_QWORD *)(v13 + 16) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v14[3] = *(_QWORD *)(v3 + 16);
    v14[4] = v27;
    LODWORD(v3) = -1073741811;
    v14[5] = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_30:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v27);
    return (unsigned int)v3;
  }
  Count = v27[6].Count;
  v10 = *(unsigned int *)(Count + 4);
  if ( (v10 & 8) == 0 || (v27[9].Count & 0x800) == 0 )
  {
LABEL_28:
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, Count, v11, v12);
    v20[3] = *(_QWORD *)(v3 + 16);
    hSource = a2->hSource;
    v3 = -1073741811LL;
    goto LABEL_29;
  }
  v26.hSource = *(HANDLE *)(Count + 16);
  _guard_dispatch_icall_fptr();
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( PrivateDriverDataSize && a2->pPrivateDriverData )
  {
    v26.PrivateDriverDataSize = a2->PrivateDriverDataSize;
    v17 = operator new(PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v26.pPrivateDriverData = v17;
    if ( !v17 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v16, v18, v19);
      v20[3] = v3;
      hSource = v26.PrivateDriverDataSize;
      v3 = -1073741801LL;
LABEL_29:
      v20[4] = hSource;
      v20[5] = v3;
      WdLogEvent5_WdWarning(v20);
      goto LABEL_30;
    }
    v22 = v26.PrivateDriverDataSize;
    pPrivateDriverData = a2->pPrivateDriverData;
    v24 = (ULONG64)pPrivateDriverData + v26.PrivateDriverDataSize;
    if ( v24 < (unsigned __int64)pPrivateDriverData || v24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v17, pPrivateDriverData, v22);
  }
  else
  {
    a2->PrivateDriverDataSize = 0;
    a2->pPrivateDriverData = 0LL;
  }
  v25 = ADAPTER_RENDER::DdiFlipOverlay(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL) + 2136LL),
          *(void **)(v3 + 40),
          &v26);
  if ( v25 >= 0 )
    *(_QWORD *)(v3 + 48) = v27;
  operator delete(v26.pPrivateDriverData);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v27);
  return (unsigned int)v25;
}
