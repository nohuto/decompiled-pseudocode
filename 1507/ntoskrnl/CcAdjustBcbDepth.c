/*
 * XREFs of CcAdjustBcbDepth @ 0x14018CF10
 * Callers:
 *     CcBcbProfiler @ 0x14017B2D0 (CcBcbProfiler.c)
 *     sub_140406000 @ 0x140406000 (sub_140406000.c)
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
