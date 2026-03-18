/*
 * XREFs of ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0142860
 * Callers:
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0135234 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0002DD8 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B05C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C011F654 (-AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z.c)
 *     ?DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z @ 0x1C0120C40 (-DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::Initialize(DXGOVERLAY *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v13; // r15
  unsigned int v14; // ecx
  __int64 v15; // r8
  int v16; // edx
  struct _EX_RUNDOWN_REF *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  D3DKMT_HANDLE v31; // eax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  struct _EX_RUNDOWN_REF *v35[2]; // [rsp+30h] [rbp-49h] BYREF
  _DXGKARG_CREATEOVERLAY v36; // [rsp+40h] [rbp-39h] BYREF

  v7 = 0;
  if ( DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v4 + 552) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v4 + 616) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v4 + 608) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v4 + 600) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v8 = ADAPTER_RENDER::AcquireOverlayId(*(ADAPTER_RENDER **)(v4 + 1984), this, v5, v6);
    *((_DWORD *)this + 8) = v8;
    if ( v8 == -1 )
    {
      v10 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v10 + 24) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      WdLogEvent5_WdLowResource(v10);
      return 3221225626LL;
    }
    hAllocation = a2->OverlayInfo.hAllocation;
    v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 192));
    v14 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v14 < *(_DWORD *)(v13 + 232)
      && (v15 = *(_QWORD *)(v13 + 216),
          v16 = *(_DWORD *)(v15 + 16LL * v14 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x30))
      && (v16 & 0x1000) == 0
      && (v16 & 0xF) != 0
      && (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0xF) == 5 )
    {
      v17 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * v14);
    }
    else
    {
      v17 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v35, v17);
    ExReleasePushLockSharedEx(v13 + 192, 0LL);
    KeLeaveCriticalRegion();
    if ( !v35[0] )
      goto LABEL_24;
    v22 = *((_QWORD *)this + 2);
    v18 = *(_QWORD *)(v35[0][1].Count + 16);
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
    if ( *(_QWORD *)(v18 + 16) != v23 )
    {
      v24 = WdLogNewEntry5_WdError(v23);
      v25 = -1073741811;
      *(_QWORD *)(v24 + 24) = *((_QWORD *)this + 2);
      *(struct _EX_RUNDOWN_REF **)(v24 + 32) = v35[0];
      *(_QWORD *)(v24 + 40) = -1073741811LL;
      WdLogEvent5_WdError(v24);
LABEL_26:
      v7 = v25;
      goto LABEL_27;
    }
    v19 = *(unsigned int *)(v35[0][6].Count + 4);
    if ( (v19 & 8) != 0 && (v35[0][9].Count & 0x100) != 0 )
    {
      memset(&v36.OverlayInfo, 0, 0x50uLL);
      v36.VidPnSourceId = a2->VidPnSourceId;
      v36.OverlayInfo.hAllocation = *(HANDLE *)(v35[0][6].Count + 16);
      v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 1984LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(v29 + 400) + 8LL) + 208LL))(
        *(_QWORD *)(v29 + 408),
        *(_QWORD *)(v35[0][6].Count + 8),
        &v36.OverlayInfo.SegmentId,
        &v36.OverlayInfo.PhysicalAddress);
      v36.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
      v36.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
      v36.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
      v36.OverlayInfo.pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
      v25 = ADAPTER_RENDER::DdiCreateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1984LL),
              &v36,
              v30);
      if ( v25 < 0 )
        goto LABEL_26;
      *((_QWORD *)this + 5) = v36.hOverlay;
      *((struct _EX_RUNDOWN_REF **)this + 6) = v35[0];
      v31 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 6u);
      *((_DWORD *)this + 6) = v31;
      if ( v31 )
      {
        a2->hOverlay = v31;
        *((_DWORD *)this + 7) = 1;
LABEL_27:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v35, v26, v27, v28);
        return v7;
      }
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v26, v27, v28);
      v25 = -1073741801;
      v33[3] = this;
      v33[4] = -1073741801LL;
    }
    else
    {
LABEL_24:
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      v25 = -1073741811;
      v33[3] = this;
      v33[4] = a2->OverlayInfo.hAllocation;
      v33[5] = -1073741811LL;
    }
    WdLogEvent5_WdWarning(v33);
    goto LABEL_26;
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdError(v4);
  v34[3] = this;
  v34[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v34[5] = -1073741637LL;
  WdLogEvent5_WdError(v34);
  return 3221225659LL;
}
