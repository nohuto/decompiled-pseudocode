/*
 * XREFs of DbgkpSendApiMessage @ 0x1405F071C
 * Callers:
 *     DbgkForwardException @ 0x1403ED944 (DbgkForwardException.c)
 *     DbgkCreateThread @ 0x140445B24 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x140493500 (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1404AC188 (DbgkUnMapViewOfSection.c)
 *     DbgkSendSystemDllMessages @ 0x1405EE270 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x1405EEEF0 (DbgkpPostModuleMessages.c)
 *     DbgkCreateMinimalProcess @ 0x1405F0818 (DbgkCreateMinimalProcess.c)
 *     DbgkCreateMinimalThread @ 0x1405F089C (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x1405F0934 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1405F09DC (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ZwFlushInstructionCache @ 0x140152160 (ZwFlushInstructionCache.c)
 *     EtwTraceDebuggerEvent @ 0x14020DBE4 (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x1404529E8 (PsThawProcess.c)
 *     DbgkpSuspendProcess @ 0x1404A46AC (DbgkpSuspendProcess.c)
 *     DbgkpQueueMessage @ 0x1405EF390 (DbgkpQueueMessage.c)
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
      v6 = (unsigned __int8)DbgkpSuspendProcess((__int64)Object);
    *(_DWORD *)(a3 + 44) = 259;
    v7 = DbgkpQueueMessage(Object, (char *)KeGetCurrentThread(), a3, (a2 & 2) != 0 ? 0x40 : 0, 0LL);
    ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0);
    if ( v6 )
    {
      PsThawProcess((__int64)Object, 0);
      KeLeaveCriticalRegion();
    }
  }
  while ( v7 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v7;
}
