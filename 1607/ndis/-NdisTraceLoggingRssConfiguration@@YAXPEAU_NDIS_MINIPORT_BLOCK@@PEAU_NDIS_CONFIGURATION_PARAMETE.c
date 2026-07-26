/*
 * XREFs of ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C0013FF0
 * Callers:
 *     ndisReadRssKeywords @ 0x1C009F89C (ndisReadRssKeywords.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRssConfiguration(
        const struct _TlgProvider_t *a1,
        struct _NDIS_CONFIGURATION_PARAMETER *a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int64 v5; // r10
  int v6; // [rsp+30h] [rbp-19h] BYREF
  BOOL v7; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int64 *p_RegHandle; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  BOOL *v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  int *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0088010 > 5 && TlgKeywordOn(a1, 0x200000000000uLL) )
  {
    v10 = 16LL;
    p_RegHandle = &v2[63].RegHandle;
    v12 = 4LL;
    v7 = (_DWORD)v4 == 0;
    v11 = &v7;
    if ( (_DWORD)v4 )
      v6 = 0;
    else
      v6 = *(_DWORD *)(v5 + 8);
    v14 = 4LL;
    v13 = &v6;
    TlgWrite(v2, &unk_1C0078757, v3, v4, 5u, &pData);
  }
}
