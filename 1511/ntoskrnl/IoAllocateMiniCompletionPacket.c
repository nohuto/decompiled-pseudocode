/*
 * XREFs of IoAllocateMiniCompletionPacket @ 0x14044EF10
 * Callers:
 *     NtCreateWorkerFactory @ 0x14044E4E8 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14044EE44 (AlpcpAllocateCompletionPacketLookaside.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     IopAllocateMiniCompletionPacket @ 0x14044EFEC (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoAllocateMiniCompletionPacket(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = a1;
  LOBYTE(a1) = 4;
  result = IopAllocateMiniCompletionPacket(a1, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 56) = v3;
    *(_QWORD *)(result + 64) = a2;
    *(_BYTE *)(result + 72) = 1;
  }
  return result;
}
