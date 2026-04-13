/*
 * XREFs of sub_18000A968 @ 0x18000A968
 * Callers:
 *     sub_18000AC84 @ 0x18000AC84 (sub_18000AC84.c)
 *     sub_180018D7C @ 0x180018D7C (sub_180018D7C.c)
 *     sub_180018E44 @ 0x180018E44 (sub_180018E44.c)
 * Callees:
 *     sub_18000A8E0 @ 0x18000A8E0 (sub_18000A8E0.c)
 *     sub_1800216C4 @ 0x1800216C4 (sub_1800216C4.c)
 *     sub_180021988 @ 0x180021988 (sub_180021988.c)
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18000A968(__int64 a1, __int64 a2)
{
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  sub_180021988(a1, 0LL);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_WORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_WORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_BYTE *)(a1 + 96) = 0;
  if ( !a2 )
  {
    sub_18000A8E0((exception *)pExceptionObject, "bad locale name");
    throw (std::runtime_error *)pExceptionObject;
  }
  sub_1800216C4(a1, a2);
  return a1;
}
