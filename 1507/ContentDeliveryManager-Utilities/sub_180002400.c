/*
 * XREFs of sub_180002400 @ 0x180002400
 * Callers:
 *     sub_18000255C @ 0x18000255C (sub_18000255C.c)
 * Callees:
 *     sub_180001408 @ 0x180001408 (sub_180001408.c)
 *     sub_180002200 @ 0x180002200 (sub_180002200.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 *     __alloca_probe @ 0x180026B30 (__alloca_probe.c)
 */

void __fastcall sub_180002400(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        va_list Args)
{
  int v13; // eax
  wchar_t Buffer[2048]; // [rsp+50h] [rbp-2038h] BYREF
  wchar_t Format[2048]; // [rsp+1050h] [rbp-1038h] BYREF

  if ( a9 )
  {
    sub_180001408(Format, 2048LL, L"%hs");
    v13 = vsnwprintf(Buffer, 0x7FFuLL, Format, Args);
    if ( v13 < 0 || (unsigned __int64)v13 > 0x7FE )
      Buffer[2047] = 0;
  }
  else
  {
    Buffer[0] = 0;
  }
  sub_180002200(a1, a2, a3, 0LL, 0LL, a6, 1, a8, Buffer);
}
