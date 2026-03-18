/*
 * XREFs of PiDevCfgConfigureSoftwareDevices @ 0x140514214
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140513FDC (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140150C60 (ZwEnumerateKey.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopCreateRegistryKeyEx @ 0x1403B9D0C (IopCreateRegistryKeyEx.c)
 *     _PnpCtxRegDeleteTree @ 0x140522444 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegCopyTree @ 0x1406927A4 (_PnpCtxRegCopyTree.c)
 */

__int64 __fastcall PiDevCfgConfigureSoftwareDevices(void *a1, void *a2)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  int v6; // eax
  HANDLE v7; // rsi
  unsigned int *PoolWithTag; // rdi
  int v9; // r14d
  int v10; // ecx
  UNICODE_STRING v11; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+B8h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+58h] BYREF

  ObjectAttributes.RootDirectory = a2;
  *(_DWORD *)&v11.Length = 1048590;
  Handle = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v11;
  v11.Buffer = L"Devices";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v4 = v3;
  if ( v3 == -1073741772 )
  {
    v4 = 0;
  }
  else if ( v3 >= 0 )
  {
    *(_DWORD *)&v11.Length = 1048590;
    v11.Buffer = L"Devices";
    v6 = IopCreateRegistryKeyEx(&Handle, a1, &v11, 0xF003Fu, 0, 0LL);
    v7 = Handle;
    v4 = v6;
    if ( v6 >= 0 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x220uLL, 0x63647050u);
      if ( PoolWithTag )
      {
        v9 = 0;
        v4 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, PoolWithTag, 0x220u, &ResultLength);
        if ( v4 < 0 )
        {
LABEL_13:
          if ( v4 == -2147483622 )
          {
            v4 = 0;
          }
          else if ( v4 == -2147483643 )
          {
            v4 = -1073741773;
          }
        }
        else
        {
          while ( 1 )
          {
            *((_WORD *)PoolWithTag + ((unsigned __int64)PoolWithTag[3] >> 1) + 8) = 0;
            PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v7, PoolWithTag + 4);
            v4 = PnpCtxRegCopyTree(
                   v10,
                   (_DWORD)KeyHandle,
                   (int)PoolWithTag + 16,
                   (_DWORD)v7,
                   (__int64)(PoolWithTag + 4));
            if ( v4 < 0 )
              break;
            v4 = ZwEnumerateKey(KeyHandle, ++v9, KeyBasicInformation, PoolWithTag, 0x220u, &ResultLength);
            if ( v4 < 0 )
              goto LABEL_13;
          }
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        v4 = -1073741670;
      }
    }
    if ( v7 )
      ZwClose(v7);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
