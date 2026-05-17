/*
 * XREFs of RtlFindLongestRunClear @ 0x1800DB150
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindClearRuns @ 0x1800DAE90 (RtlFindClearRuns.c)
 */

__int64 __fastcall RtlFindLongestRunClear(int *a1, _DWORD *a2)
{
  int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+44h] [rbp+1Ch]

  if ( (unsigned int)RtlFindClearRuns(a1, (__int64)&v4, 1u, 1) == 1 )
  {
    *a2 = v4;
    return v5;
  }
  else
  {
    *a2 = 0;
    return 0LL;
  }
}
