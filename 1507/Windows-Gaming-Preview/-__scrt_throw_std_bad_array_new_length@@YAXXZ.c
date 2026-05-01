/*
 * XREFs of ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x18002688C
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180026050 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     ??0bad_array_new_length@std@@QEAA@XZ @ 0x18002679C (--0bad_array_new_length@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1800269DC (_CxxThrowException_0.c)
 */

void __noreturn __scrt_throw_std_bad_array_new_length(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_array_new_length::bad_array_new_length((std::bad_array_new_length *)pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}
