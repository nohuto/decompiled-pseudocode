/*
 * XREFs of ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C0225E90
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSPISetModernDPIOverrideEvent(const struct _TlgProvider_t *a1, int a2)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]
  int v12; // [rsp+A8h] [rbp+10h] BYREF

  v12 = a2;
  v4 = 0xFFFF;
  if ( (unsigned int)dword_1C031B280 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v4;
      v9 = &v12;
      v7 = 4;
      v10 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C02E9D5C, v2, v3, 4u, &pData);
    }
  }
}
