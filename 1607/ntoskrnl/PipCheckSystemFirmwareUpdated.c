/*
 * XREFs of PipCheckSystemFirmwareUpdated @ 0x14079A898
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140550B8C (IopOpenRegistryKeyEx.c)
 */

void __fastcall PipCheckSystemFirmwareUpdated(_BYTE *a1)
{
  ULONG *v1; // rbx
  void *v3; // rdi
  NTSTATUS RegistryValue; // eax
  ULONG v5; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+30h] BYREF
  ULONG *v8; // [rsp+78h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+40h] BYREF
  _DWORD *v10; // [rsp+88h] [rbp+48h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  v1 = 0LL;
  *a1 = 0;
  v3 = 0LL;
  v8 = 0LL;
  v10 = 0LL;
  if ( IopOpenRegistryKeyEx(&KeyHandle, 0LL, &CmRegistryMachineHardwareDescriptionSystemName, 0xF003Fu) >= 0 )
  {
    if ( IopGetRegistryValue(KeyHandle, L"SystemBiosVersion", 0, &v8) < 0
      || (*(_DWORD *)&ValueName.Length = 6291550,
          ValueName.Buffer = L"\\Registry\\Machine\\System\\HardwareConfig\\Current",
          IopOpenRegistryKeyEx(&Handle, 0LL, &ValueName, 0xF003Fu) < 0) )
    {
      v1 = v8;
    }
    else
    {
      RegistryValue = IopGetRegistryValue(Handle, L"SystemBiosVersion", 0, &v10);
      v3 = v10;
      v1 = v8;
      if ( RegistryValue == -1073741772
        || RegistryValue >= 0
        && (v8[1] != v10[1]
         || (v5 = v8[3], v5 != v10[3])
         || memcmp((char *)v8 + v8[2], (char *)v10 + (unsigned int)v10[2], v5)) )
      {
        *(_DWORD *)&ValueName.Length = 2359330;
        ValueName.Buffer = (wchar_t *)L"SystemBiosVersion";
        if ( ZwSetValueKey(Handle, &ValueName, 0, v1[1], (char *)v1 + v1[2], v1[3]) >= 0 )
          *a1 = 1;
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
