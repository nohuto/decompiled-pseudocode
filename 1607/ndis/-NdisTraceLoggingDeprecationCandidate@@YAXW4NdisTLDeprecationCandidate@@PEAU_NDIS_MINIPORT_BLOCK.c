/*
 * XREFs of ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@PEAU_NDIS_MINIPORT_BLOCK@@H@Z @ 0x1C00728CC
 * Callers:
 *     NdisClOpenAddressFamily @ 0x1C00F3440 (NdisClOpenAddressFamily.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00F3980 (NdisCmRegisterAddressFamily.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeprecationCandidate(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  __int64 v4; // r10
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0088010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v5 = (int)v1;
      v8 = &v5;
      v10 = v4 + 4064;
      v12 = &v6;
      v9 = 4LL;
      v11 = 16LL;
      v6 = (int)v3;
      v13 = 4LL;
      TlgWrite(v1, &unk_1C00791A6, v2, v3, 5u, &pData);
    }
  }
}
