/*
 * XREFs of ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C016CF10
 * Callers:
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C015D288 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0008750 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00097B4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C01489F8 (-AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z.c)
 *     ?DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z @ 0x1C014AAD0 (-DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::Initialize(DXGOVERLAY *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v11; // r15
  unsigned int v12; // ecx
  __int64 v13; // r8
  int v14; // edx
  struct _EX_RUNDOWN_REF *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // r8
  D3DKMT_HANDLE v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  struct _EX_RUNDOWN_REF *v33[2]; // [rsp+30h] [rbp-49h] BYREF
  _DXGKARG_CREATEOVERLAY v34; // [rsp+40h] [rbp-39h] BYREF

  v5 = 0;
  if ( DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v4 + 568) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v4 + 632) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v4 + 624) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v4 + 616) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v6 = ADAPTER_RENDER::AcquireOverlayId(*(ADAPTER_RENDER **)(v4 + 2136), this);
    *((_DWORD *)this + 8) = v6;
    if ( v6 == -1 )
    {
      v8 = WdLogNewEntry5_WdLowResource(v7);
      *(_QWORD *)(v8 + 24) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      WdLogEvent5_WdLowResource(v8);
      return 3221225626LL;
    }
    hAllocation = a2->OverlayInfo.hAllocation;
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 184));
    v12 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v12 < *(_DWORD *)(v11 + 224)
      && (v13 = *(_QWORD *)(v11 + 208),
          v14 = *(_DWORD *)(v13 + 16LL * v12 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x30))
      && (v14 & 0x1000) == 0
      && (v14 & 0xF) != 0
      && (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0xF) == 5 )
    {
      v15 = *(struct _EX_RUNDOWN_REF **)(v13 + 16LL * v12);
    }
    else
    {
      v15 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v33, v15);
    ExReleasePushLockSharedEx(v11 + 184, 0LL);
    KeLeaveCriticalRegion();
    if ( !v33[0] )
      goto LABEL_24;
    v20 = *((_QWORD *)this + 2);
    v16 = *(_QWORD *)(v33[0][1].Count + 16);
    v21 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
    if ( *(_QWORD *)(v16 + 16) != v21 )
    {
      v22 = WdLogNewEntry5_WdError(v21);
      v23 = -1073741811;
      *(_QWORD *)(v22 + 24) = *((_QWORD *)this + 2);
      *(struct _EX_RUNDOWN_REF **)(v22 + 32) = v33[0];
      *(_QWORD *)(v22 + 40) = -1073741811LL;
      WdLogEvent5_WdError(v22);
LABEL_26:
      v5 = v23;
      goto LABEL_27;
    }
    v17 = *(unsigned int *)(v33[0][6].Count + 4);
    if ( (v17 & 8) != 0 && (v33[0][9].Count & 0x800) != 0 )
    {
      memset(&v34.OverlayInfo, 0, 0x50uLL);
      v34.VidPnSourceId = a2->VidPnSourceId;
      v34.OverlayInfo.hAllocation = *(HANDLE *)(v33[0][6].Count + 16);
      v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 2136LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(v24 + 400) + 8LL) + 216LL))(
        *(_QWORD *)(v24 + 408),
        *(_QWORD *)(v33[0][6].Count + 8),
        &v34.OverlayInfo.SegmentId,
        &v34.OverlayInfo.PhysicalAddress);
      v34.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
      v34.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
      v34.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
      v34.OverlayInfo.pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
      v23 = ADAPTER_RENDER::DdiCreateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2136LL),
              &v34,
              v25);
      if ( v23 < 0 )
        goto LABEL_26;
      *((_QWORD *)this + 5) = v34.hOverlay;
      *((struct _EX_RUNDOWN_REF **)this + 6) = v33[0];
      v26 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 6u);
      *((_DWORD *)this + 6) = v26;
      if ( v26 )
      {
        a2->hOverlay = v26;
        *((_DWORD *)this + 7) = 1;
LABEL_27:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v33);
        return v5;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
      v23 = -1073741801;
      v31[3] = this;
      v31[4] = -1073741801LL;
    }
    else
    {
LABEL_24:
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      v23 = -1073741811;
      v31[3] = this;
      v31[4] = a2->OverlayInfo.hAllocation;
      v31[5] = -1073741811LL;
    }
    WdLogEvent5_WdWarning(v31);
    goto LABEL_26;
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdError(v4);
  v32[3] = this;
  v32[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v32[5] = -1073741637LL;
  WdLogEvent5_WdError(v32);
  return 3221225659LL;
}
