/*
 * XREFs of DxgkDestroyDevice @ 0x1C0094C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002BEC (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00067E0 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006888 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C007A2B8 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C007A2FC (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0135474 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C0135970 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbp
  unsigned int *v4; // rbx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v12; // r14
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // [rsp+70h] [rbp+0h] BYREF

  v3 = (__int64 *)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (unsigned int *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2010);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v9 = qword_1C00467F0;
    v10 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v9, &EventProfilerExit, v8, 2010);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (unsigned int *)MmUserProbeAddress;
  v12 = *v4;
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v12;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)(v3 + 3), Current);
  v14 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( v14 < *((_DWORD *)Current + 58)
    && (v15 = *((_QWORD *)Current + 27),
        v16 = *(_DWORD *)(v15 + 16LL * v14 + 8),
        v13 = ((unsigned int)v12 >> 26) & 0x30,
        (((unsigned int)v12 >> 26) & 0x30) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x30))
    && (v16 & 0x1000) == 0
    && (v16 & 0xF) != 0
    && (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0xF) == 3 )
  {
    v17 = *(_QWORD *)(v15 + 16LL * v14);
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v18 + 24) = v12;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 3));
    v10 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  if ( v14 < *((_DWORD *)Current + 58) )
  {
    v19 = *((_QWORD *)Current + 27);
    v20 = *(_DWORD *)(v19 + 16LL * v14 + 8);
    if ( (((unsigned int)v12 >> 26) & 0x30) == (v20 & 0x30) && (v20 & 0x1000) == 0 && (v20 & 0xF) != 0 )
      *(_DWORD *)(v19 + 16 * (((unsigned __int64)(unsigned int)v12 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 3));
  *v3 = v17;
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL));
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)(v3 + 6),
    (struct _KTHREAD **)(v17 + 88));
  DXGDEVICE::DestroyAllContexts(
    (PERESOURCE *)v17,
    (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL));
  DXGDEVICE::DestroyAllPagingQueues(
    (DXGDEVICE *)v17,
    (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 10), v17, 2, v21, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)(v3 + 10));
  DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v17);
  v26 = *(_QWORD *)(v17 + 18704);
  if ( v26 && *(_DWORD *)(v26 + 160) == 1 )
  {
    if ( !*(_QWORD *)(v26 + 1976) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
      *(_QWORD *)(v27 + 24) = 1890LL;
      WdLogEvent5_WdAssertion(v27);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v26 + 1976), (const struct DXGDEVICE *)v17)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v26 + 1976), (const struct DXGDEVICE *)v17) )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 10));
      DxgkReleaseVidPnSourceOwnerAndRestartCdds((struct DXGDEVICE *)v17);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 6));
  v29 = *v3;
  if ( *v3 && *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v29 + 80));
    KeLeaveCriticalRegion();
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v17 + 16), (struct DXGDEVICE *)v17);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v28, 2010);
  return 0LL;
}
