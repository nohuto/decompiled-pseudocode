/*
 * XREFs of DxgkDestroyDevice @ 0x1C00786C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00016CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00069EC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006A94 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C0095BD4 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0095C18 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C015D370 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015D868 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall DxgkDestroyDevice(unsigned int *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessDxgProcess; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v14; // r14
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD v29[2]; // [rsp+70h] [rbp+0h] BYREF

  v1 = (unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL;
  memset((void *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 176), 0, 0x40uLL);
  EtwActivityIdControl(3u, (LPGUID)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 184));
  *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = 50;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v3, &EventProfilerEnter, v4, 2010);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v11 = qword_1C0056840;
    v12 = (qword_1C0056840 & 2) == 0;
LABEL_6:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2010);
    return 3221225485LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v14 = *a1;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)(v1 + 24),
    (struct DXGPROCESS *)ProcessDxgProcess);
  v16 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
  if ( v16 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v17 = *(_QWORD *)(ProcessDxgProcess + 208),
        v18 = *(_DWORD *)(v17 + 16LL * v16 + 8),
        v15 = ((unsigned int)v14 >> 26) & 0x30,
        (((unsigned int)v14 >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x30))
    && (v18 & 0x1000) == 0
    && (v18 & 0xF) != 0
    && (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0xF) == 3 )
  {
    v19 = *(_QWORD *)(v17 + 16LL * v16);
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v20 + 24) = v14;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v1 + 24));
    v12 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  if ( v16 < *(_DWORD *)(ProcessDxgProcess + 224) )
  {
    v21 = *(_QWORD *)(ProcessDxgProcess + 208);
    v22 = *(_DWORD *)(v21 + 16LL * v16 + 8);
    if ( (((unsigned int)v14 >> 26) & 0x30) == (v22 & 0x30) && (v22 & 0x1000) == 0 && (v22 & 0xF) != 0 )
      *(_DWORD *)(v21 + 16 * (((unsigned __int64)(unsigned int)v14 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v1 + 24));
  *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v19;
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL),
    (struct DXGDEVICE *)v19);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)(v1 + 48),
    (struct _KTHREAD **)(v19 + 88));
  DXGDEVICE::DestroyAllContexts(
    (DXGDEVICE *)v19,
    (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL));
  DXGDEVICE::DestroyAllPagingQueues(
    (DXGDEVICE *)v19,
    (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL));
  COREDEVICEACCESS::COREDEVICEACCESS(v1 + 80, v19, 2, v23, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)(v1 + 80));
  DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v19);
  v25 = *(_QWORD *)(v19 + 2856);
  if ( v25 && *(_DWORD *)(v25 + 176) == 1 )
  {
    if ( !*(_QWORD *)(v25 + 2128) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v24);
      *(_QWORD *)(v26 + 24) = 2010LL;
      WdLogEvent5_WdAssertion(v26);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v25 + 2128), (const struct DXGDEVICE *)v19)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v25 + 2128), (const struct DXGDEVICE *)v19) )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v1 + 80));
      DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        (struct DXGDEVICE *)v19,
        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(v1 + 176));
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v1 + 80));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v1 + 48));
  if ( *(_QWORD *)v1 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL));
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)(v1 + 16));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 2010);
  return 0LL;
}
