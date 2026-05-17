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

__int64 __fastcall RtlpMuiRegCreateAndLoadRegistryInfo(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 Heap; // rax
  unsigned __int64 v4; // rsi
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 RegistryInfo; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+40h] [rbp-30h] BYREF
  char *v12; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+58h] [rbp-18h]
  __int128 v15; // [rsp+60h] [rbp-10h]
  unsigned int v16; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF
  char *v19; // [rsp+B8h] [rbp+48h] BYREF

  v1 = 0LL;
  v17 = 0LL;
  if ( !a1 || *a1 )
  {
    v5 = -1073741811;
    goto LABEL_16;
  }
  v16 = 0;
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v16, 0LL) < 0 )
  {
LABEL_20:
    RegistryInfo = RtlpMuiRegCreateRegistryInfo();
    v17 = RegistryInfo;
    v1 = RegistryInfo;
    if ( RegistryInfo )
    {
      v5 = RtlpMuiRegLoadRegistryInfo(RegistryInfo, 4095);
      if ( v5 >= 0 )
      {
        v5 = 0;
        *(_DWORD *)(v1 + 12) = MEMORY[0x7FFE03A4];
      }
      else
      {
        RtlpMuiRegFreeRegistryInfo(v1, 0xFFFu);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17);
        v1 = 0LL;
      }
      goto LABEL_16;
    }
LABEL_18:
    v5 = -1073741801;
    goto LABEL_16;
  }
  if ( v16 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v16);
    v1 = v17;
    v4 = Heap;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    goto LABEL_18;
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v16, v4) < 0
    || (int)RtlpMuiRegDeserializeRegistryInfo(v4, v16, &v17) < 0
    || (v1 = v17, v5 = RtlpMuiRegAddNeutralToInstalled(v17), v5 < 0) )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    goto LABEL_20;
  }
  if ( *(_QWORD *)(v1 + 40) && (int)OpenGlobalizationUserSettingsKey(0x2000000u, 0, v6, v7, (__int64)&v19) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
    Handle = 0LL;
    v12 = v19;
    v11 = 48;
    p_DestinationString = &DestinationString;
    v14 = 64;
    v15 = 0LL;
    if ( (int)NtOpenKey(&Handle, 131097LL, &v11) >= 0 )
    {
      RtlpMuiRegLoadRegistryInfo(v1, 4);
      NtClose(Handle);
    }
    CloseGlobalizationUserSettingsKey(v19);
  }
  RtlpMuiRegLoadRegistryInfo(v1, 568);
LABEL_16:
  *a1 = v1;
  return (unsigned int)v5;
}
