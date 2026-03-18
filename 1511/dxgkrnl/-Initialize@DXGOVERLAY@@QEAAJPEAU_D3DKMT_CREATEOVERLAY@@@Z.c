/*
 * XREFs of ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0148274
 * Callers:
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0139E30 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0001AB8 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000244C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C01251F0 (-AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z.c)
 *     ?DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z @ 0x1C0126B98 (-DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::Initialize(DXGOVERLAY *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v14; // r15
  unsigned int v15; // ecx
  __int64 v16; // r8
  int v17; // edx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // ebx
  D3DKMT_HANDLE v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  struct _EX_RUNDOWN_REF *v34[2]; // [rsp+30h] [rbp-49h] BYREF
  _DXGKARG_CREATEOVERLAY v35; // [rsp+40h] [rbp-39h] BYREF

  v5 = 0;
  if ( DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v4 + 552) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v4 + 616) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v4 + 608) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v4 + 600) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v6 = ADAPTER_RENDER::AcquireOverlayId(*(ADAPTER_RENDER **)(v4 + 1992), this);
    *((_DWORD *)this + 8) = v6;
    if ( v6 == -1 )
    {
      v11 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
      *(_QWORD *)(v11 + 24) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      WdLogEvent5_WdLowResource(v11);
      return 3221225626LL;
    }
    hAllocation = a2->OverlayInfo.hAllocation;
    v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 192));
    v15 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v15 < *(_DWORD *)(v14 + 232)
      && (v16 = *(_QWORD *)(v14 + 216),
          v17 = *(_DWORD *)(v16 + 16LL * v15 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x30))
      && (v17 & 0x1000) == 0
      && (v17 & 0xF) != 0
      && (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0xF) == 5 )
    {
      v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * v15);
    }
    else
    {
      v18 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v34, v18);
    ExReleasePushLockSharedEx(v14 + 192, 0LL);
    KeLeaveCriticalRegion();
    if ( v34[0] && (v20 = *(unsigned int *)(v34[0][6].Count + 4), (v20 & 8) != 0) && (v34[0][9].Count & 0x800) != 0 )
    {
      memset(&v35.OverlayInfo, 0, 0x50uLL);
      v35.VidPnSourceId = a2->VidPnSourceId;
      v23 = *((_QWORD *)this + 2);
      v35.OverlayInfo.hAllocation = *(HANDLE *)(v34[0][6].Count + 16);
      v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 1992LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(v24 + 424) + 8LL) + 208LL))(
        *(_QWORD *)(v24 + 432),
        *(_QWORD *)(v34[0][6].Count + 8),
        &v35.OverlayInfo.SegmentId,
        &v35.OverlayInfo.PhysicalAddress);
      v35.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
      v35.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
      v35.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
      v35.OverlayInfo.pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
      v26 = ADAPTER_RENDER::DdiCreateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1992LL),
              &v35,
              v25);
      if ( v26 < 0 )
      {
LABEL_24:
        v5 = v26;
        goto LABEL_25;
      }
      *((_QWORD *)this + 5) = v35.hOverlay;
      *((struct _EX_RUNDOWN_REF **)this + 6) = v34[0];
      v27 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 6u);
      *((_DWORD *)this + 6) = v27;
      if ( v27 )
      {
        a2->hOverlay = v27;
        *((_DWORD *)this + 7) = 1;
LABEL_25:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v34);
        return v5;
      }
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
      v26 = -1073741801;
      v32[3] = this;
      v32[4] = -1073741801LL;
    }
    else
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      v26 = -1073741811;
      v32[3] = this;
      v32[4] = a2->OverlayInfo.hAllocation;
      v32[5] = -1073741811LL;
    }
    WdLogEvent5_WdWarning(v32);
    goto LABEL_24;
  }
  v33 = (_QWORD *)WdLogNewEntry5_WdError(v4);
  v33[3] = this;
  v33[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v33[5] = -1073741637LL;
  WdLogEvent5_WdError(v33);
  return 3221225659LL;
}
