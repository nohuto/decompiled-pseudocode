/*
 * XREFs of ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@H@Z @ 0x1C007282C
 * Callers:
 *     NdisClAddParty @ 0x1C00F6000 (NdisClAddParty.c)
 *     NdisCoAssignInstanceName @ 0x1C00F72C0 (NdisCoAssignInstanceName.c)
 *     NdisMCmRequest @ 0x1C00F9160 (NdisMCmRequest.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
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

  if ( (unsigned int)dword_1C0088010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &v4;
      v4 = v1;
      v10 = &v5;
      v8 = 4;
      v5 = (int)v3;
      v11 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C0079E54, v2, v3, 4u, &pData);
    }
  }
}
