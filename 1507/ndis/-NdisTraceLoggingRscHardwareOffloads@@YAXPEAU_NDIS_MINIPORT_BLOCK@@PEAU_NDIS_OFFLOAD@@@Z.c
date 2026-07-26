/*
 * XREFs of ?NdisTraceLoggingRscHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0022760
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0012F38 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRscHardwareOffloads(const struct _TlgProvider_t *a1, struct _NDIS_OFFLOAD *a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int64 *p_RegHandle; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v9 = 16LL;
      p_RegHandle = &v2[63].RegHandle;
      v6 = *(unsigned __int8 *)(v4 + 144);
      v10 = &v6;
      v5 = *(unsigned __int8 *)(v4 + 145);
      v12 = &v5;
      v11 = 4LL;
      v13 = 4LL;
      TlgWrite(v2, &unk_1C0074609, v3, (LPCGUID)v4, 5u, &pData);
    }
  }
}
