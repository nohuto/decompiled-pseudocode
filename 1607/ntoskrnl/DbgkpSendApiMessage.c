/*
 * XREFs of DbgkpSendApiMessage @ 0x14061A30C
 * Callers:
 *     DbgkCreateThread @ 0x140459228 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x1404CAD90 (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1404D138C (DbgkUnMapViewOfSection.c)
 *     DbgkForwardException @ 0x1404DBC50 (DbgkForwardException.c)
 *     DbgkCreateMinimalProcess @ 0x14057E530 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x140617E98 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x140618B20 (DbgkpPostModuleMessages.c)
 *     DbgkCreateMinimalThread @ 0x14061AAC8 (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x14061AB60 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x14061AC08 (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ZwFlushInstructionCache @ 0x14015B800 (ZwFlushInstructionCache.c)
 *     EtwTraceDebuggerEvent @ 0x140225A9C (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x14051DFE8 (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x140618F9C (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x14061ADB4 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *BugCheckParameter1, char a2, __int64 a3)
{
  int v6; // r14d
  int v7; // esi

  if ( (PerfGlobalGroupMask & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)KeGetCurrentThread(), 1);
  do
  {
    v6 = 0;
    if ( BugCheckParameter1 == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v6 = (unsigned __int8)DbgkpSuspendProcess(BugCheckParameter1);
    *(_DWORD *)(a3 + 44) = 259;
    v7 = DbgkpQueueMessage(BugCheckParameter1, KeGetCurrentThread(), a3, (a2 & 2) != 0 ? 0x40 : 0, 0LL);
    ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0);
    if ( v6 )
    {
      PsThawProcess((__int64)BugCheckParameter1, 0);
      KeLeaveCriticalRegion();
    }
  }
  while ( v7 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v7;
}
