/*
 * XREFs of WPP_SF__guid_DqD @ 0x1C006BF30
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A1520 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AEB60 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF__guid_DqD(unsigned __int16 a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v4; // [rsp+88h] [rbp+20h] BYREF
  __int64 v5; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v5 = va_arg(va1, _QWORD);
  v4 = a4;
  ndisWppFastTraceMessage(
    &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids,
    a1,
    a3,
    16LL,
    &v4,
    4LL,
    va,
    8LL,
    va1,
    4LL,
    0LL);
}
