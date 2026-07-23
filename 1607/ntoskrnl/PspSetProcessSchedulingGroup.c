/*
 * XREFs of PspSetProcessSchedulingGroup @ 0x140456EB4
 * Callers:
 *     PspSetCpuRateControlJobPostCallback @ 0x140456F04 (PspSetCpuRateControlJobPostCallback.c)
 *     PspAddProcessToJobChain @ 0x140469188 (PspAddProcessToJobChain.c)
 * Callees:
 *     KeSetProcessSchedulingGroup @ 0x1400C69B4 (KeSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspSetProcessSchedulingGroup(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 772) & 8;
  if ( !v4 || !a2 )
    KeSetProcessSchedulingGroup(a1, a2);
  result = *(_DWORD *)(a1 + 772) & 8;
  if ( v4 != (_DWORD)result )
  {
    if ( a2 )
      return KeSetProcessSchedulingGroup(a1, 0LL);
  }
  return result;
}
