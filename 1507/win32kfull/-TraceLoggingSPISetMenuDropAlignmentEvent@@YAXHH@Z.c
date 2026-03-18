/*
 * XREFs of ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C015520C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSPISetMenuDropAlignmentEvent(const struct _TlgProvider_t *a1)
{
  char v1; // cl
  const GUID *v2; // r8
  const GUID *v3; // r9
  char v4; // [rsp+30h] [rbp-68h] BYREF
  char v5; // [rsp+31h] [rbp-67h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  char *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  char *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &v5;
      v5 = v1;
      v10 = &v4;
      v8 = 1;
      v4 = (char)v2;
      v11 = 1;
      TlgWrite((TraceLoggingHProvider)1, &unk_1C02EA78D, v2, v3, 4u, &pData);
    }
  }
}
