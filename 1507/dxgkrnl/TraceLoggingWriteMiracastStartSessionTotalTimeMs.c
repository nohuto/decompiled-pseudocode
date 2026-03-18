/*
 * XREFs of TraceLoggingWriteMiracastStartSessionTotalTimeMs @ 0x1C002AED4
 * Callers:
 *     DpiMiracastPerfHandleChunkSent @ 0x1C0029D3C (DpiMiracastPerfHandleChunkSent.c)
 * Callees:
 *     _TlgWrite @ 0x1C000A0EC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000A1C8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingWriteMiracastStartSessionTotalTimeMs(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  const GUID *v2; // r9
  int v3; // eax
  int v4; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C0046830 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v3 = *(_DWORD *)(v1 + 532);
      v8 = 0;
      v11 = 0;
      v4 = v3;
      v9 = &v4;
      v6 = v1 + 112;
      v7 = 16;
      v10 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C00303A3, (LPCGUID)(v1 + 112), v2, 4u, &pData);
    }
  }
}
