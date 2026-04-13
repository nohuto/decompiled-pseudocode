/*
 * XREFs of sub_18002111C @ 0x18002111C
 * Callers:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180004B10 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 * Callees:
 *     sub_180020FF4 @ 0x180020FF4 (sub_180020FF4.c)
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18002111C(char *a1)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  sub_180020FF4((exception *)pExceptionObject, a1);
  throw (std::out_of_range *)pExceptionObject;
}
