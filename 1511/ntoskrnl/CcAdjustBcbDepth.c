/*
 * XREFs of CcAdjustBcbDepth @ 0x14015D5C0
 * Callers:
 *     CcBcbProfiler @ 0x14014D260 (CcBcbProfiler.c)
 *     sub_1403B4000 @ 0x1403B4000 (sub_1403B4000.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcAdjustBcbDepth(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        _QWORD *a7)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  do
    *a7-- = 0LL;
  while ( a7 >= &retaddr );
  return a6(a1);
}
