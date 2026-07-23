/*
 * XREFs of ExpPcwDisabledStatus @ 0x1406B6B54
 * Callers:
 *     PcwAddInstance @ 0x1404D4324 (PcwAddInstance.c)
 *     PcwCreateInstance @ 0x14054D2A0 (PcwCreateInstance.c)
 *     PcwRegister @ 0x140553DEC (PcwRegister.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 */

__int64 ExpPcwDisabledStatus()
{
  int v0; // eax
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+38h] [rbp-11h]
  const wchar_t *v4; // [rsp+40h] [rbp-9h]
  int *v5; // [rsp+48h] [rbp-1h]
  int v6; // [rsp+50h] [rbp+7h]
  int *v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+60h] [rbp+17h]
  _BYTE v9[56]; // [rsp+68h] [rbp+1Fh] BYREF
  int v10; // [rsp+B0h] [rbp+67h] BYREF
  int v11; // [rsp+B8h] [rbp+6Fh] BYREF

  v0 = ExpPcwEnableState;
  if ( ExpPcwEnableState )
    return v0 != 1 ? 0xC0000002 : 0;
  v10 = -1;
  v4 = L"Start";
  v2 = 0LL;
  v5 = &v11;
  v3 = 288;
  v7 = &v10;
  v6 = 67108868;
  v8 = 4;
  memset(v9, 0, sizeof(v9));
  result = RtlpQueryRegistryValues(1LL, L"pcw", (__int64)&v2, 0LL);
  if ( (_DWORD)result == -1073741772 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    v0 = 2 - (v11 != 0);
    ExpPcwEnableState = v0;
    return v0 != 1 ? 0xC0000002 : 0;
  }
  return result;
}
