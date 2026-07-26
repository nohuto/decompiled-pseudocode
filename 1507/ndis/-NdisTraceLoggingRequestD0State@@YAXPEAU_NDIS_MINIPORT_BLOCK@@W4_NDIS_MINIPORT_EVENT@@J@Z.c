/*
 * XREFs of ?NdisTraceLoggingRequestD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@J@Z @ 0x1C0010590
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C0010474 (ndisRequestDevicePowerD0.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRequestD0State(const struct _TlgProvider_t *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  unsigned __int16 v5; // r10
  int v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int64 *p_RegHandle; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  int *v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  int *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v10 = 16LL;
      p_RegHandle = &v2[63].RegHandle;
      v7 = v5;
      v11 = &v7;
      v13 = &v6;
      v12 = 4LL;
      v6 = (int)v4;
      v14 = 4LL;
      TlgWrite(v2, &unk_1C0074F1F, v3, v4, 5u, &pData);
    }
  }
}
