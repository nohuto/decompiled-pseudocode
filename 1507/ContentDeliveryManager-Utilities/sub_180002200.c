/*
 * XREFs of sub_180002200 @ 0x180002200
 * Callers:
 *     sub_180002400 @ 0x180002400 (sub_180002400.c)
 *     sub_180002510 @ 0x180002510 (sub_180002510.c)
 *     sub_1800086C0 @ 0x1800086C0 (sub_1800086C0.c)
 * Callees:
 *     sub_180001E74 @ 0x180001E74 (sub_180001E74.c)
 *     sub_180001EA4 @ 0x180001EA4 (sub_180001EA4.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 *     __alloca_probe @ 0x180026B30 (__alloca_probe.c)
 */

void __fastcall sub_180002200(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        _WORD *a9)
{
  char v9; // bl
  int v10; // [rsp+58h] [rbp-1580h]
  int v11; // [rsp+68h] [rbp-1570h]
  __int64 v12[18]; // [rsp+80h] [rbp-1558h] BYREF
  _BYTE pExceptionObject[160]; // [rsp+110h] [rbp-14C8h] BYREF
  __int64 v14[128]; // [rsp+1B0h] [rbp-1428h] BYREF
  WCHAR OutputString[2048]; // [rsp+5B0h] [rbp-1028h] BYREF

  v9 = !a7 && qword_18003ABD8;
  sub_180001EA4(a1, a2, a3, a4, a5, a6, a7, a8, a9, v9, OutputString, v10, v14, v11, (__int64)v12);
  if ( a7 == 4 )
    __fastfail(7u);
  if ( !a7 )
  {
    if ( v9 )
      qword_18003ABD8(v12, OutputString);
    sub_180001E74((__int64)pExceptionObject, (__int64)v12);
    throw (wil::ResultException *)pExceptionObject;
  }
}
