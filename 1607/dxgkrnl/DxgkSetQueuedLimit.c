/*
 * XREFs of DxgkSetQueuedLimit @ 0x1C00CCB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C00958EC (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
  _OWORD *v8; // rcx
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // rsi
  struct _KEVENT *v12; // rsi
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int8 v22; // si
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGDEVICE *v29; // [rsp+30h] [rbp-A8h] BYREF
  struct DXGDEVICE *v30; // [rsp+38h] [rbp-A0h] BYREF
  struct DXGDEVICE *v31; // [rsp+40h] [rbp-98h] BYREF
  int v32; // [rsp+48h] [rbp-90h]
  _BYTE v33[8]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v34[16]; // [rsp+58h] [rbp-80h] BYREF
  DXGADAPTER *v35; // [rsp+68h] [rbp-70h]
  char v36; // [rsp+70h] [rbp-68h]
  _BYTE v37[16]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v38; // [rsp+88h] [rbp-50h]
  __int64 v39; // [rsp+98h] [rbp-40h]
  char v40; // [rsp+A0h] [rbp-38h]
  unsigned int v41[4]; // [rsp+B0h] [rbp-28h] BYREF

  v3 = (_OWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2035);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( ProcessDxgProcess )
  {
    v8 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v8 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v41 = *v8;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30, v41[0], ProcessDxgProcess, &v29);
    v10 = v29;
    if ( v29 )
    {
      v31 = v29;
      v11 = *((_QWORD *)v29 + 2);
      if ( *((_DWORD *)v29 + 76) == 2 )
      {
        v12 = (struct _KEVENT *)(v11 + 80);
        if ( KeReadStateEvent(v12) )
          goto LABEL_8;
      }
      else
      {
        v12 = (struct _KEVENT *)(v11 + 56);
        if ( KeReadStateEvent(v12) )
          goto LABEL_8;
      }
      KeWaitForSingleObject(v12, Executive, 0, 0, 0LL);
LABEL_8:
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 10), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 96LL));
        v22 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v23, 40);
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 10), 1u);
        if ( v22 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 96LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v32 = 1;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v10, 2, v13, 0);
      if ( v36 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v16);
        v26[3] = 275LL;
        v26[4] = 4LL;
        v26[5] = v34;
        v26[6] = 0LL;
        v26[7] = 0LL;
        WdLogEvent5_WdCriticalError(v26);
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v35 + 20) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v35 + 2) )
          KeWaitForSingleObject((char *)v35 + 48, Executive, 0, 0, 0LL);
        DXGADAPTER::AcquireCoreResourceShared(v35);
      }
      v36 = 1;
      if ( *(_DWORD *)(v39 + 376) != 1 )
        goto LABEL_46;
      if ( v40 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v37);
        if ( *(_DWORD *)(v38 + 176) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v37);
LABEL_46:
          COREACCESS::Release((COREACCESS *)v34);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v31);
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30);
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v27, &EventProfilerExit, v28, 2035);
          return 3221226166LL;
        }
      }
      if ( v41[1] == 1 )
      {
        v17 = DXGDEVICE::SetQueuedPresentLimit(v29, v41[2]);
      }
      else
      {
        if ( v41[1] != 2 )
        {
          v18 = -1073741811;
LABEL_24:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
          ExReleaseResourceLite(*((PERESOURCE *)v29 + 10));
          KeLeaveCriticalRegion();
          if ( v30 )
          {
            v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL);
            if ( v19 == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
          }
          goto LABEL_27;
        }
        v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 376LL)
                                                                            + 8LL)
                                                                + 176LL))(
                *((_QWORD *)v29 + 71),
                &v41[2]);
      }
      v18 = v17;
      if ( v17 >= 0 )
      {
        if ( (unsigned __int64)v3 >= MmUserProbeAddress )
          v3 = (_OWORD *)MmUserProbeAddress;
        *v3 = *(_OWORD *)v41;
      }
      goto LABEL_24;
    }
    v25 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v25 + 24) = v41[0];
    v18 = -1073741811;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30);
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v6);
    v18 = -1073741811;
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
  }
LABEL_27:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 2035);
  return v18;
}
