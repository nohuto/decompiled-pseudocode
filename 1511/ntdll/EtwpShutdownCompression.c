/*
 * XREFs of EtwpShutdownCompression @ 0x1800F4C40
 * Callers:
 *     EtwpFreeLoggerContext @ 0x18005BB24 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall EtwpShutdownCompression(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 440);
  if ( v1 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( *(_QWORD *)(a1 + 448) )
    return ZwFreeVirtualMemory();
  return result;
}
