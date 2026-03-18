/*
 * XREFs of DbgkpSendErrorMessage @ 0x14061A524
 * Callers:
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x1404DBC50 (DbgkForwardException.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140009EB4 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140009FC0 (AlpcInitializeMessageAttribute.c)
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     KeTestAlertThread @ 0x1400CD08C (KeTestAlertThread.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14015AD80 (ZwAlpcSendWaitReceivePort.c)
 *     ZwFlushInstructionCache @ 0x14015B800 (ZwFlushInstructionCache.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     KeCopyExceptionRecord @ 0x1401717BC (KeCopyExceptionRecord.c)
 *     DbgkpDereferenceErrorPort @ 0x1401B75A4 (DbgkpDereferenceErrorPort.c)
 *     MmGetSectionInformation @ 0x140471C08 (MmGetSectionInformation.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404BB248 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkForwardException @ 0x1404DBC50 (DbgkForwardException.c)
 *     PsThawProcess @ 0x14051DFE8 (PsThawProcess.c)
 *     DbgkpRemoveErrorPort @ 0x14061A210 (DbgkpRemoveErrorPort.c)
 *     DbgkpStartSystemErrorHandler @ 0x14061A9C8 (DbgkpStartSystemErrorHandler.c)
 *     DbgkpSuspendProcess @ 0x14061ADB4 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r13
  char v6; // r12
  __int64 Process; // rsi
  signed int started; // edi
  LARGE_INTEGER *Timeout; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // ebx
  char *MessageAttribute; // rax
  int v20; // eax
  char v22; // [rsp+40h] [rbp-C0h]
  _BYTE *Object; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v27; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v28[10]; // [rsp+70h] [rbp-90h] BYREF

  CurrentThread = KeGetCurrentThread();
  v26 = a1;
  v6 = 0;
  Process = (__int64)CurrentThread->Process;
  memset(v28, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 1740) & 1) != 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    MmGetSectionInformation(*(_QWORD *)(Process + 952), 1, (__int64 *)v28);
    if ( (unsigned int)MmGetSessionIdEx((struct _KPROCESS *)Process) && LODWORD(v28[2]) != 1 && (a2 & 2) != 0 )
      v6 = DbgkpSuspendProcess(Process);
    started = DbgkpStartSystemErrorHandler();
    if ( started >= 0 )
    {
      if ( DbgkErrorPortStartTimeout == -1 )
      {
        Timeout = 0LL;
      }
      else
      {
        Timeout = &v27;
        v27.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
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
          v12 = v26;
          a3[1] = 8;
          *((_WORD *)a3 + 2) = -32761;
          *a3 = 17826024;
          a3[10] = 7;
          a3[11] = -2147418111;
          KeCopyExceptionRecord((_OWORD *)a3 + 3, v12);
          v14 = 0LL;
          v15 = v28[1];
          *(_OWORD *)(a3 + 50) = v28[0];
          a3[66] = 0;
          v16 = v28[2];
          *(_OWORD *)(a3 + 54) = v15;
          v17 = v28[3];
          *(_OWORD *)(a3 + 58) = v16;
          *(_OWORD *)(a3 + 62) = v17;
          a3[66] = (*(_BYTE *)(Process + 1738) & 7) != 0;
          if ( *(_QWORD *)(Process + 720) )
            a3[66] |= 8u;
          if ( *(_QWORD *)(Process + 1064) )
            a3[66] |= 2u;
          if ( (a2 & 1) != 0 )
          {
            a3[66] |= 4u;
            v22 = 1;
          }
          else
          {
            v22 = 0;
          }
          LOBYTE(v14) = 1;
          LOBYTE(v13) = Object[1738];
          v18 = PspCheckForInvalidAccessByProtection(v14, v13, *(_BYTE *)(Process + 1738)) ? 1055744 : 0x1FFFFF;
          AlpcInitializeMessageAttribute(0x10000000LL, v28, 0xA0uLL, &v25);
          DWORD1(v28[0]) = 0x10000000;
          MessageAttribute = AlpcGetMessageAttribute(v28, 0x10000000);
          *((_DWORD *)MessageAttribute + 5) = v18;
          *(_DWORD *)MessageAttribute = 0;
          *((_DWORD *)MessageAttribute + 4) = 4;
          *((_QWORD *)MessageAttribute + 1) = -2LL;
          v25 = 272LL;
          KeTestAlertThread(0);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
            started = -1073741749;
          if ( started < 0
            || (v20 = ZwAlpcSendWaitReceivePort(*(_QWORD *)(v10 + 8), 2228224LL, (__int64)a3), started = v20, v20 < 0) )
          {
            if ( started == -1073741769 )
              DbgkpRemoveErrorPort((__int64)CurrentThread, (volatile signed __int32 *)v10);
          }
          else if ( v20 == 257 )
          {
            started = -1073741749;
          }
          else
          {
            if ( (a3[1] & 0x2000) != 0 )
              ZwAlpcSendWaitReceivePort(*(_QWORD *)(v10 + 8), 0x10000LL, (__int64)a3);
            started = a3[11];
            if ( started >= 0 && !v22 )
            {
              if ( started == 65538 )
              {
                if ( v6 )
                {
                  PsThawProcess(Process, 0);
                  KeLeaveCriticalRegion();
                  v6 = 0;
                }
                started = !DbgkForwardException(v26, 1, 1) ? 0xC0000144 : 0;
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
