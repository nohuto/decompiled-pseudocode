/*
 * XREFs of Template_qzq @ 0x18009AE2C
 * Callers:
 *     ?Invoke@DEVICE_EVENT@@UEAAXXZ @ 0x18009A590 (-Invoke@DEVICE_EVENT@@UEAAXXZ.c)
 *     ServiceDeviceEvent @ 0x18009AB90 (ServiceDeviceEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qzq(__int64 a1, __int64 a2, int a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  int v6; // ecx
  const wchar_t *v7; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+38h] [rbp-28h]
  int v11; // [rsp+3Ch] [rbp-24h]
  char *v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+80h] [rbp+20h] BYREF

  v14 = a3;
  v9[1] = 4LL;
  v9[0] = &v14;
  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v10 = v6;
  v7 = L"NULL";
  if ( a4 )
    v7 = a4;
  v11 = 0;
  v9[2] = v7;
  v13 = 4LL;
  v12 = &a5;
  return ((__int64 (__fastcall *)(REGHANDLE, __int64, __int64, _QWORD *))EtwEventWrite)(
           Microsoft_Windows_AudioHandle,
           a2,
           3LL,
           v9);
}
