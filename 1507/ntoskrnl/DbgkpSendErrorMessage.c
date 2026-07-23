/*
 * XREFs of DbgkpSendErrorMessage @ 0x140408B68
 * Callers:
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x1405478A4 (DbgkForwardException.c)
 * Callees:
 *     KeTestAlertThread @ 0x140020390 (KeTestAlertThread.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     AlpcGetMessageAttribute @ 0x1400EE08C (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x1400EE1A8 (AlpcInitializeMessageAttribute.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401800F0 (ZwAlpcSendWaitReceivePort.c)
 *     ZwFlushInstructionCache @ 0x140180B10 (ZwFlushInstructionCache.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeCopyExceptionRecord @ 0x140195C4C (KeCopyExceptionRecord.c)
 *     DbgkpStartSystemErrorHandler @ 0x1404090C4 (DbgkpStartSystemErrorHandler.c)
 *     DbgkpSuspendProcess @ 0x1404091C4 (DbgkpSuspendProcess.c)
 *     PsThawProcess @ 0x1404EBD04 (PsThawProcess.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140509FD0 (PspCheckForInvalidAccessByProtection.c)
 *     MmGetSectionInformation @ 0x140510EFC (MmGetSectionInformation.c)
 *     DbgkForwardException @ 0x1405478A4 (DbgkForwardException.c)
 *     DbgkpDeleteErrorPort @ 0x1406691C4 (DbgkpDeleteErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1406691E8 (DbgkpRemoveErrorPort.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  char v6; // r13
  _KPROCESS *Process; // r14
  signed int started; // edi
  LARGE_INTEGER *Timeout; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r9
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _BOOL8 v21; // rcx
  int v22; // ebx
  _DWORD *MessageAttribute; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  struct _KTHREAD *v26; // r8
  __int16 v27; // ax
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  char v31; // [rsp+40h] [rbp-C0h]
  _BYTE *Object; // [rsp+48h] [rbp-B8h]
  ULONG_PTR RequiredBufferSize; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v36; // [rsp+60h] [rbp-A0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+70h] [rbp-90h] BYREF

  CurrentThread = KeGetCurrentThread();
  v35 = a1;
  v6 = 0;
  Process = CurrentThread->Process;
  memset(Buffer, 0, 0x40uLL);
  if ( (HIDWORD(Process[2].ReadyListHead.Blink) & 1) != 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    MmGetSectionInformation(Process[1].Affinity.Bitmap[17], 1LL, Buffer);
    if ( (unsigned int)MmGetSessionIdEx(Process) && Buffer[4].AllocatedAttributes != 1 && (a2 & 2) != 0 )
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
        Timeout = &v36;
        v36.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
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
        v11 = 0LL;
        v12 = KeAbPreAcquire((ULONG_PTR)&DbgkpErrorPortLock, 0LL, 0LL, v10);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&DbgkpErrorPortLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&DbgkpErrorPortLock, v12, (ULONG_PTR)&DbgkpErrorPortLock, v13);
        if ( v12 )
          *(_BYTE *)(v12 + 26) |= 1u;
        if ( Process == DbgkpErrorProcess )
        {
          started = -1073741420;
        }
        else
        {
          v11 = DbgkpErrorPort;
          if ( DbgkpErrorPort )
          {
            Object = DbgkpErrorProcess;
            ObfReferenceObjectWithTag(DbgkpErrorProcess, 0x50676244u);
            _InterlockedAdd((volatile signed __int32 *)v11, 1u);
          }
          else
          {
            started = -1073740973;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&DbgkpErrorPortLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&DbgkpErrorPortLock);
        KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
        v14 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v14;
        if ( !v14
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( started >= 0 )
        {
          memset(a3, 0, 0x28uLL);
          v15 = v35;
          a3[1] = 8;
          *((_WORD *)a3 + 2) = -32761;
          *a3 = 17826024;
          a3[10] = 7;
          a3[11] = -2147418111;
          KeCopyExceptionRecord((_OWORD *)a3 + 3, v15);
          v17 = 0LL;
          v18 = *(_OWORD *)&Buffer[2].AllocatedAttributes;
          *(_OWORD *)(a3 + 50) = *(_OWORD *)&Buffer[0].AllocatedAttributes;
          a3[66] = 0;
          v19 = *(_OWORD *)&Buffer[4].AllocatedAttributes;
          *(_OWORD *)(a3 + 54) = v18;
          v20 = *(_OWORD *)&Buffer[6].AllocatedAttributes;
          *(_OWORD *)(a3 + 58) = v19;
          *(_OWORD *)(a3 + 62) = v20;
          v21 = (BYTE2(Process[2].ReadyListHead.Blink) & 7) != 0;
          a3[66] = v21;
          if ( Process->SecurePid )
            a3[66] |= 8u;
          if ( Process[1].ActiveProcessors.Bitmap[7] )
            a3[66] |= 2u;
          if ( (a2 & 1) != 0 )
          {
            a3[66] |= 4u;
            v31 = 1;
          }
          else
          {
            v31 = 0;
          }
          LOBYTE(v21) = 1;
          LOBYTE(v16) = BYTE2(Process[2].ReadyListHead.Blink);
          LOBYTE(v17) = Object[1714];
          v22 = (unsigned __int8)PspCheckForInvalidAccessByProtection(v21, v17, v16) != 0 ? 1055744 : 0x1FFFFF;
          AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0x98uLL, &RequiredBufferSize);
          Buffer[0].ValidAttributes = 0x10000000;
          MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
          MessageAttribute[5] = v22;
          *MessageAttribute = 0;
          MessageAttribute[4] = 4;
          *((_QWORD *)MessageAttribute + 1) = -2LL;
          RequiredBufferSize = 272LL;
          KeTestAlertThread(0);
          if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
            started = -1073741749;
          if ( started < 0
            || (v24 = ZwAlpcSendWaitReceivePort(
                        *(HANDLE *)(v11 + 8),
                        0x220000u,
                        (PPORT_MESSAGE)a3,
                        Buffer,
                        (PPORT_MESSAGE)a3,
                        &RequiredBufferSize,
                        0LL,
                        0LL),
                started = v24,
                v24 < 0) )
          {
            if ( started == -1073741769 )
              DbgkpRemoveErrorPort(CurrentThread, v11);
          }
          else if ( v24 == 257 )
          {
            started = -1073741749;
          }
          else
          {
            if ( (a3[1] & 0x2000) != 0 )
              ZwAlpcSendWaitReceivePort(*(HANDLE *)(v11 + 8), 0x10000u, (PPORT_MESSAGE)a3, 0LL, 0LL, 0LL, 0LL, 0LL);
            started = a3[11];
            if ( started >= 0 && !v31 )
            {
              if ( started == 65538 )
              {
                if ( v6 )
                {
                  PsThawProcess(Process, 0LL);
                  v26 = KeGetCurrentThread();
                  v27 = v26->KernelApcDisable + 1;
                  v26->KernelApcDisable = v27;
                  if ( !v27
                    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
                    && !v26->SpecialApcDisable )
                  {
                    KiCheckForKernelApcDelivery();
                  }
                  v6 = 0;
                }
                LOBYTE(v26) = 1;
                LOBYTE(v25) = 1;
                started = (unsigned __int8)DbgkForwardException(v35, v25, v26) == 0 ? 0xC0000144 : 0;
              }
              else
              {
                ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0);
              }
            }
          }
          ObfDereferenceObjectWithTag(Object, 0x50676244u);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
            DbgkpDeleteErrorPort(v11);
        }
      }
    }
    if ( v6 )
    {
      PsThawProcess(Process, 0LL);
      v28 = KeGetCurrentThread();
      v29 = v28->KernelApcDisable + 1;
      v28->KernelApcDisable = v29;
      if ( !v29
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
        && !v28->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  return (unsigned int)started;
}
