/*
 * XREFs of RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180048F5C
 * Callers:
 *     RtlpInitializeLangRegistryInfo @ 0x180048F30 (RtlpInitializeLangRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800490C0 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800491B0 (RtlpMuiRegFreeRegistryInfo.c)
 *     CloseGlobalizationUserSettingsKey @ 0x180049B04 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180049B2C (OpenGlobalizationUserSettingsKey.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x180049EE8 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegDeserializeRegistryInfo @ 0x18004A2A4 (_RtlpMuiRegDeserializeRegistryInfo.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x180094770 (ZwGetMUIRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1800E6F30 (RtlpMuiRegCreateRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegCreateAndLoadRegistryInfo(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 Heap; // rax
  unsigned __int64 v4; // rsi
  int v5; // edi
  int v6; // r8d
  int v7; // r9d
  __int64 RegistryInfo; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+58h] [rbp-18h]
  __int128 v15; // [rsp+60h] [rbp-10h]
  unsigned int v16; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+48h] BYREF

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
      v5 = RtlpMuiRegLoadRegistryInfo(RegistryInfo, 4095LL);
      if ( v5 >= 0 )
      {
        v5 = 0;
        *(_DWORD *)(v1 + 12) = MEMORY[0x7FFE03A4];
      }
      else
      {
        RtlpMuiRegFreeRegistryInfo(v1, 4095LL);
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
  if ( *(_QWORD *)(v1 + 40) && (int)OpenGlobalizationUserSettingsKey(0x2000000, 0, v6, v7, (__int64)&v19) >= 0 )
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
      RtlpMuiRegLoadRegistryInfo(v1, 4LL);
      NtClose(Handle);
    }
    CloseGlobalizationUserSettingsKey(v19);
  }
  RtlpMuiRegLoadRegistryInfo(v1, 568LL);
LABEL_16:
  *a1 = v1;
  return (unsigned int)v5;
}
