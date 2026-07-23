/*
 * XREFs of MiPushCombineBlock @ 0x1401FA04C
 * Callers:
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPushCombineBlock(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
    __fastfail(3u);
  *a2 = result;
  a2[1] = a1;
  *(_QWORD *)(result + 8) = a2;
  *a1 = (__int64)a2;
  return result;
}
