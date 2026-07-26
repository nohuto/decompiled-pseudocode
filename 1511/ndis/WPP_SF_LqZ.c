/*
 * XREFs of WPP_SF_LqZ @ 0x1C0045484
 * Callers:
 *     ndisSetDevicePower @ 0x1C001227C (ndisSetDevicePower.c)
 *     ndisMValidatePMWakeReason @ 0x1C0046040 (ndisMValidatePMWakeReason.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C0069480 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ndisSetSystemPower @ 0x1C0097BD0 (ndisSetSystemPower.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E0560 (ndisMCommonHaltMiniport.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00E0E20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_LqZ(unsigned __int16 a1, const struct _GUID *a2, int a3, ...)
{
  __int64 *v3; // rax
  __int64 v6; // r8
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
  v3 = (__int64 *)v11;
  if ( v11 && *((_QWORD *)v11 + 1) )
    v6 = *v11;
  else
    v6 = 10LL;
  if ( !v11 || (v7 = (const wchar_t *)*((_QWORD *)v11 + 1)) == 0LL )
    v7 = L"NULL";
  if ( !v11 || !*v11 )
    v3 = qword_1C00276B0;
  ndisWppFastTraceMessage(a2, a1, &v8, 4LL, va, 8LL, v3, 2LL, v7, v6, 0LL);
}
