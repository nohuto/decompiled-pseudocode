/*
 * XREFs of ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C00095E4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSysQueueLockedRetryFailed(const struct _TlgProvider_t *a1)
{
  int v1; // ecx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-68h] BYREF
  int v5; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  int *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C031B280 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &v5;
      v5 = v1;
      v10 = &v4;
      v8 = 4;
      v4 = (int)v2;
      v11 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C02E9439, v2, v3, 4u, &pData);
    }
  }
}
