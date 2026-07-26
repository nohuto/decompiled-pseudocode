/*
 * XREFs of ndisQueryDeviceFlags @ 0x1C00B0618
 * Callers:
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001E960 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_Sd @ 0x1C003DE84 (WPP_SF_Sd.c)
 *     WPP_SF_Sx @ 0x1C005BC38 (WPP_SF_Sx.c)
 */

void __fastcall ndisQueryDeviceFlags(const wchar_t *a1, _QWORD *a2)
{
  __int64 v3; // rax
  SIZE_T v5; // rbp
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rsi
  int DeviceFlags; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx

  *a2 = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  v5 = 2 * v3 + 12;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x2020444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlStringCbPrintfW(PoolWithTag, v5, L"%ws:%ws", L"NDIS", a1);
    DeviceFlags = KseQueryDeviceFlags(v7, L"NdisMp", a2);
    if ( DeviceFlags >= 0 )
    {
      if ( (unsigned __int8)byte_1C0085314 >= 4u )
        WPP_SF_Sx(v10, v9, a1, *a2);
    }
    else if ( (unsigned __int8)byte_1C0085314 >= 4u )
    {
      WPP_SF_Sd(0x6Eu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, a1, DeviceFlags);
    }
    ExFreePoolWithTag(v7, 0);
  }
  else if ( (unsigned __int8)byte_1C0085314 >= 2u )
  {
    WPP_SF_(0x6Cu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids);
  }
}
