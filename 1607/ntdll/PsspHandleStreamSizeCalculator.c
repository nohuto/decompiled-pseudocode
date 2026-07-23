/*
 * XREFs of PsspHandleStreamSizeCalculator @ 0x180005C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsspHandleStreamSizeCalculator(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned __int16 *a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  *a1 += 16;
  if ( a5 && *a5 )
    *a1 += (unsigned __int16)*a5 + 4;
  if ( a6 && *((_QWORD *)a6 + 1) )
    *a1 += *a6 + 4;
  if ( a7 )
    *a1 += 56;
  if ( a8 && a9 )
    *a1 += a9 + 2;
  return 1;
}
