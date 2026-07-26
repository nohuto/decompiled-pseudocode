/*
 * XREFs of WPP_SF_LqZ @ 0x1C00489B0
 * Callers:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 *     ndisMValidatePMWakeReason @ 0x1C004980C (ndisMValidatePMWakeReason.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C006DF84 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ndisSetSystemPower @ 0x1C009C3F4 (ndisSetSystemPower.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EA1F0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00EB5E4 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_LqZ(unsigned __int16 a1, const struct _GUID *a2, int a3, ...)
{
  int v5; // r8d
  const wchar_t *v6; // rdx
  const wchar_t *v7; // rcx
  int v8; // [rsp+80h] [rbp+18h] BYREF
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  unsigned __int16 *v11; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, unsigned __int16 *);
  v8 = a3;
  if ( v11 )
    v5 = *v11;
  else
    v5 = 8;
  if ( v11 )
    v6 = (const wchar_t *)*((_QWORD *)v11 + 1);
  else
    v6 = L"NULL";
  v7 = L"\b";
  if ( v11 )
    v7 = v11;
  ndisWppFastTraceMessage(a2, a1, &v8, 4LL, va, 8LL, v7, 2LL, v6, v5, 0LL);
}
