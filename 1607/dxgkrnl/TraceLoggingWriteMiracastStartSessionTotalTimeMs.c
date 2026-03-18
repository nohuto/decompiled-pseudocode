/*
 * XREFs of TraceLoggingWriteMiracastStartSessionTotalTimeMs @ 0x1C0031E5C
 * Callers:
 *     DpiMiracastPerfHandleChunkSent @ 0x1C0030D34 (DpiMiracastPerfHandleChunkSent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void TraceLoggingWriteMiracastStartSessionTotalTimeMs()
{
  __int64 v0; // r9
  int v1; // eax
  int v2; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  int *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C00568C0 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00568C0, 0x400000000002uLL) )
    {
      v1 = *(_DWORD *)(v0 + 668);
      v6 = 0;
      v9 = 0;
      v2 = v1;
      v7 = &v2;
      v4 = v0 + 112;
      v5 = 16;
      v8 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C00568C0, &unk_1C003DED1, (LPCGUID)(v0 + 112), (LPCGUID)v0, 4u, &pData);
    }
  }
}
