/*
 * XREFs of ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@PEAU_NDIS_MINIPORT_BLOCK@@H@Z @ 0x1C006E568
 * Callers:
 *     NdisMCreateLog @ 0x1C0055210 (NdisMCreateLog.c)
 *     NdisClOpenAddressFamily @ 0x1C00F2770 (NdisClOpenAddressFamily.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00F2CB0 (NdisCmRegisterAddressFamily.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall NdisTraceLoggingDeprecationCandidate(
        const struct _TlgProvider_t *a1,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  TLG_STATUS result; // eax
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    v6 = (int)a1;
    v8 = &v6;
    v10 = a2 + 4064;
    v12 = &v5;
    v9 = 4LL;
    v11 = 16LL;
    v5 = (int)a3;
    v13 = 4LL;
    return TlgWrite(a1, &unk_1C0073C6F, a3, a4, 5u, &pData);
  }
  return result;
}
