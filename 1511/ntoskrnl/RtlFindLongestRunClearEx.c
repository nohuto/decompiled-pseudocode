/*
 * XREFs of RtlFindLongestRunClearEx @ 0x1401F87A8
 * Callers:
 *     MiGetSystemPteStatistics @ 0x14062AC40 (MiGetSystemPteStatistics.c)
 * Callees:
 *     RtlFindClearRunsEx @ 0x1401F82E4 (RtlFindClearRunsEx.c)
 */

__int64 __fastcall RtlFindLongestRunClearEx(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+44h] [rbp+1Ch]

  if ( (unsigned int)RtlFindClearRunsEx(a1, (__int64)&v4) == 1 )
  {
    *a2 = v4;
    return v5;
  }
  else
  {
    *a2 = 0LL;
    return 0LL;
  }
}
