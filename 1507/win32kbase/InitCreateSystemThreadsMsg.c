/*
 * XREFs of InitCreateSystemThreadsMsg @ 0x1C0083580
 * Callers:
 *     VideoPortCallout @ 0x1C0084FF0 (VideoPortCallout.c)
 * Callees:
 *     CSTPush @ 0x1C00835C0 (CSTPush.c)
 */

__int64 __fastcall InitCreateSystemThreadsMsg(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  if ( !(unsigned int)CSTPush(a2, a3) )
    return 0LL;
  *(_DWORD *)(a1 + 4) = 0;
  result = 1LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)a1 = 28311944;
  *(_DWORD *)(a1 + 48) = 197636;
  return result;
}
