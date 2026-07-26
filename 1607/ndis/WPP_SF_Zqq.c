/*
 * XREFs of WPP_SF_Zqq @ 0x1C004EB44
 * Callers:
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A3B60 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A3C0C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00AF4E4 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ndisFindRootDevice @ 0x1C00F277C (ndisFindRootDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_Zqq(unsigned __int16 a1, const struct _GUID *a2, unsigned __int16 *a3, ...)
{
  int v6; // r9d
  const wchar_t *v7; // rcx
  const wchar_t *v8; // r8
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  if ( a3 )
    v6 = *a3;
  else
    v6 = 8;
  if ( a3 )
    v7 = (const wchar_t *)*((_QWORD *)a3 + 1);
  else
    v7 = L"NULL";
  v8 = L"\b";
  if ( a3 )
    v8 = a3;
  ndisWppFastTraceMessage(a2, a1, v8, 2LL, v7, v6, va, 8LL, va1, 8LL, 0LL);
}
