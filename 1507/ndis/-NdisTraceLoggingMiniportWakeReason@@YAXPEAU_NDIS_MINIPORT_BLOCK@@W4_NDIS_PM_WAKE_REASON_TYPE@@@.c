/*
 * XREFs of ?NdisTraceLoggingMiniportWakeReason@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C006E744
 * Callers:
 *     ndisMValidatePMWakeReason @ 0x1C0044AA8 (ndisMValidatePMWakeReason.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingMiniportWakeReason(const struct _TlgProvider_t *a1, enum _NDIS_PM_WAKE_REASON_TYPE a2)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  int *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = v2 + 4064;
      v10 = &v5;
      v8 = 16;
      v5 = (int)v4;
      v11 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C0073D8C, v3, v4, 4u, &pData);
    }
  }
}
