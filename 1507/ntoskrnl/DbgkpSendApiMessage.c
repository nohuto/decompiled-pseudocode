/*
 * XREFs of DbgkpSendApiMessage @ 0x140669324
 * Callers:
 *     DbgkCreateThread @ 0x14044FA8C (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x140531A48 (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x14053B7E4 (DbgkUnMapViewOfSection.c)
 *     DbgkForwardException @ 0x1405478A4 (DbgkForwardException.c)
 *     DbgkSendSystemDllMessages @ 0x1406667F0 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x140667690 (DbgkpPostModuleMessages.c)
 *     DbgkCreateMinimalProcess @ 0x140669460 (DbgkCreateMinimalProcess.c)
 *     DbgkCreateMinimalThread @ 0x1406694E4 (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x14066957C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140669624 (DbgkExitThread.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwFlushInstructionCache @ 0x140180B10 (ZwFlushInstructionCache.c)
 *     EtwTraceDebuggerEvent @ 0x14025CE50 (EtwTraceDebuggerEvent.c)
 *     DbgkpSuspendProcess @ 0x1404091C4 (DbgkpSuspendProcess.c)
 *     PsThawProcess @ 0x1404EBD04 (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x140667B2C (DbgkpQueueMessage.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *Object, char a2, __int64 a3)
{
  int v6; // r14d
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rdx
  __int16 v11; // cx

  if ( (PerfGlobalGroupMask & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)KeGetCurrentThread(), 1);
  do
  {
    v6 = 0;
    if ( Object == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v6 = (unsigned __int8)DbgkpSuspendProcess((__int64)Object);
    *(_DWORD *)(a3 + 44) = 259;
    v7 = DbgkpQueueMessage(Object, (char *)KeGetCurrentThread(), a3, (a2 & 2) != 0 ? 0x40 : 0, 0LL);
    ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0);
    if ( v6 )
    {
      PsThawProcess((__int64)Object, 0, v8, v9);
      CurrentThread = KeGetCurrentThread();
      v11 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v11;
      if ( !v11
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  while ( v7 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v7;
}
