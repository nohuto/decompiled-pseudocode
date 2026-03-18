/*
 * XREFs of ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C01485B4
 * Callers:
 *     DxgkUpdateOverlay @ 0x1C0149900 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000244C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z @ 0x1C0128E7C (-DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::UpdateOverlay(struct _EX_RUNDOWN_REF *this, struct _D3DKMT_UPDATEOVERLAY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall **v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64); // rcx
  __int64 v7; // rax
  ULONG_PTR Count; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  UINT PrivateDriverDataSize; // eax
  __int64 v14; // rdx
  PVOID v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 hAllocation; // rcx
  __int64 v20; // rbx
  size_t v21; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v23; // r9
  int updated; // edi
  struct _EX_RUNDOWN_REF *v25[2]; // [rsp+30h] [rbp-78h] BYREF
  _DXGKARG_UPDATEOVERLAY v26; // [rsp+40h] [rbp-68h] BYREF

  v25[1] = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 265LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL))
    || v6[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[76] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[75] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 266LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( LODWORD(this[4].Count) == -1 )
    return 0LL;
  memset(&v26, 0, sizeof(v26));
  DXGPROCESS::GetAllocationSafe(
    *(_QWORD *)(this[2].Count + 40),
    (DXGALLOCATIONREFERENCE *)v25,
    a2->OverlayInfo.hAllocation);
  if ( !v25[0]
    || (Count = v25[0][6].Count, v10 = *(unsigned int *)(Count + 4), (v10 & 8) == 0)
    || (v25[0][9].Count & 0x800) == 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, Count, v11, v12);
    v18[3] = this[2].Count;
    v20 = -1073741811LL;
    hAllocation = a2->OverlayInfo.hAllocation;
    goto LABEL_27;
  }
  v26.OverlayInfo.hAllocation = *(HANDLE *)(Count + 16);
  _guard_dispatch_icall_fptr();
  v26.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
  v26.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
  PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
  if ( PrivateDriverDataSize && a2->OverlayInfo.pPrivateDriverData )
  {
    v26.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
    v15 = operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v26.OverlayInfo.pPrivateDriverData = v15;
    if ( !v15 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v14, v16, v17);
      v18[3] = this;
      hAllocation = v26.OverlayInfo.PrivateDriverDataSize;
      v20 = -1073741801LL;
LABEL_27:
      v18[4] = hAllocation;
      v18[5] = v20;
      WdLogEvent5_WdWarning(v18);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v25);
      return (unsigned int)v20;
    }
    v21 = v26.OverlayInfo.PrivateDriverDataSize;
    pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
    v23 = (ULONG64)pPrivateDriverData + v26.OverlayInfo.PrivateDriverDataSize;
    if ( v23 < (unsigned __int64)pPrivateDriverData || v23 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, pPrivateDriverData, v21);
  }
  else
  {
    a2->OverlayInfo.PrivateDriverDataSize = 0;
    a2->OverlayInfo.pPrivateDriverData = 0LL;
  }
  updated = ADAPTER_RENDER::DdiUpdateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 1992LL),
              this[5].Ptr,
              &v26);
  if ( updated >= 0 )
    this[6].Count = (ULONG_PTR)v25[0];
  operator delete(v26.OverlayInfo.pPrivateDriverData);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v25);
  return (unsigned int)updated;
}
