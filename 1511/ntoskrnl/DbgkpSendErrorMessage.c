/*
 * XREFs of DbgkpSendErrorMessage @ 0x1404A403C
 * Callers:
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x1403ED944 (DbgkForwardException.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeTestAlertThread @ 0x14002B04C (KeTestAlertThread.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     AlpcGetMessageAttribute @ 0x140092160 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14009226C (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140151720 (ZwAlpcSendWaitReceivePort.c)
 *     ZwFlushInstructionCache @ 0x140152160 (ZwFlushInstructionCache.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeCopyExceptionRecord @ 0x140166E90 (KeCopyExceptionRecord.c)
 *     DbgkForwardException @ 0x1403ED944 (DbgkForwardException.c)
 *     MmGetSectionInformation @ 0x14044F1E4 (MmGetSectionInformation.c)
 *     PsThawProcess @ 0x1404529E8 (PsThawProcess.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404A4564 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkpStartSystemErrorHandler @ 0x1404A45AC (DbgkpStartSystemErrorHandler.c)
 *     DbgkpSuspendProcess @ 0x1404A46AC (DbgkpSuspendProcess.c)
 *     DbgkpDeleteErrorPort @ 0x1405F05F4 (DbgkpDeleteErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1405F0618 (DbgkpRemoveErrorPort.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r13
  char v6; // r12
  __int64 Process; // r14
  signed int started; // edi
  LARGE_INTEGER *Timeout; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  _BOOL8 v18; // rcx
  int v19; // ebx
  _DWORD *MessageAttribute; // rax
  NTSTATUS v21; // eax
  char v23; // [rsp+40h] [rbp-C0h]
  _BYTE *Object; // [rsp+48h] [rbp-B8h]
  ULONG_PTR RequiredBufferSize; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v28; // [rsp+60h] [rbp-A0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+70h] [rbp-90h] BYREF

  CurrentThread = KeGetCurrentThread();
  v27 = a1;
  v6 = 0;
  Process = (__int64)CurrentThread->Process;
  memset(Buffer, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 1724) & 1) != 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    MmGetSectionInformation(*(_QWORD *)(Process + 952), 1);
    if ( (unsigned int)MmGetSessionIdEx((struct _KPROCESS *)Process)
      && Buffer[4].AllocatedAttributes != 1
      && (a2 & 2) != 0 )
    {
      v6 = DbgkpSuspendProcess(Process);
    }
    started = DbgkpStartSystemErrorHandler();
    if ( started >= 0 )
    {
      if ( DbgkErrorPortStartTimeout == -1 )
      {
        Timeout = 0LL;
      }
      else
      {
        Timeout = &v28;
        v28.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
      }
      if ( KeWaitForSingleObject(DbgkErrorPortRegisteredEvent, Executive, 0, 0, Timeout) == 258 || !DbgkpErrorPort )
      {
        started = -1073740973;
      }
      else
      {
        Object = 0LL;
        --CurrentThread->KernelApcDisable;
        started = 0;
        v10 = 0LL;
        v11 = KeAbPreAcquire((ULONG_PTR)&DbgkpErrorPortLock, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&DbgkpErrorPortLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&DbgkpErrorPortLock, v11, (ULONG_PTR)&DbgkpErrorPortLock);
        if ( v11 )
          *(_BYTE *)(v11 + 26) |= 1u;
        if ( (PVOID)Process == DbgkpErrorProcess )
        {
          started = -1073741420;
        }
        else
        {
          v10 = DbgkpErrorPort;
          if ( DbgkpErrorPort )
          {
            Object = DbgkpErrorProcess;
            ObfReferenceObjectWithTag(DbgkpErrorProcess, 0x50676244u);
            _InterlockedAdd((volatile signed __int32 *)v10, 1u);
          }
          else
          {
            started = -1073740973;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&DbgkpErrorPortLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&DbgkpErrorPortLock);
        KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        if ( started >= 0 )
        {
          memset(a3, 0, 0x28uLL);
          v12 = v27;
          a3[1] = 8;
          *((_WORD *)a3 + 2) = -32761;
          *a3 = 17826024;
          a3[10] = 7;
          a3[11] = -2147418111;
          KeCopyExceptionRecord((_OWORD *)a3 + 3, v12);
          v14 = 0LL;
          v15 = *(_OWORD *)&Buffer[2].AllocatedAttributes;
          *(_OWORD *)(a3 + 50) = *(_OWORD *)&Buffer[0].AllocatedAttributes;
          a3[66] = 0;
          v16 = *(_OWORD *)&Buffer[4].AllocatedAttributes;
          *(_OWORD *)(a3 + 54) = v15;
          v17 = *(_OWORD *)&Buffer[6].AllocatedAttributes;
          *(_OWORD *)(a3 + 58) = v16;
          *(_OWORD *)(a3 + 62) = v17;
          v18 = (*(_BYTE *)(Process + 1722) & 7) != 0;
          a3[66] = v18;
          if ( *(_QWORD *)(Process + 720) )
            a3[66] |= 8u;
          if ( *(_QWORD *)(Process + 1064) )
            a3[66] |= 2u;
          if ( (a2 & 1) != 0 )
          {
            a3[66] |= 4u;
            v23 = 1;
          }
          else
          {
            v23 = 0;
          }
          LOBYTE(v18) = 1;
          LOBYTE(v13) = *(_BYTE *)(Process + 1722);
          LOBYTE(v14) = Object[1722];
          v19 = (unsigned __int8)PspCheckForInvalidAccessByProtection(v18, v14, v13) != 0 ? 1055744 : 0x1FFFFF;
          AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0x98uLL, &RequiredBufferSize);
          Buffer[0].ValidAttributes = 0x10000000;
          MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
          MessageAttribute[5] = v19;
          *MessageAttribute = 0;
          MessageAttribute[4] = 4;
          *((_QWORD *)MessageAttribute + 1) = -2LL;
          RequiredBufferSize = 272LL;
          KeTestAlertThread(0);
          if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
            started = -1073741749;
          if ( started < 0
            || (v21 = ZwAlpcSendWaitReceivePort(
                        *(HANDLE *)(v10 + 8),
                        0x220000u,
                        (PPORT_MESSAGE)a3,
                        Buffer,
                        (PPORT_MESSAGE)a3,
                        &RequiredBufferSize,
                        0LL,
                        0LL),
                started = v21,
                v21 < 0) )
          {
            if ( started == -1073741769 )
              DbgkpRemoveErrorPort(CurrentThread, v10);
          }
          else if ( v21 == 257 )
          {
            started = -1073741749;
          }
          else
          {
            if ( (a3[1] & 0x2000) != 0 )
              ZwAlpcSendWaitReceivePort(*(HANDLE *)(v10 + 8), 0x10000u, (PPORT_MESSAGE)a3, 0LL, 0LL, 0LL, 0LL, 0LL);
            started = a3[11];
            if ( started >= 0 && !v23 )
            {
              if ( started == 65538 )
              {
                if ( v6 )
                {
                  PsThawProcess(Process, 0);
                  KeLeaveCriticalRegion();
                  v6 = 0;
                }
                started = !DbgkForwardException(v27, 1, 1) ? 0xC0000144 : 0;
              }
              else
              {
                ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0);
              }
            }
          }
          ObfDereferenceObjectWithTag(Object, 0x50676244u);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
            DbgkpDeleteErrorPort(v10);
        }
      }
    }
    if ( v6 )
    {
      PsThawProcess(Process, 0);
      KeLeaveCriticalRegion();
    }
  }
  return (unsigned int)started;
}
