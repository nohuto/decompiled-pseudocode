/*
 * XREFs of ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C006E25C
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 * Callees:
 *     _TlgWrite @ 0x1C0015DA0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall NdisTraceLoggingRareFeaturePath(__int64 a1, __int64 a2, __int64 a3, const GUID *a4)
{
  __int16 v4; // ax
  TLG_STATUS result; // eax
  int v6; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v8; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+68h] [rbp+Fh]
  __int64 v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  _DWORD *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  __int64 v14; // [rsp+90h] [rbp+37h]
  _DWORD v15[2]; // [rsp+98h] [rbp+3Fh] BYREF

  if ( (unsigned int)dword_1C0082040 > 5 )
  {
    v6 = 1;
    v8 = &v6;
    v9 = 4LL;
    v10 = a2 + 4064;
    v12 = v15;
    v14 = *(_QWORD *)(a3 + 80);
    v4 = *(_WORD *)(a3 + 72) >> 1;
    v11 = 16LL;
    v15[0] = (unsigned __int16)(2 * v4);
    v13 = 2LL;
    v15[1] = 0;
    return TlgWrite(0LL, &unk_1C0073CBA, (LPCGUID)a3, a4, 6u, &pData);
  }
  return result;
}
