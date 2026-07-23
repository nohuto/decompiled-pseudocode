/*
 * XREFs of WheapLoadPolicy @ 0x1407E4B64
 * Callers:
 *     WheaInitialize @ 0x1407C0D60 (WheaInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x140181730 (ZwQueryLicenseValue.c)
 */

int WheapLoadPolicy()
{
  int v0; // edx
  int v1; // r8d
  int v2; // r9d
  int v3; // r10d
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG Type; // [rsp+70h] [rbp+8h] BYREF
  ULONG ResultDataSize; // [rsp+78h] [rbp+10h] BYREF
  int Data; // [rsp+80h] [rbp+18h] BYREF

  v0 = WheaRegPolicyDisableOffline;
  if ( WheaRegPolicyDisableOffline != -1 )
    WheapPolicyDisableOffline = WheaRegPolicyDisableOffline != 0;
  v1 = WheaRegPolicyMemPersistOffline;
  if ( WheaRegPolicyMemPersistOffline == -1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Kernel-PersistDefectiveMemoryList");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
      && Type == 4
      && ResultDataSize == 4 )
    {
      WheapPolicyMemPersistOffline = Data != 0;
    }
    v1 = WheaRegPolicyMemPersistOffline;
    v0 = WheaRegPolicyDisableOffline;
  }
  else
  {
    WheapPolicyMemPersistOffline = WheaRegPolicyMemPersistOffline != 0;
  }
  if ( WheaRegPolicyMemPfaDisable != -1 )
    WheapPolicyMemPfaDisable = WheaRegPolicyMemPfaDisable != 0;
  if ( (unsigned int)(WheaRegPolicyMemPfaPageCount - 1) <= 0xFFFF )
  {
    v2 = WheaRegPolicyMemPfaPageCount;
    WheapPolicyMemPfaPageCount = WheaRegPolicyMemPfaPageCount;
  }
  else if ( (unsigned int)(WheapMaxCorrectedMCEOutstanding - 1) <= 0xFFFF )
  {
    v2 = WheapMaxCorrectedMCEOutstanding;
    WheapPolicyMemPfaPageCount = WheapMaxCorrectedMCEOutstanding;
  }
  else
  {
    v2 = WheapPolicyMemPfaPageCount;
  }
  if ( (unsigned int)(WheaRegPolicyMemPfaThreshold - 1) <= 0xFFFF )
  {
    v3 = WheaRegPolicyMemPfaThreshold;
    WheapPolicyMemPfaThreshold = WheaRegPolicyMemPfaThreshold;
  }
  else if ( (unsigned int)(WheapSingleBitEccErrorThreshold - 1) <= 0xFFFF )
  {
    v3 = WheapSingleBitEccErrorThreshold;
    WheapPolicyMemPfaThreshold = WheapSingleBitEccErrorThreshold;
  }
  else
  {
    v3 = WheapPolicyMemPfaThreshold;
  }
  if ( (unsigned int)WheaRegPolicyMemPfaTimeout <= 0x93A80 )
    WheapPolicyMemPfaTimeout = 10000000LL * (unsigned int)WheaRegPolicyMemPfaTimeout;
  if ( !v2 || !v3 )
    WheapPolicyMemPfaDisable = 1;
  if ( WheaRegPolicyIgnoreDummyWrite != -1 )
    WheapPolicyIgnoreDummyWrite = WheaRegPolicyIgnoreDummyWrite != 0;
  result = WheaRegistryKeysPresent;
  if ( v0 != -1 )
  {
    result = WheaRegistryKeysPresent | 1;
    WheaRegistryKeysPresent |= 1u;
  }
  if ( v1 != -1 )
  {
    result |= 2u;
    WheaRegistryKeysPresent = result;
  }
  if ( WheaRegPolicyMemPfaDisable != -1 )
  {
    result |= 4u;
    WheaRegistryKeysPresent = result;
  }
  if ( WheaRegPolicyMemPfaPageCount != -1 )
  {
    result |= 8u;
    WheaRegistryKeysPresent = result;
  }
  if ( WheaRegPolicyMemPfaThreshold != -1 )
  {
    result |= 0x10u;
    WheaRegistryKeysPresent = result;
  }
  if ( WheaRegPolicyMemPfaTimeout != -1 )
  {
    result |= 0x20u;
    WheaRegistryKeysPresent = result;
  }
  if ( WheapSingleBitEccErrorThreshold != -1 )
  {
    result |= 0x40u;
    WheaRegistryKeysPresent = result;
  }
  if ( WheapMaxCorrectedMCEOutstanding != -1 )
  {
    result |= 0x80u;
    WheaRegistryKeysPresent = result;
  }
  if ( WheaRegPolicyIgnoreDummyWrite != -1 )
  {
    result |= 0x100u;
    WheaRegistryKeysPresent = result;
  }
  return result;
}
