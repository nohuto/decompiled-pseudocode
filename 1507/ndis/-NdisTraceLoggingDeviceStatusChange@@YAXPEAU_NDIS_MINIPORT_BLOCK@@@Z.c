/*
 * XREFs of ?NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017488
 * Callers:
 *     ndisIfSetInterfaceState @ 0x1C00161F4 (ndisIfSetInterfaceState.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     ?NdisTraceLoggingDiscoverOperationalStatus@@YA?AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00175CC (-NdisTraceLoggingDiscoverOperationalStatus@@YA-AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDI.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceStatusChange(const struct _TlgProvider_t *a1)
{
  const GUID *v1; // r9
  LPCGUID v2; // r8
  int v3; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  const GUID *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v7 = 0;
      v10 = 0;
      v3 = NdisTraceLoggingDiscoverOperationalStatus();
      v5 = &v3;
      v8 = v1 + 254;
      v6 = 4;
      v9 = 16;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C0074C3D, v2, v1, 4u, &pData);
    }
  }
}
