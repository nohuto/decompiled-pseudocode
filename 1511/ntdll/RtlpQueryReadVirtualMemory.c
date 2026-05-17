/*
 * XREFs of RtlpQueryReadVirtualMemory @ 0x18006CD40
 * Callers:
 *     LdrpReadMemory @ 0x18006CAB4 (LdrpReadMemory.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x1800A58A0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlpQueryReadVirtualMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax

  result = ZwReadVirtualMemory(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return a4 != *a5 ? 0x8000000D : 0;
  *a5 = 0LL;
  return result;
}
