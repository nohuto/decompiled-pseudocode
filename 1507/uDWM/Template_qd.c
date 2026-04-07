/*
 * XREFs of Template_qd @ 0x180097784
 * Callers:
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000F320 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qd(__int64 a1, __int64 a2, int a3, int a4)
{
  int *v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+2Ch] [rbp-2Ch]
  int *v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+3Ch] [rbp-1Ch]
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v5 = &v11;
  v7 = 0;
  v6 = 4;
  v8 = &v12;
  v10 = 0;
  v9 = 4;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmStoryboardInfo, 2LL, &v5);
}
