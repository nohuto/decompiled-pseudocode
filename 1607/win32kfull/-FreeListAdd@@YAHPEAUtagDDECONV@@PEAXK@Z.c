/*
 * XREFs of ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01E17F0
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1C40 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1EC0 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2610 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E26E0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeListAdd(struct tagDDECONV *a1, void *a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // r9

  result = Win32AllocPool(24LL, 828666709LL);
  v7 = result;
  if ( result )
  {
    *(_QWORD *)(result + 8) = a2;
    *(_DWORD *)(result + 16) = a3;
    *(_QWORD *)result = *((_QWORD *)a1 + 9);
    result = 1LL;
    *((_QWORD *)a1 + 9) = v7;
  }
  return result;
}
