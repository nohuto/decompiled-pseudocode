/*
 * XREFs of NdisOpenConfigurationKeyByIndex @ 0x1C009F500
 * Callers:
 *     ndisIfInitialize @ 0x1C0102000 (ndisIfInitialize.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00A93E0 (NdisOpenConfigurationKeyByName.c)
 *     ndisOpenProtocolSubkey @ 0x1C00CC908 (ndisOpenProtocolSubkey.c)
 */

void __stdcall NdisOpenConfigurationKeyByIndex(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        ULONG Index,
        PNDIS_STRING KeyName,
        PNDIS_HANDLE KeyHandle)
{
  PVOID *v9; // r15
  void *v10; // r12
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v12; // rsi
  NTSTATUS v13; // eax
  unsigned __int16 v14; // ax
  int v15; // eax
  UNICODE_STRING SubKeyName; // [rsp+30h] [rbp-10h] BYREF
  ULONG Length; // [rsp+78h] [rbp+38h] BYREF

  SubKeyName.Length = 0;
  *(_QWORD *)&SubKeyName.MaximumLength = 0LL;
  *(_DWORD *)((char *)&SubKeyName.Buffer + 2) = 0;
  HIWORD(SubKeyName.Buffer) = 0;
  if ( (unsigned __int8)byte_1C00895CF >= 4u )
    WPP_SF_q(0xFu, &WPP_88e16e7e343236ed4c0ce3da79f3a552_Traceguids, (__int64)ConfigurationHandle);
  v9 = KeyHandle;
  *KeyHandle = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0
    || *((_QWORD *)ConfigurationHandle + 4)
    || (v15 = ndisOpenProtocolSubkey(ConfigurationHandle), *Status = v15, v15 >= 0) )
  {
    v10 = (void *)*((_QWORD *)ConfigurationHandle + 4);
    Length = 280;
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x118uLL, 0x2020444Eu);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      v13 = ZwEnumerateKey(v10, Index, KeyBasicInformation, PoolWithTag, Length, &Length);
      *Status = v13;
      if ( v13 >= 0 )
      {
        SubKeyName.MaximumLength = v12[6];
        SubKeyName.Length = SubKeyName.MaximumLength;
        SubKeyName.Buffer = v12 + 8;
        NdisOpenConfigurationKeyByName(Status, ConfigurationHandle, &SubKeyName, v9);
        if ( !*Status )
        {
          v14 = SubKeyName.Length;
          KeyName->MaximumLength = SubKeyName.Length;
          KeyName->Length = v14;
          KeyName->Buffer = (wchar_t *)((char *)*v9 + 176);
        }
      }
      ExFreePoolWithTag(v12, 0);
    }
    else
    {
      *Status = -1073741670;
    }
  }
  if ( (unsigned __int8)byte_1C00895CF >= 4u )
    WPP_SF_q(0x10u, &WPP_88e16e7e343236ed4c0ce3da79f3a552_Traceguids, (__int64)ConfigurationHandle);
}
