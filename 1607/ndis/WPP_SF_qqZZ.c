/*
 * XREFs of WPP_SF_qqZZ @ 0x1C005ADE8
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E6AE0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00E7974 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ndisPnPNotifyBinding @ 0x1C00E7B60 (ndisPnPNotifyBinding.c)
 *     NdisCloseAdapter @ 0x1C00EC1F0 (NdisCloseAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqZZ(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  int v4; // r9d
  const wchar_t *v5; // rdx
  const wchar_t *v6; // r10
  const wchar_t *v7; // r11
  const wchar_t *v8; // r8
  int v9; // ecx
  __int64 v10; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  __int64 v12; // [rsp+A8h] [rbp+20h] BYREF
  va_list va1; // [rsp+A8h] [rbp+20h]
  unsigned __int16 *v14; // [rsp+B0h] [rbp+28h]
  unsigned __int16 *v15; // [rsp+B8h] [rbp+30h]
  va_list va2; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, unsigned __int16 *);
  v15 = va_arg(va2, unsigned __int16 *);
  if ( v15 )
    v4 = *v15;
  else
    v4 = 8;
  v5 = L"NULL";
  if ( v15 )
    v6 = (const wchar_t *)*((_QWORD *)v15 + 1);
  else
    v6 = L"NULL";
  v7 = L"\b";
  v8 = L"\b";
  if ( v15 )
    v8 = v15;
  if ( v14 )
    v9 = *v14;
  else
    v9 = 8;
  if ( v14 )
  {
    v5 = (const wchar_t *)*((_QWORD *)v14 + 1);
    v7 = v14;
  }
  ndisWppFastTraceMessage(a2, a1, va, 8LL, va1, 8LL, v7, 2LL, v5, v9, v8, 2LL, v6, v4, 0LL);
}
