/*
 * XREFs of RtlpQueryTimeZoneInformationWorker @ 0x180057230
 * Callers:
 *     EtwpGetTimeZoneInformation @ 0x1800570B4 (EtwpGetTimeZoneInformation.c)
 *     RtlQueryTimeZoneInformation @ 0x180057220 (RtlQueryTimeZoneInformation.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x1800E54E0 (RtlQueryDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1800579E4 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x18005829C (RtlpGetRegistryHandle.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpQueryTimeZoneInformationWorker(char *a1, size_t Size)
{
  unsigned int v2; // r14d
  __int64 result; // rax
  int RegistryValues; // esi
  char v6; // [rsp+28h] [rbp-D8h]
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  char *v10; // [rsp+48h] [rbp-B8h]
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  char *v12; // [rsp+58h] [rbp-A8h]
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  char *v14; // [rsp+68h] [rbp-98h]
  _QWORD v15[70]; // [rsp+70h] [rbp-90h] BYREF

  v2 = Size;
  v7 = 0;
  result = RtlpGetRegistryHandle(2LL, L"TimeZoneInformation", 0LL, &Handle);
  if ( (int)result >= 0 )
  {
    memset(a1, 0, v2);
    memset(v15, 0, sizeof(v15));
    v9 = 0x400000;
    LODWORD(v15[1]) = 288;
    v15[2] = L"Bias";
    v10 = a1 + 4;
    v15[9] = L"StandardName";
    v15[10] = &v9;
    v15[3] = a1;
    v15[16] = L"StandardBias";
    v15[17] = a1 + 84;
    v15[23] = L"StandardStart";
    v15[24] = a1 + 68;
    *((_DWORD *)a1 + 17) = -16;
    v12 = a1 + 88;
    v15[30] = L"DaylightName";
    v15[31] = &v11;
    v15[37] = L"DaylightBias";
    v15[38] = a1 + 168;
    v15[44] = L"DaylightStart";
    v11 = 0x400000;
    v15[45] = a1 + 152;
    *((_DWORD *)a1 + 38) = -16;
    LODWORD(v15[4]) = 0x4000000;
    LODWORD(v15[8]) = 288;
    LODWORD(v15[11]) = 0x1000000;
    LODWORD(v15[15]) = 288;
    LODWORD(v15[18]) = 0x4000000;
    LODWORD(v15[22]) = 288;
    LODWORD(v15[25]) = 50331648;
    LODWORD(v15[29]) = 288;
    LODWORD(v15[32]) = 0x1000000;
    LODWORD(v15[36]) = 288;
    LODWORD(v15[39]) = 0x4000000;
    LODWORD(v15[43]) = 288;
    LODWORD(v15[46]) = 50331648;
    if ( v2 >= 0x1B0 )
    {
      v13 = 0x1000000;
      v14 = a1 + 172;
      v15[49] = &RtlpQueryTimeZoneKeyNameRoutine;
      v15[51] = L"TimeZoneKeyName";
      v15[52] = &v13;
      v15[58] = L"DynamicDaylightTimeDisabled";
      v15[59] = &v7;
      LODWORD(v15[53]) = 0;
      LODWORD(v15[57]) = 288;
      LODWORD(v15[60]) = 0x4000000;
    }
    v6 = 1;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, Handle, v15, 0LL, 0LL, v6);
    if ( RegistryValues >= 0 && v2 >= 0x1B0 )
      a1[428] = v7 != 0;
    NtClose(Handle);
    return (unsigned int)RegistryValues;
  }
  return result;
}
