/*
 * XREFs of ndisCreateFilterAdapterRegistry @ 0x1C009CA1C
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C00C8F84 (ndisSetAllFilterDefaultParameters.c)
 */

__int64 __fastcall ndisCreateFilterAdapterRegistry(PCUNICODE_STRING Source, __int64 a2)
{
  unsigned int v2; // edi
  const GUID *v5; // rcx
  NTSTATUS v6; // ebx
  wchar_t *PoolWithTag; // rax
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING GuidString; // [rsp+50h] [rbp-10h] BYREF

  v2 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x58u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, Source, a2);
  v5 = *(const GUID **)(a2 + 16);
  if ( v5 )
  {
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
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, Destination.MaximumLength);
          RtlCopyUnicodeString(&Destination, Source);
          RtlAppendUnicodeStringToString(&Destination, &ndisParameterStr);
          RtlAppendUnicodeStringToString(&Destination, &ndisFilterAdapterStr);
          if ( RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) && RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer) )
          {
LABEL_18:
            v2 = -1073741823;
            goto LABEL_9;
          }
          RtlAppendUnicodeStringToString(&Destination, &DestinationString);
          if ( RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) )
          {
            if ( !RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer) )
            {
              v2 = ndisSetAllFilterDefaultParameters(Source);
              goto LABEL_9;
            }
            goto LABEL_18;
          }
        }
        else
        {
          v2 = -1073741670;
        }
LABEL_9:
        RtlFreeUnicodeString(&DestinationString);
        goto LABEL_10;
      }
    }
    v2 = -1073741823;
  }
  else
  {
    v2 = -1073741811;
  }
LABEL_10:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0x59u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, Source, a2, v2);
  return v2;
}
