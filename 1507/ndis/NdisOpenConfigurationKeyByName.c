/*
 * XREFs of NdisOpenConfigurationKeyByName @ 0x1C00A5D70
 * Callers:
 *     ndisOidPostIovNicSwitchParameters @ 0x1C0065D20 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00ABC88 (ndisIovCreateDefaultNicSwitch.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x1C00B12E0 (NdisOpenConfigurationKeyByIndex.c)
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisOpenProtocolSubkey @ 0x1C00CDC14 (ndisOpenProtocolSubkey.c)
 */

void __stdcall NdisOpenConfigurationKeyByName(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING SubKeyName,
        PNDIS_HANDLE SubKeyHandle)
{
  HANDLE *v8; // rdi
  char *PoolWithTag; // rax
  char *v10; // rbx
  NTSTATUS v11; // eax
  int v12; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-48h] BYREF

  v8 = 0LL;
  if ( (unsigned __int8)byte_1C008530F >= 4u )
    WPP_SF_q(0xDu, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, (__int64)ConfigurationHandle);
  if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0
    || *((_QWORD *)ConfigurationHandle + 4)
    || (v12 = ndisOpenProtocolSubkey(ConfigurationHandle), *Status = v12, v12 >= 0) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, SubKeyName->Length + 176LL, 0x6863444Eu);
    v8 = (HANDLE *)PoolWithTag;
    *Status = PoolWithTag == 0LL ? 0xC000009A : 0;
    if ( (PoolWithTag == 0LL ? 0xC000009A : 0) != 0 )
    {
      *SubKeyHandle = 0LL;
    }
    else
    {
      v10 = PoolWithTag + 40;
      *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 40;
      PoolWithTag[40] = 10;
      *(_BYTE *)(*((_QWORD *)PoolWithTag + 2) + 1LL) = 1;
      *(_WORD *)(*((_QWORD *)PoolWithTag + 2) + 2LL) = 40;
      memmove(PoolWithTag + 176, SubKeyName->Buffer, SubKeyName->Length);
      *((_DWORD *)v10 + 14) = 0;
      *((_QWORD *)v10 + 10) = 0LL;
      *((_DWORD *)v10 + 22) = 0;
      *((_QWORD *)v10 + 12) = 0LL;
      *((_QWORD *)v10 + 3) = &ndisSaveParameters;
      *((_DWORD *)v10 + 8) = 20;
      *((_QWORD *)v10 + 1) = *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 8LL);
      ObjectAttributes.RootDirectory = (HANDLE)*((_QWORD *)ConfigurationHandle + 4);
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = SubKeyName;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwOpenKey(v8 + 4, 0xBu, &ObjectAttributes);
      *Status = v11;
      if ( v11 >= 0 )
      {
        v8[3] = 0LL;
        v8[1] = (HANDLE)*((_QWORD *)ConfigurationHandle + 1);
        *SubKeyHandle = v8;
      }
    }
  }
  if ( *Status < 0 && v8 )
    ExFreePoolWithTag(v8, 0);
  if ( (unsigned __int8)byte_1C008530F >= 4u )
    WPP_SF_q(0xEu, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, (__int64)ConfigurationHandle);
}
