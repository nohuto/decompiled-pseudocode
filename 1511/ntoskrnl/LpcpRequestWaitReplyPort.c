/*
 * XREFs of LpcpRequestWaitReplyPort @ 0x1404AAC20
 * Callers:
 *     LpcRequestWaitReplyPortEx @ 0x1404AAB5C (LpcRequestWaitReplyPortEx.c)
 *     NtRequestWaitReplyPort @ 0x1404AAB8C (NtRequestWaitReplyPort.c)
 *     LpcRequestWaitReplyPort @ 0x14050D090 (LpcRequestWaitReplyPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x14042338C (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcpRequestWaitReplyPort(__int64 a1, __int64 a2, ULONG64 a3, unsigned __int8 a4, char a5, int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx

  if ( a4 )
    AlpcpProbeForWriteMessageHeader(a3, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = AlpcpProcessSynchronousRequest(a1, a6 | 0x20000u, a2, 0LL, a3, 0LL, 0LL, 0LL, a4, a5);
  KeLeaveCriticalRegion();
  if ( v11 == -1073740029 )
    v11 = -1073741769;
  if ( v11 == -1073740031 )
    return (unsigned int)-1073741229;
  return v11;
}
