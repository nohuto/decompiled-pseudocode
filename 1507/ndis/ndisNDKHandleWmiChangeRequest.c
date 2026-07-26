/*
 * XREFs of ndisNDKHandleWmiChangeRequest @ 0x1C00D7AD0
 * Callers:
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00036AC (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     NdisCloseConfiguration @ 0x1C00A9050 (NdisCloseConfiguration.c)
 *     NdisOpenConfiguration @ 0x1C00CD890 (NdisOpenConfiguration.c)
 *     NdisWriteConfiguration @ 0x1C00CDA60 (NdisWriteConfiguration.c)
 */

__int64 __fastcall ndisNDKHandleWmiChangeRequest(_QWORD *a1, char a2)
{
  void *v2; // r8
  const WCHAR *v4; // rbx
  unsigned int SetMiniport; // eax
  bool v6; // zf
  unsigned int v7; // ecx
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  int Status; // [rsp+38h] [rbp-C8h] BYREF
  PVOID ConfigurationHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Keyword; // [rsp+48h] [rbp-B8h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v14[248]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (void *)a1[507];
  Keyword.Buffer = L"*NetworkDirect";
  v9 = a2;
  *(_DWORD *)&Keyword.Length = 1966108;
  v4 = (const WCHAR *)L"1";
  if ( !a2 )
    v4 = L"0";
  NdisOpenConfiguration(&Status, &ConfigurationHandle, v2);
  SetMiniport = Status;
  v6 = Status == 0;
  if ( Status >= 0 )
  {
    ParameterValue.ParameterType = NdisParameterString;
    RtlInitUnicodeString((PUNICODE_STRING)&ParameterValue.ParameterData, v4);
    NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
    NdisCloseConfiguration(ConfigurationHandle);
    SetMiniport = Status;
    v6 = Status == 0;
    if ( Status >= 0 )
    {
      memset(v14, 0, sizeof(v14));
      *(_DWORD *)&v14[88] |= 8u;
      *(_DWORD *)&v14[8] = 0;
      *(_QWORD *)&v14[104] = &ndisIntReqWmi;
      *(_DWORD *)&v14[4] = 1;
      *(_DWORD *)&v14[48] = 1;
      *(_QWORD *)&v14[40] = &v9;
      *(_DWORD *)v14 = 15466902;
      *(_DWORD *)&v14[32] = -66846207;
      SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v14, 0LL, 0LL);
      v6 = SetMiniport == 0;
    }
  }
  if ( v6 )
    return SetMiniport;
  if ( SetMiniport == 259 )
    return SetMiniport;
  if ( SetMiniport == -2147483643 )
    return SetMiniport;
  v7 = -1073741823;
  switch ( SetMiniport )
  {
    case 0xC0000001:
    case 0xC000009A:
    case 0xC00000BB:
      return SetMiniport;
    case 0xC0010016:
      return (unsigned int)-1073741789;
    case 0xC0010014:
      return (unsigned int)-1073741306;
    case 0xC0010015:
      return (unsigned int)-1073741811;
  }
  return v7;
}
