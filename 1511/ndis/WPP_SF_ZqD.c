/*
 * XREFs of WPP_SF_ZqD @ 0x1C006AC00
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A0368 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A21D8 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_ZqD(unsigned __int16 a1, __int64 a2, __int64 *a3, ...)
{
  __int64 v3; // rdx
  const wchar_t *v4; // rax
  __int64 v5; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v5 = va_arg(va1, _QWORD);
  if ( a3 && a3[1] )
    v3 = *(unsigned __int16 *)a3;
  else
    v3 = 10LL;
  if ( !a3 || (v4 = (const wchar_t *)a3[1]) == 0LL )
    v4 = L"NULL";
  if ( !a3 || !*(_WORD *)a3 )
    a3 = qword_1C00276B0;
  ndisWppFastTraceMessage(&WPP_6e95c490e51e9748073b6395c0120650_Traceguids, a1, a3, 2LL, v4, v3, va, 8LL, va1, 4LL, 0LL);
}
