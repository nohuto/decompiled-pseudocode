/*
 * XREFs of ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180053B3C
 * Callers:
 *     ?_Xran@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x18000D758 (-_Xran@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 * Callees:
 *     ??0out_of_range@std@@QEAA@PEBD@Z @ 0x180053A0C (--0out_of_range@std@@QEAA@PEBD@Z.c)
 *     _CxxThrowException_0 @ 0x180058E80 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Xout_of_range(char *a1)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::out_of_range::out_of_range((std::out_of_range *)pExceptionObject, a1);
  throw (std::out_of_range *)pExceptionObject;
}
