/*
 * XREFs of ndisSSInvalidateOidCache @ 0x1C00685CC
 * Callers:
 *     ndisSetBusyAsync @ 0x1C0023238 (ndisSetBusyAsync.c)
 *     ndisSetBusySync @ 0x1C0068B84 (ndisSetBusySync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSSInvalidateOidCache(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 result; // rax

  v1 = 0LL;
  v2 = 5LL;
  do
  {
    result = *(_QWORD *)(a1 + 576);
    v1 += 24LL;
    *(_BYTE *)(result + v1 - 4) = 0;
    --v2;
  }
  while ( v2 );
  return result;
}
