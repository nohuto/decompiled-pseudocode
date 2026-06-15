/*
 * XREFs of Template_zqttq @ 0x18008DB44
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     AudioServerIsFormatSupported @ 0x180022F00 (AudioServerIsFormatSupported.c)
 *     AudioServerGetMixFormat @ 0x18002E5C0 (AudioServerGetMixFormat.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 */

__int64 __fastcall Template_zqttq(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5, char a6, char a7)
{
  __int64 v7; // rax
  int v8; // ecx
  const wchar_t *v9; // rax
  const wchar_t *v11; // [rsp+20h] [rbp-60h] BYREF
  int v12; // [rsp+28h] [rbp-58h]
  int v13; // [rsp+2Ch] [rbp-54h]
  int *v14; // [rsp+30h] [rbp-50h]
  __int64 v15; // [rsp+38h] [rbp-48h]
  char *v16; // [rsp+40h] [rbp-40h]
  __int64 v17; // [rsp+48h] [rbp-38h]
  char *v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-28h]
  char *v20; // [rsp+60h] [rbp-20h]
  __int64 v21; // [rsp+68h] [rbp-18h]
  int v22; // [rsp+A8h] [rbp+28h] BYREF

  v22 = a4;
  if ( a3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v12 = v8;
  v9 = L"NULL";
  if ( a3 )
    v9 = a3;
  v13 = 0;
  v11 = v9;
  v15 = 4LL;
  v14 = &v22;
  v17 = 4LL;
  v16 = &a5;
  v18 = &a6;
  v20 = &a7;
  v19 = 4LL;
  v21 = 4LL;
  return ((__int64 (__fastcall *)(REGHANDLE, __int64, __int64, const wchar_t **))EtwEventWrite)(
           Microsoft_Windows_AudioHandle,
           a2,
           5LL,
           &v11);
}
