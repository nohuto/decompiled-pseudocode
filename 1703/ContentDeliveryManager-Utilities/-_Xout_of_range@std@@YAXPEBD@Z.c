/*
 * XREFs of ?_Xout_of_range@std@@YAXPEBD@Z @ 0x18006A738
 * Callers:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180012D14 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 * Callees:
 *     ??0length_error@std@@QEAA@PEBD@Z @ 0x18006A614 (--0length_error@std@@QEAA@PEBD@Z.c)
 *     _CxxThrowException_0 @ 0x18006F90E (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Xout_of_range(char *a1)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::length_error::length_error((std::length_error *)pExceptionObject, a1);
  throw (std::out_of_range *)pExceptionObject;
}
