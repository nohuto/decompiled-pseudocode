/*
 * XREFs of DbgkpSendApiMessage @ 0x14061A3C0
 * Callers:
 *     DbgkCreateThread @ 0x1404580F8 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x1404B07BC (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1404B4E2C (DbgkUnMapViewOfSection.c)
 *     DbgkForwardException @ 0x1404BF254 (DbgkForwardException.c)
 *     DbgkCreateMinimalProcess @ 0x14057E9DC (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x140617F4C (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x140618BD4 (DbgkpPostModuleMessages.c)
 *     DbgkCreateMinimalThread @ 0x14061AB7C (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x14061AC14 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x14061ACBC (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ZwFlushInstructionCache @ 0x14015BD70 (ZwFlushInstructionCache.c)
 *     EtwTraceDebuggerEvent @ 0x1402258C8 (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x140501050 (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x140619050 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x14061AE68 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *Object, char a2, __int64 a3)
{
  int v6; // r14d
  int v7; // esi

  if ( (PerfGlobalGroupMask & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)KeGetCurrentThread(), 1);
  do
  {
    v6 = 0;
    if ( Object == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v6 = (unsigned __int8)DbgkpSuspendProcess(Object);
    *(_DWORD *)(a3 + 44) = 259;
    v7 = DbgkpQueueMessage(Object, KeGetCurrentThread(), a3, (a2 & 2) != 0 ? 0x40 : 0, 0LL);
    ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0);
    if ( v6 )
    {
      PsThawProcess((ULONG_PTR)Object, 0);
      KeLeaveCriticalRegion();
    }
  }
  while ( v7 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v7;
}
