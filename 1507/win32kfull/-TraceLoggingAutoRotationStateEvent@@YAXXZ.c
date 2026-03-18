/*
 * XREFs of ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C0132F4C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     QueryAutoRotationState @ 0x1C007D804 (QueryAutoRotationState.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingAutoRotationStateEvent(const struct _TlgProvider_t *a1)
{
  TraceLoggingHProvider v1; // rcx
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  int AutoRotationState; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *p_AutoRotationState; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v8 = 0;
      v6 = &dword_1C032303C;
      v7 = 4;
      v11 = 0;
      AutoRotationState = QueryAutoRotationState();
      p_AutoRotationState = &AutoRotationState;
      v10 = 4;
      TlgWrite(v1, &unk_1C02EA6F8, v2, v3, 4u, &pData);
    }
  }
}
