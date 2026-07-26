/*
 * XREFs of ndisCreateFilterAdapterRegistry @ 0x1C00AA430
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C00CE89C (ndisSetAllFilterDefaultParameters.c)
 */

__int64 __fastcall ndisCreateFilterAdapterRegistry(PCUNICODE_STRING Source, __int64 a2)
{
  unsigned int v4; // edi
  const GUID *v5; // rcx
  NTSTATUS v6; // ebx
  wchar_t *PoolWithTag; // rax
  unsigned int i; // ebx
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-50h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _UNICODE_STRING GuidString; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v13[2]; // [rsp+60h] [rbp-20h] BYREF
  const wchar_t *v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+70h] [rbp-10h]
  const wchar_t *v16; // [rsp+78h] [rbp-8h]

  v13[0] = 917516;
  *(_DWORD *)&DestinationString.Length = 0;
  v14 = L"Psched";
  DestinationString.Buffer = 0LL;
  v16 = L"WfpLwfs";
  *(_DWORD *)&GuidString.Length = 0;
  v4 = 0;
  GuidString.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0LL;
  v15 = 1048590;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x58u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, Source, a2);
  v5 = *(const GUID **)(a2 + 16);
  if ( !v5 )
  {
    v4 = -1073741811;
    goto LABEL_20;
  }
  if ( !RtlStringFromGUID(v5 + 254, &GuidString) )
  {
    v6 = RtlUpcaseUnicodeString(&DestinationString, &GuidString, 1u);
    RtlFreeUnicodeString(&GuidString);
    if ( !v6 )
    {
      Destination.MaximumLength = DestinationString.Length
                                + ndisParameterStr.Length
                                + ndisFilterAdapterStr.Length
                                + Source->Length
                                + 2;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x2020444Eu);
      Destination.Buffer = PoolWithTag;
      if ( !PoolWithTag )
      {
        v4 = -1073741670;
LABEL_18:
        RtlFreeUnicodeString(&DestinationString);
        goto LABEL_20;
      }
      memset(PoolWithTag, 0, Destination.MaximumLength);
      RtlCopyUnicodeString(&Destination, Source);
      RtlAppendUnicodeStringToString(&Destination, &ndisParameterStr);
      RtlAppendUnicodeStringToString(&Destination, &ndisFilterAdapterStr);
      for ( i = 0; i < 2; ++i )
      {
        if ( !RtlCompareUnicodeString((PCUNICODE_STRING)&v13[4 * i], Source, 1u) )
          goto LABEL_18;
      }
      if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) || !RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer) )
      {
        RtlAppendUnicodeStringToString(&Destination, &DestinationString);
        if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) )
          goto LABEL_18;
        if ( !RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer) )
        {
          v4 = ndisSetAllFilterDefaultParameters(Source);
          goto LABEL_18;
        }
      }
      v4 = -1073741823;
      goto LABEL_18;
    }
  }
  v4 = -1073741823;
LABEL_20:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0x59u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, Source, a2, v4);
  return v4;
}
