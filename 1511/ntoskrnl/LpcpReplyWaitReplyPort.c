/*
 * XREFs of LpcpReplyWaitReplyPort @ 0x14061F5A4
 * Callers:
 *     LpcReplyWaitReplyPort @ 0x14061F4F0 (LpcReplyWaitReplyPort.c)
 *     NtReplyWaitReplyPort @ 0x14061F788 (NtReplyWaitReplyPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x14042338C (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcpReplyWaitReplyPort(__int64 a1, ULONG64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 )
    AlpcpProbeForWriteMessageHeader(a2, 0);
  v9 = AlpcpProcessSynchronousRequest(a1, 131073, a2, 0LL, a2, 0LL, 0LL, 0LL, a3, a4);
  if ( v9 == -1073740029 )
    v9 = -1073741769;
  if ( v9 == -1073740031 )
    v9 = -1073741229;
  KeLeaveCriticalRegion();
  return v9;
}
