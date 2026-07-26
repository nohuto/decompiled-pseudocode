/*
 * XREFs of ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C00110D4
 * Callers:
 *     ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z @ 0x1C009C628 (-OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00D88C8 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0011148 (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 RtlUnicodeStringPrintf(struct _UNICODE_STRING *a1, const unsigned __int16 *a2, ...)
{
  NTSTATUS v3; // ebx
  int v4; // eax
  size_t v6; // [rsp+20h] [rbp-38h]
  ULONG v7; // [rsp+28h] [rbp-30h]
  size_t Count; // [rsp+30h] [rbp-28h] BYREF
  wchar_t *Dest; // [rsp+38h] [rbp-20h] BYREF
  va_list Args; // [rsp+70h] [rbp+18h] BYREF

  va_start(Args, a2);
  v3 = RtlUnicodeStringValidateDestWorker(a1, &Dest, &Count, 0LL, v6, v7);
  if ( v3 >= 0 )
  {
    v3 = 0;
    v4 = _vsnwprintf(Dest, Count, a2, Args);
    if ( v4 < 0 || v4 > Count )
    {
      LOWORD(v4) = Count;
      v3 = -2147483643;
    }
    a1->Length = 2 * v4;
  }
  return (unsigned int)v3;
}
