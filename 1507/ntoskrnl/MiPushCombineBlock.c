/*
 * XREFs of MiPushCombineBlock @ 0x14022AF18
 * Callers:
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPushCombineBlock(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a1;
  *a2 = *a1;
  a2[1] = (__int64)a1;
  if ( *(__int64 **)(result + 8) != a1 )
    __fastfail(3u);
  *(_QWORD *)(result + 8) = a2;
  *a1 = (__int64)a2;
  return result;
}
