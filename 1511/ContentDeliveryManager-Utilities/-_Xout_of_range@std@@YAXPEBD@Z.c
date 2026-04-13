/*
 * XREFs of ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180022C9C
 * Callers:
 *     ?_Xran@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800049E0 (-_Xran@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 * Callees:
 *     ??0length_error@std@@QEAA@PEBD@Z @ 0x180022B74 (--0length_error@std@@QEAA@PEBD@Z.c)
 *     _CxxThrowException_0 @ 0x180028090 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Xout_of_range(char *a1)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::length_error::length_error((std::length_error *)pExceptionObject, a1);
  throw (std::out_of_range *)pExceptionObject;
}
