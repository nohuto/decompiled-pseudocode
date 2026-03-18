/*
 * XREFs of ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C0142BE4
 * Callers:
 *     DxgkUpdateOverlay @ 0x1C0143F70 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B05C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z @ 0x1C0123194 (-DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::UpdateOverlay(struct _EX_RUNDOWN_REF *this, struct _D3DKMT_UPDATEOVERLAY *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 (__fastcall **v10)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64); // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  ULONG_PTR Count; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  UINT PrivateDriverDataSize; // eax
  __int64 v25; // rdx
  PVOID v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 hAllocation; // rcx
  size_t v31; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v33; // r9
  int updated; // edi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _EX_RUNDOWN_REF *v38[2]; // [rsp+30h] [rbp-78h] BYREF
  _DXGKARG_UPDATEOVERLAY v39; // [rsp+40h] [rbp-68h] BYREF

  v3 = (__int64)this;
  v38[1] = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 274LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL))
    || v10[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v10[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v10[76] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v10[75] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 275LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *(_DWORD *)(v3 + 32) == -1 )
    return 0LL;
  memset(&v39, 0, sizeof(v39));
  DXGPROCESS::GetAllocationSafe(
    *(_QWORD *)(*(_QWORD *)(v3 + 16) + 40LL),
    (DXGALLOCATIONREFERENCE *)v38,
    a2->OverlayInfo.hAllocation);
  if ( !v38[0] )
    goto LABEL_28;
  v18 = *(_QWORD *)(v3 + 16);
  v17 = *(_QWORD *)(*(_QWORD *)(v38[0][1].Count + 16) + 16LL);
  v19 = *(_QWORD *)(v18 + 16);
  if ( v17 != *(_QWORD *)(v19 + 16) )
  {
    v20 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v20 + 24) = *(_QWORD *)(v3 + 16);
    *(struct _EX_RUNDOWN_REF **)(v20 + 32) = v38[0];
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v20 + 40) = -1073741811LL;
    WdLogEvent5_WdError(v20);
LABEL_30:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v38, v21, v22, v23);
    return (unsigned int)v3;
  }
  Count = v38[0][6].Count;
  v16 = *(unsigned int *)(Count + 4);
  if ( (v16 & 8) == 0 || (v38[0][9].Count & 0x100) == 0 )
  {
LABEL_28:
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, Count, v17, v18);
    v29[3] = *(_QWORD *)(v3 + 16);
    hAllocation = a2->OverlayInfo.hAllocation;
    v3 = -1073741811LL;
    goto LABEL_29;
  }
  v39.OverlayInfo.hAllocation = *(HANDLE *)(Count + 16);
  _guard_dispatch_icall_fptr();
  v39.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
  v39.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
  PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
  if ( PrivateDriverDataSize && a2->OverlayInfo.pPrivateDriverData )
  {
    v39.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
    v26 = operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v39.OverlayInfo.pPrivateDriverData = v26;
    if ( !v26 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v25, v27, v28);
      v29[3] = v3;
      hAllocation = v39.OverlayInfo.PrivateDriverDataSize;
      v3 = -1073741801LL;
LABEL_29:
      v29[4] = hAllocation;
      v29[5] = v3;
      WdLogEvent5_WdWarning(v29);
      goto LABEL_30;
    }
    v31 = v39.OverlayInfo.PrivateDriverDataSize;
    pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
    v33 = (ULONG64)pPrivateDriverData + v39.OverlayInfo.PrivateDriverDataSize;
    if ( v33 < (unsigned __int64)pPrivateDriverData || v33 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v26, pPrivateDriverData, v31);
  }
  else
  {
    a2->OverlayInfo.PrivateDriverDataSize = 0;
    a2->OverlayInfo.pPrivateDriverData = 0LL;
  }
  updated = ADAPTER_RENDER::DdiUpdateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL) + 1984LL),
              *(void **)(v3 + 40),
              &v39);
  if ( updated >= 0 )
    *(struct _EX_RUNDOWN_REF **)(v3 + 48) = v38[0];
  operator delete(v39.OverlayInfo.pPrivateDriverData);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v38, v35, v36, v37);
  return (unsigned int)updated;
}
