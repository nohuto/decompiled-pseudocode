/*
 * XREFs of ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C006E1E0
 * Callers:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisHandlePnPRequest @ 0x1C00DF000 (ndisHandlePnPRequest.c)
 * Callees:
 *     _TlgWrite @ 0x1C0015DA0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00186D4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRareFeaturePath(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C0082040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v8 = 0;
      v6 = &v4;
      v4 = (int)v1;
      v7 = 4;
      TlgWrite(v1, &unk_1C0073B95, v2, v3, 3u, &pData);
    }
  }
}
