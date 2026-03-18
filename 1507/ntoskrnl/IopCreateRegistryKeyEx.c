/*
 * XREFs of IopCreateRegistryKeyEx @ 0x1404E7078
 * Callers:
 *     PipOpenServiceEnumKeys @ 0x1404E6D00 (PipOpenServiceEnumKeys.c)
 *     NtDisableLastKnownGood @ 0x14058E968 (NtDisableLastKnownGood.c)
 *     PnpBuildCmResourceList @ 0x14059CAA8 (PnpBuildCmResourceList.c)
 *     IopWriteResourceList @ 0x14059DDDC (IopWriteResourceList.c)
 *     IoSetSystemPartition @ 0x140674330 (IoSetSystemPartition.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x14067A4E0 (PipHardwareConfigTriggerRespecialize.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140683E18 (PiDevCfgConfigureSoftwareDevices.c)
 *     IopStoreSystemPartitionInformation @ 0x1407B634C (IopStoreSystemPartitionInformation.c)
 *     PipHardwareConfigInit @ 0x1407B6A40 (PipHardwareConfigInit.c)
 *     PipInitComputerIds @ 0x1407B6E78 (PipInitComputerIds.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 *     IoReportHalResourceUsage @ 0x1407D57B0 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x1407D5960 (IopInitializeResourceMap.c)
 *     PiInitFirmwareResources @ 0x1407E8CF8 (PiInitFirmwareResources.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 */

__int64 __fastcall IopCreateRegistryKeyEx(
        _QWORD *a1,
        void *a2,
        UNICODE_STRING *a3,
        ACCESS_MASK a4,
        ULONG CreateOptions,
        ULONG *a6)
{
  _QWORD *v6; // rdi
  __int64 v9; // r15
  NTSTATUS v10; // r14d
  wchar_t *Buffer; // rdi
  unsigned int v13; // r12d
  __int64 Length; // rsi
  char v15; // r13
  wchar_t *v16; // rsi
  __int64 v17; // rcx
  wchar_t *v18; // rbx
  void *v19; // rdx
  HANDLE Handle; // [rsp+40h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-41h] BYREF
  _WORD v22[4]; // [rsp+50h] [rbp-39h] BYREF
  wchar_t *v23; // [rsp+58h] [rbp-31h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v26; // [rsp+E8h] [rbp+5Fh]
  ULONG Disposition; // [rsp+F0h] [rbp+67h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+F8h] [rbp+6Fh]

  DesiredAccess = a4;
  *a1 = 0LL;
  v6 = a1;
  v26 = 0;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = a3;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  LODWORD(v9) = 1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwCreateKey(&KeyHandle, a4, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  if ( v10 != -1073741772 )
    goto LABEL_2;
  if ( a2 )
  {
    Buffer = a3->Buffer;
    v13 = 0;
    Length = a3->Length;
    v15 = 1;
    Handle = 0LL;
    v16 = (wchar_t *)((char *)Buffer + Length);
    KeyHandle = a2;
    while ( 1 )
    {
      if ( v13 > 1 )
        ZwClose(*(&Handle + v26));
      v17 = (unsigned int)v9;
      v26 = v9;
      v9 = ((_BYTE)v9 - 1) & 1;
      v18 = Buffer;
      for ( *(&Handle + v9) = 0LL; v18 < v16; ++v18 )
      {
        if ( *v18 == 92 )
          break;
      }
      if ( (_DWORD)v18 == (_DWORD)Buffer )
      {
        v10 = -1073741811;
      }
      else
      {
        v19 = *(&Handle + v17);
        v22[1] = (_WORD)v18 - (_WORD)Buffer;
        v22[0] = (_WORD)v18 - (_WORD)Buffer;
        ObjectAttributes.RootDirectory = v19;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v22;
        v23 = Buffer;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v10 = ZwCreateKey(&Handle + v9, DesiredAccess, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
        if ( v10 < 0 )
          goto LABEL_21;
        ++v13;
        if ( v18 != v16 )
        {
          Buffer = v18 + 1;
          if ( v18 + 1 != v16 )
            goto LABEL_20;
        }
      }
      v15 = 0;
LABEL_20:
      if ( !v15 )
      {
LABEL_21:
        if ( v13 > 1 )
          ZwClose(*(&Handle + v26));
        v6 = a1;
LABEL_2:
        if ( v10 >= 0 )
        {
          *v6 = *(&Handle + (unsigned int)v9);
          if ( a6 )
            *a6 = Disposition;
        }
        return (unsigned int)v10;
      }
    }
  }
  return (unsigned int)v10;
}
