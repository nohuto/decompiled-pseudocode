/*
 * XREFs of ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C01EAA08
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EB930 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EBA04 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpontaneousTerminate(unsigned int *a1, struct tagDDECONV *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *((_DWORD *)a2 + 20);
  if ( (v2 & 2) != 0 )
    return 1LL;
  *((_DWORD *)a2 + 20) = v2 | 2;
  result = 2LL;
  *a1 |= 0x80000000;
  return result;
}
