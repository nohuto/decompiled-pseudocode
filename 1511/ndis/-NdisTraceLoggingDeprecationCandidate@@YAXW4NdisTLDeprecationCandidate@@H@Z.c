/*
 * XREFs of ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@H@Z @ 0x1C006D948
 * Callers:
 *     NdisClAddParty @ 0x1C00F0000 (NdisClAddParty.c)
 *     NdisCoAssignInstanceName @ 0x1C00F12C0 (NdisCoAssignInstanceName.c)
 *     NdisMCmRequest @ 0x1C00F3160 (NdisMCmRequest.c)
 * Callees:
 *     _TlgWrite @ 0x1C0015DA0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00186D4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeprecationCandidate(const struct _TlgProvider_t *a1)
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

  if ( (unsigned int)dword_1C0082040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &v5;
      v5 = v1;
      v10 = &v4;
      v8 = 4;
      v4 = (int)v3;
      v11 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C0073B08, v2, v3, 4u, &pData);
    }
  }
}
