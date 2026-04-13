/*
 * XREFs of sub_1800210F0 @ 0x1800210F0
 * Callers:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180004C3C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x1800160BC (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_1.c)
 * Callees:
 *     sub_180020FF4 @ 0x180020FF4 (sub_180020FF4.c)
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1800210F0(char *a1)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  sub_180020FF4((exception *)pExceptionObject, a1);
  throw (std::length_error *)pExceptionObject;
}
