/*
 * XREFs of RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18003E2C8
 * Callers:
 *     RtlpInitializeLangRegistryInfo @ 0x18003ED50 (RtlpInitializeLangRegistryInfo.c)
 * Callees:
 *     CloseGlobalizationUserSettingsKey @ 0x180006D78 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180009598 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18003D550 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18003D640 (RtlpMuiRegFreeRegistryInfo.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18003E424 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegDeserializeRegistryInfo @ 0x18003EBFC (_RtlpMuiRegDeserializeRegistryInfo.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A6DB0 (ZwGetMUIRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1800EB5F0 (RtlpMuiRegCreateRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegCreateAndLoadRegistryInfo(_QWORD *a1)
{
  _DWORD *v1; // rbx
  PVOID Heap; // rax
  void *v4; // rsi
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  void *RegistryInfo; // rax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG DataSize; // [rsp+A0h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+48h] BYREF

  v1 = 0LL;
  BaseAddress = 0LL;
  if ( !a1 || *a1 )
  {
    v5 = -1073741811;
    goto LABEL_16;
  }
  DataSize = 0;
  if ( ZwGetMUIRegistryInfo(0, &DataSize, 0LL) < 0 )
  {
LABEL_20:
    RegistryInfo = (void *)RtlpMuiRegCreateRegistryInfo();
    BaseAddress = RegistryInfo;
    v1 = RegistryInfo;
    if ( RegistryInfo )
    {
      v5 = RtlpMuiRegLoadRegistryInfo((__int64)RegistryInfo, 4095);
      if ( v5 >= 0 )
      {
        v5 = 0;
        v1[3] = MEMORY[0x7FFE03A4];
      }
      else
      {
        RtlpMuiRegFreeRegistryInfo((__int64)v1, 0xFFFu);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        v1 = 0LL;
      }
      goto LABEL_16;
    }
LABEL_18:
    v5 = -1073741801;
    goto LABEL_16;
  }
  if ( DataSize )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, DataSize);
    v1 = BaseAddress;
    v4 = Heap;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    goto LABEL_18;
  if ( ZwGetMUIRegistryInfo(0, &DataSize, v4) < 0
    || (int)RtlpMuiRegDeserializeRegistryInfo(v4, DataSize, &BaseAddress) < 0
    || (v1 = BaseAddress, v5 = RtlpMuiRegAddNeutralToInstalled(BaseAddress), v5 < 0) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    goto LABEL_20;
  }
  if ( *((_QWORD *)v1 + 5) && OpenGlobalizationUserSettingsKey(0x2000000u, 0LL, v6, v7, (HANDLE *)&v15) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = (HANDLE)v15;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlpMuiRegLoadRegistryInfo((__int64)v1, 4);
      NtClose(KeyHandle);
    }
    CloseGlobalizationUserSettingsKey((char *)v15);
  }
  RtlpMuiRegLoadRegistryInfo((__int64)v1, 568);
LABEL_16:
  *a1 = v1;
  return (unsigned int)v5;
}
