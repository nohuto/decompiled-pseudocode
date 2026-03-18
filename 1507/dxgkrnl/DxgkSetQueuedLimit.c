/*
 * XREFs of DxgkSetQueuedLimit @ 0x1C00A5CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C007A23C (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **v10; // r8
  _OWORD *v11; // rcx
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // rdi
  __int64 v14; // rsi
  struct _KEVENT *v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int8 v25; // si
  __int64 v26; // r8
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  struct DXGDEVICE *v33; // [rsp+30h] [rbp-98h] BYREF
  struct DXGDEVICE *v34; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v35[8]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v36[8]; // [rsp+48h] [rbp-80h] BYREF
  DXGADAPTER *v37; // [rsp+50h] [rbp-78h]
  char v38; // [rsp+58h] [rbp-70h]
  _BYTE v39[8]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v40; // [rsp+68h] [rbp-60h]
  __int64 v41; // [rsp+78h] [rbp-50h]
  char v42; // [rsp+80h] [rbp-48h]
  struct DXGDEVICE *v43; // [rsp+90h] [rbp-38h] BYREF
  int v44; // [rsp+98h] [rbp-30h]
  unsigned int v45[4]; // [rsp+A0h] [rbp-28h] BYREF

  v3 = (_OWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2035);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v31 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v31 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v31);
    goto LABEL_52;
  }
  v10 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_52:
    v32 = WdLogNewEntry5_WdError(v7);
    v21 = -1073741811;
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return v21;
LABEL_54:
    Template_q(v22, &EventProfilerExit, v23, 2035);
    return v21;
  }
  v11 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v45 = *v11;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, v45[0], v10, &v33);
  v13 = v33;
  if ( !v33 )
  {
    v27 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v27 + 24) = v45[0];
    v21 = -1073741811;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34);
    goto LABEL_28;
  }
  v43 = v33;
  v14 = *((_QWORD *)v33 + 2);
  if ( *((_DWORD *)v33 + 70) == 2 )
  {
    v15 = (struct _KEVENT *)(v14 + 80);
    if ( KeReadStateEvent(v15) )
      goto LABEL_9;
  }
  else
  {
    v15 = (struct _KEVENT *)(v14 + 56);
    if ( KeReadStateEvent(v15) )
      goto LABEL_9;
  }
  KeWaitForSingleObject(v15, Executive, 0, 0, 0LL);
LABEL_9:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 10), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 80LL));
    v25 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v26, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 10), 1u);
    if ( v25 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 80LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v44 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, (__int64)v13, 2, v16, 0);
  if ( v38 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v19);
    v28[3] = 275LL;
    v28[4] = 4LL;
    v28[5] = v36;
    v28[6] = 0LL;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v37 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v37 + 32)) )
      KeWaitForSingleObject((char *)v37 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v37);
  }
  v38 = 1;
  if ( *(_DWORD *)(v41 + 352) != 1 )
    goto LABEL_46;
  if ( !v42 || (COREACCESS::AcquireShared((COREACCESS *)v39), *(_DWORD *)(v40 + 160) == 1) )
  {
    if ( v45[1] == 1 )
    {
      v20 = DXGDEVICE::SetQueuedPresentLimit(v33, v45[2]);
    }
    else
    {
      if ( v45[1] != 2 )
      {
        v21 = -1073741811;
LABEL_25:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
        ExReleaseResourceLite(*((PERESOURCE *)v33 + 10));
        KeLeaveCriticalRegion();
        if ( v34 )
        {
          v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v22 == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
        }
LABEL_28:
        if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
          return v21;
        goto LABEL_54;
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 376LL)
                                                                          + 8LL)
                                                              + 176LL))(
              *((_QWORD *)v33 + 68),
              &v45[2]);
    }
    v21 = v20;
    if ( v20 >= 0 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_OWORD *)MmUserProbeAddress;
      *v3 = *(_OWORD *)v45;
    }
    goto LABEL_25;
  }
  COREACCESS::Release((COREACCESS *)v39);
LABEL_46:
  COREACCESS::Release((COREACCESS *)v36);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v43);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 2035);
  return 3221226166LL;
}
