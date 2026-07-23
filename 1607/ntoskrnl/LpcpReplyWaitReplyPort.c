/*
 * XREFs of LpcpReplyWaitReplyPort @ 0x14065492C
 * Callers:
 *     LpcReplyWaitReplyPort @ 0x140654878 (LpcReplyWaitReplyPort.c)
 *     NtReplyWaitReplyPort @ 0x140654B10 (NtReplyWaitReplyPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x14049D884 (AlpcpProbeForWriteMessageHeader.c)
 */

__int64 __fastcall LpcpReplyWaitReplyPort(__int64 a1, unsigned __int64 a2, unsigned __int8 a3, KPROCESSOR_MODE a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 )
    AlpcpProbeForWriteMessageHeader(a2, 0);
  v9 = AlpcpProcessSynchronousRequest(a1, 0x20001u, a2, 0LL, a2, 0LL, 0LL, 0LL, a3, a4);
  if ( v9 == -1073740029 )
    v9 = -1073741769;
  if ( v9 == -1073740031 )
    v9 = -1073741229;
  KeLeaveCriticalRegion();
  return v9;
}
