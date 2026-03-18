/*
 * XREFs of PopAoacExecutionRequiredPowerRequest @ 0x1405569F0
 * Callers:
 *     PopExecutionRequiredPowerRequest @ 0x1405569BC (PopExecutionRequiredPowerRequest.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140017F60 (RtlLookupElementGenericTableAvl.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopDisablePowerExecutionRequest @ 0x1404E61DC (PopDisablePowerExecutionRequest.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 *     PopEnablePowerExecutionRequest @ 0x140556B0C (PopEnablePowerExecutionRequest.c)
 */

__int64 __fastcall PopAoacExecutionRequiredPowerRequest(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int v6; // esi
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  signed __int64 v12; // rcx
  ULONG_PTR v13; // rtt
  struct _KTHREAD *CurrentThread; // rdx
  __int16 v15; // ax
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+28h] [rbp-10h]

  v5 = a2;
  PopAcquirePowerRequestPushLock(1, a2, a3, a4);
  v6 = dword_1403163D0;
  v18 = v5;
  v7 = (__int64 *)RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( v7 )
  {
    v9 = *v7;
    if ( a1 )
      PopEnablePowerExecutionRequest(v9);
    else
      PopDisablePowerExecutionRequest(v9, 1);
  }
  v10 = 259;
  if ( !a1 )
  {
    v11 = 0;
    if ( !v6 )
      v11 = 259;
    v10 = v11;
  }
  if ( qword_14032F7D8 )
    qword_14032F7D8 = 0LL;
  _m_prefetchw(&PopPowerRequestLock);
  v12 = PopPowerRequestLock - 16;
  if ( (PopPowerRequestLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (PopPowerRequestLock & 2) != 0
    || (v13 = PopPowerRequestLock,
        v13 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerRequestLock, v12, PopPowerRequestLock)) )
  {
    ExfReleasePushLock(&PopPowerRequestLock, v8);
  }
  KeAbPostRelease((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  v15 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v10;
}
