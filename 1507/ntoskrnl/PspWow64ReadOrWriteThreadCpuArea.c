/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x1405315F4
 * Callers:
 *     PspWowGetContextThread @ 0x140530EB8 (PspWowGetContextThread.c)
 *     PspWowSetContextThread @ 0x14056AA80 (PspWowSetContextThread.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PsGetThreadTeb @ 0x140119774 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     RtlWoW64GetCpuAreaInfo @ 0x140531984 (RtlWoW64GetCpuAreaInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspWow64ReadOrWriteThreadCpuArea(
        _KPROCESS *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        _BYTE *a8)
{
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // rsi
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 ThreadTeb; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  _OWORD *v21; // rsi
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  struct _KTHREAD *v24; // rbx
  __int16 v25; // ax
  struct _KTHREAD *v27; // rbx
  __int16 v28; // ax
  int CpuAreaInfo; // [rsp+24h] [rbp-C4h]
  volatile void *Address; // [rsp+50h] [rbp-98h] BYREF
  ULONG64 v33; // [rsp+68h] [rbp-80h]
  _BYTE v34[48]; // [rsp+78h] [rbp-70h] BYREF

  v8 = a4;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (unsigned __int64 *)(a2 + 1704);
  v13 = KeAbPreAcquire(a2 + 1704, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, v13, (ULONG_PTR)v11, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  ThreadTeb = PsGetThreadTeb(a2);
  if ( ThreadTeb )
  {
    KiStackAttachProcess(a1, 0, (__int64)v34);
    v16 = *(_QWORD *)(ThreadTeb + 5256);
    if ( v16 )
    {
      CpuAreaInfo = RtlWoW64GetCpuAreaInfo(v16, v15, &Address);
      if ( CpuAreaInfo >= 0 )
      {
        if ( a3 )
        {
          v17 = Address;
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Address + 716 > MmUserProbeAddress || (char *)Address + 716 < Address )
            *(_BYTE *)MmUserProbeAddress = 0;
          v18 = 5LL;
          do
          {
            *(_OWORD *)v8 = *v17;
            *(_OWORD *)(v8 + 16) = v17[1];
            *(_OWORD *)(v8 + 32) = v17[2];
            *(_OWORD *)(v8 + 48) = v17[3];
            *(_OWORD *)(v8 + 64) = v17[4];
            *(_OWORD *)(v8 + 80) = v17[5];
            *(_OWORD *)(v8 + 96) = v17[6];
            v8 += 128LL;
            *(_OWORD *)(v8 - 16) = v17[7];
            v17 += 8;
            --v18;
          }
          while ( v18 );
          *(_OWORD *)v8 = *v17;
          *(_OWORD *)(v8 + 16) = v17[1];
          *(_OWORD *)(v8 + 32) = v17[2];
          *(_OWORD *)(v8 + 48) = v17[3];
          *(_QWORD *)(v8 + 64) = *((_QWORD *)v17 + 8);
          *(_DWORD *)(v8 + 72) = *((_DWORD *)v17 + 18);
          if ( a7 )
          {
            v19 = (_DWORD *)v33;
            if ( v33 >= MmUserProbeAddress )
              v19 = (_DWORD *)MmUserProbeAddress;
            *a7 = *v19;
          }
        }
        else
        {
          v21 = Address;
          ProbeForWrite(Address, 0x2CCuLL, 4u);
          v22 = 5LL;
          do
          {
            *v21 = *(_OWORD *)v8;
            v21[1] = *(_OWORD *)(v8 + 16);
            v21[2] = *(_OWORD *)(v8 + 32);
            v21[3] = *(_OWORD *)(v8 + 48);
            v21[4] = *(_OWORD *)(v8 + 64);
            v21[5] = *(_OWORD *)(v8 + 80);
            v21[6] = *(_OWORD *)(v8 + 96);
            v21 += 8;
            *(v21 - 1) = *(_OWORD *)(v8 + 112);
            v8 += 128LL;
            --v22;
          }
          while ( v22 );
          *v21 = *(_OWORD *)v8;
          v21[1] = *(_OWORD *)(v8 + 16);
          v21[2] = *(_OWORD *)(v8 + 32);
          v21[3] = *(_OWORD *)(v8 + 48);
          *((_QWORD *)v21 + 8) = *(_QWORD *)(v8 + 64);
          *((_DWORD *)v21 + 18) = *(_DWORD *)(v8 + 72);
          if ( a7 )
          {
            v23 = (_DWORD *)v33;
            if ( v33 >= MmUserProbeAddress )
              v23 = (_DWORD *)MmUserProbeAddress;
            *v23 = *a7;
          }
        }
        if ( a8 )
        {
          v20 = *(_QWORD *)(ThreadTeb + 5328);
          if ( v20 )
          {
            if ( (v20 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v20 + 8 > MmUserProbeAddress || v20 + 8 < (unsigned __int64)(v20 + 4) )
              *(_BYTE *)MmUserProbeAddress = 0;
            *a8 = *(_BYTE *)(v20 + 4) & 2;
          }
          else
          {
            *a8 = 0;
          }
        }
      }
    }
    else
    {
      CpuAreaInfo = -1073741811;
    }
    KiUnstackDetachProcess((struct _KTHREAD *)v34, 0);
    v24 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1704), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a2 + 1704));
    KeAbPostRelease(a2 + 1704);
    v25 = v24->KernelApcDisable + 1;
    v24->KernelApcDisable = v25;
    if ( !v25
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
      && !v24->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return (unsigned int)CpuAreaInfo;
  }
  else
  {
    v27 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    v28 = v27->KernelApcDisable + 1;
    v27->KernelApcDisable = v28;
    if ( !v28
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
      && !v27->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225547LL;
  }
}
