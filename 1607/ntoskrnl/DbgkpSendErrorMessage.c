/*
 * XREFs of DbgkpSendErrorMessage @ 0x14061A5D8
 * Callers:
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x1404BF254 (DbgkForwardException.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140009A34 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140009B40 (AlpcInitializeMessageAttribute.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeTestAlertThread @ 0x1400CAF2C (KeTestAlertThread.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14015B2F0 (ZwAlpcSendWaitReceivePort.c)
 *     ZwFlushInstructionCache @ 0x14015BD70 (ZwFlushInstructionCache.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeCopyExceptionRecord @ 0x140171CB8 (KeCopyExceptionRecord.c)
 *     DbgkpDereferenceErrorPort @ 0x1401B7488 (DbgkpDereferenceErrorPort.c)
 *     MmGetSectionInformation @ 0x140470AD8 (MmGetSectionInformation.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404A6F78 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkForwardException @ 0x1404BF254 (DbgkForwardException.c)
 *     PsThawProcess @ 0x140501050 (PsThawProcess.c)
 *     DbgkpRemoveErrorPort @ 0x14061A2C4 (DbgkpRemoveErrorPort.c)
 *     DbgkpStartSystemErrorHandler @ 0x14061AA7C (DbgkpStartSystemErrorHandler.c)
 *     DbgkpSuspendProcess @ 0x14061AE68 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r13
  char v6; // r12
  ULONG_PTR Process; // rsi
  signed int started; // edi
  LARGE_INTEGER *Timeout; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // ebx
  _DWORD *MessageAttribute; // rax
  NTSTATUS v18; // eax
  char v20; // [rsp+40h] [rbp-C0h]
  PS_PROTECTION *Object; // [rsp+48h] [rbp-B8h]
  ULONG_PTR RequiredBufferSize; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v25; // [rsp+60h] [rbp-A0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+70h] [rbp-90h] BYREF

  CurrentThread = KeGetCurrentThread();
  v24 = a1;
  v6 = 0;
  Process = (ULONG_PTR)CurrentThread->Process;
  memset(Buffer, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 1740) & 1) != 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    MmGetSectionInformation(*(_QWORD *)(Process + 952), 1, (__int64 *)Buffer);
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
        Timeout = &v25;
        v25.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
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
        v11 = KeAbPreAcquire((ULONG_PTR)&DbgkpErrorPortLock, 0LL, 0);
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
            Object = (PS_PROTECTION *)DbgkpErrorProcess;
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
          v12 = v24;
          a3[1] = 8;
          *((_WORD *)a3 + 2) = -32761;
          *a3 = 17826024;
          a3[10] = 7;
          a3[11] = -2147418111;
          KeCopyExceptionRecord((_OWORD *)a3 + 3, v12);
          v13 = *(_OWORD *)&Buffer[2].AllocatedAttributes;
          *(_OWORD *)(a3 + 50) = *(_OWORD *)&Buffer[0].AllocatedAttributes;
          a3[66] = 0;
          v14 = *(_OWORD *)&Buffer[4].AllocatedAttributes;
          *(_OWORD *)(a3 + 54) = v13;
          v15 = *(_OWORD *)&Buffer[6].AllocatedAttributes;
          *(_OWORD *)(a3 + 58) = v14;
          *(_OWORD *)(a3 + 62) = v15;
          a3[66] = (*(_BYTE *)(Process + 1738) & 7) != 0;
          if ( *(_QWORD *)(Process + 720) )
            a3[66] |= 8u;
          if ( *(_QWORD *)(Process + 1064) )
            a3[66] |= 2u;
          if ( (a2 & 1) != 0 )
          {
            a3[66] |= 4u;
            v20 = 1;
          }
          else
          {
            v20 = 0;
          }
          v16 = PspCheckForInvalidAccessByProtection(1, Object[1738], *(PS_PROTECTION *)(Process + 1738))
              ? 1055744
              : 0x1FFFFF;
          AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0xA0uLL, &RequiredBufferSize);
          Buffer[0].ValidAttributes = 0x10000000;
          MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
          MessageAttribute[5] = v16;
          *MessageAttribute = 0;
          MessageAttribute[4] = 4;
          *((_QWORD *)MessageAttribute + 1) = -2LL;
          RequiredBufferSize = 272LL;
          KeTestAlertThread(0);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
            started = -1073741749;
          if ( started < 0
            || (v18 = ZwAlpcSendWaitReceivePort(
                        *(HANDLE *)(v10 + 8),
                        0x220000u,
                        (PPORT_MESSAGE)a3,
                        Buffer,
                        (PPORT_MESSAGE)a3,
                        &RequiredBufferSize,
                        0LL,
                        0LL),
                started = v18,
                v18 < 0) )
          {
            if ( started == -1073741769 )
              DbgkpRemoveErrorPort((__int64)CurrentThread, (volatile signed __int32 *)v10);
          }
          else if ( v18 == 257 )
          {
            started = -1073741749;
          }
          else
          {
            if ( (a3[1] & 0x2000) != 0 )
              ZwAlpcSendWaitReceivePort(*(HANDLE *)(v10 + 8), 0x10000u, (PPORT_MESSAGE)a3, 0LL, 0LL, 0LL, 0LL, 0LL);
            started = a3[11];
            if ( started >= 0 && !v20 )
            {
              if ( started == 65538 )
              {
                if ( v6 )
                {
                  PsThawProcess(Process, 0);
                  KeLeaveCriticalRegion();
                  v6 = 0;
                }
                started = !DbgkForwardException(v24, 1, 1) ? 0xC0000144 : 0;
              }
              else
              {
                ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0);
              }
            }
          }
          ObfDereferenceObjectWithTag(Object, 0x50676244u);
          DbgkpDereferenceErrorPort((volatile signed __int32 *)v10);
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
