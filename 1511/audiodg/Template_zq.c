/*
 * XREFs of Template_zq @ 0x140033240
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140015660 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 */

__int64 __fastcall Template_zq(__int64 a1, __int64 a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rax
  int v5; // ecx
  const wchar_t *v6; // rax
  const wchar_t *v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]
  int *v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v9 = v5;
  v6 = L"NULL";
  if ( a3 )
    v6 = a3;
  v10 = 0;
  v8 = v6;
  v12 = 4LL;
  v11 = &v13;
  return ((__int64 (__fastcall *)(REGHANDLE, void *, __int64, const wchar_t **))EtwEventWrite)(
           Microsoft_Windows_AudioHandle,
           &CreateDeviceEndpointInstance_Task_Start,
           2LL,
           &v8);
}
