/*
 * XREFs of ndispConvOffsetToPointer @ 0x1C00937F8
 * Callers:
 *     ndispConvVar @ 0x1C00937D4 (ndispConvVar.c)
 *     ndisHandlePnPRequest @ 0x1C00DF000 (ndisHandlePnPRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndispConvOffsetToPointer(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned int a5,
        int a6)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  v6 = a1 + a2;
  v7 = a1 + *a4;
  v8 = v7 + a5;
  if ( v6 < a1 + 72 || v8 < v7 || v7 < a1 + 72 || v8 > v6 || ((a6 - 1) & (unsigned int)v7) != 0 )
    return 3221225485LL;
  *a4 = v7;
  return 0LL;
}
