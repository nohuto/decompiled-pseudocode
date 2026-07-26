/*
 * XREFs of ?NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018630
 * Callers:
 *     ndisIfSetInterfaceState @ 0x1C001DA38 (ndisIfSetInterfaceState.c)
 * Callees:
 *     _TlgWrite @ 0x1C0015DA0 (_TlgWrite.c)
 *     ?NdisTraceLoggingDiscoverOperationalStatus@@YA?AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00166B8 (-NdisTraceLoggingDiscoverOperationalStatus@@YA-AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDI.c)
 *     _TlgKeywordOn @ 0x1C00186D4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceStatusChange(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  const GUID *v2; // r9
  LPCGUID v3; // r8
  int v4; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  const GUID *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C0082040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v8 = 0;
      v11 = 0;
      v4 = NdisTraceLoggingDiscoverOperationalStatus(v1);
      v6 = &v4;
      v9 = v2 + 254;
      v7 = 4;
      v10 = 16;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C0073C71, v3, v2, 4u, &pData);
    }
  }
}
