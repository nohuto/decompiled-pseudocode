/*
 * XREFs of Template_z @ 0x1800A7650
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 */

ULONG __fastcall Template_z(__int64 a1, __int64 a2, const wchar_t *a3)
{
  __int64 v3; // rax
  ULONG v4; // ecx
  const wchar_t *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  UserData.Size = v4;
  v5 = L"NULL";
  if ( a3 )
    v5 = a3;
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)v5;
  return EventWrite(Microsoft_Windows_AudioHandle, &EndpointCharacteristics_CreateInstance_Task_Start, 1u, &UserData);
}
