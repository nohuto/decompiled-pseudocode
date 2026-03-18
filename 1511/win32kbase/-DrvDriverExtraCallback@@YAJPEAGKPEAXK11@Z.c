/*
 * XREFs of ?DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z @ 0x1C007D360
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall DrvDriverExtraCallback(
        unsigned __int16 *a1,
        __int64 a2,
        void *a3,
        unsigned __int16 a4,
        void *a5,
        _WORD *a6)
{
  if ( a6[35] < a4 )
    a4 = a6[35];
  a6[35] = a4;
  memmove(a6 + 110, a3, a4);
  return 0LL;
}
