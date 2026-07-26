/*
 * XREFs of WPP_SF_qqZ @ 0x1C004EC28
 * Callers:
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004E304 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqZ(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  __int64 v2; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+18h]
  __int64 v4; // [rsp+88h] [rbp+20h]
  __int64 v5; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v2 = va_arg(va1, _QWORD);
  v4 = va_arg(va1, _QWORD);
  v5 = va_arg(va1, _QWORD);
  ndisWppFastTraceMessage(a2, a1, va);
}
