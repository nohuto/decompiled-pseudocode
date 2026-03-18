/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x14011A828
 * Callers:
 *     MiAllocateAweInfo @ 0x1406A5BA4 (MiAllocateAweInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExInitializeAutoExpandPushLock(_QWORD *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( (a2 & 1) == 0 )
    *((_DWORD *)a1 + 2) |= 4u;
  *a1 = 0LL;
  return result;
}
