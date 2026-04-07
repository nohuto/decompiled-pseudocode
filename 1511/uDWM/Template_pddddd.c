/*
 * XREFs of Template_pddddd @ 0x180082224
 * Callers:
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF80 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_pddddd(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7, char a8)
{
  _QWORD v9[12]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v10; // [rsp+B0h] [rbp+57h] BYREF
  int v11; // [rsp+B8h] [rbp+5Fh] BYREF

  v11 = a4;
  v10 = a3;
  v9[0] = &v10;
  v9[1] = 8LL;
  v9[2] = &v11;
  v9[3] = 4LL;
  v9[4] = &a5;
  v9[5] = 4LL;
  v9[6] = &a6;
  v9[8] = &a7;
  v9[10] = &a8;
  v9[7] = 4LL;
  v9[9] = 4LL;
  v9[11] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmWindowDPI_Change, 6LL, v9);
}
