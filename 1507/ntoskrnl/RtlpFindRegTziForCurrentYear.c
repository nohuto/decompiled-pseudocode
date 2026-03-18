/*
 * XREFs of RtlpFindRegTziForCurrentYear @ 0x140165350
 * Callers:
 *     RtlpUpdateDynamicTimeZones @ 0x1405A63CC (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1405A66B4 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _itow_s @ 0x140176998 (_itow_s.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1404AA414 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall RtlpFindRegTziForCurrentYear(_DWORD *a1, __int64 a2, __int16 a3)
{
  int v4; // ebx
  int RegistryValues; // edi
  __int16 v7; // ax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v11[28]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t DstBuf[8]; // [rsp+120h] [rbp+20h] BYREF

  v4 = a3;
  RegistryValues = -1073741811;
  memset(a1, 0, 0x2CuLL);
  if ( !itow_s(v4, DstBuf, 5uLL, 10) )
  {
    memset(v11, 0, sizeof(v11));
    v11[2] = L"FirstEntry";
    LODWORD(v11[1]) = 292;
    LODWORD(v11[4]) = 0x4000000;
    v11[3] = &v10;
    LODWORD(v11[11]) = 0x4000000;
    v11[9] = L"LastEntry";
    v10 = -4;
    v11[10] = &v9;
    LODWORD(v11[8]) = 292;
    v11[16] = DstBuf;
    v9 = -4;
    LODWORD(v11[15]) = 288;
    v11[17] = a1;
    LODWORD(v11[18]) = 50331648;
    *a1 = -44;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, a2, v11, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      v7 = v10;
      if ( v9 == -4 || v10 == -4 )
        RegistryValues = -1073741762;
      if ( RegistryValues >= 0 && (v4 > v9 || v4 < v10) )
      {
        if ( v4 > v9 )
          v7 = v9;
        if ( itow_s(v7, DstBuf, 5uLL, 10) )
        {
          return (unsigned int)-1073741762;
        }
        else
        {
          LODWORD(v11[15]) = 292;
          LODWORD(v11[18]) = 50331648;
          *a1 = -44;
          return (unsigned int)RtlQueryRegistryValuesEx(0x40000000LL, a2, &v11[14], 0LL, 0LL);
        }
      }
    }
  }
  return (unsigned int)RegistryValues;
}
