/*
 * XREFs of PiDevCfgConfigureSoftwareDevices @ 0x140635EF8
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x1406359A8 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14015A830 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopCreateRegistryKeyEx @ 0x140539738 (IopCreateRegistryKeyEx.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegCopyTree @ 0x1406D7158 (_PnpCtxRegCopyTree.c)
 */

__int64 __fastcall PiDevCfgConfigureSoftwareDevices(void *a1, void *a2)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  int v5; // eax
  HANDLE v6; // rsi
  unsigned int *PoolWithTag; // rdi
  int v8; // r14d
  int v9; // ecx
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
    v5 = IopCreateRegistryKeyEx(&Handle, a1, &v11, 0xF003Fu, 0, 0LL);
    v6 = Handle;
    v4 = v5;
    if ( v5 >= 0 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x220uLL, 0x63647050u);
      if ( PoolWithTag )
      {
        v8 = 0;
        v4 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, PoolWithTag, 0x220u, &ResultLength);
        if ( v4 < 0 )
        {
LABEL_10:
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
            PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v6, (__int64)(PoolWithTag + 4));
            v4 = PnpCtxRegCopyTree(v9, (_DWORD)KeyHandle, (int)PoolWithTag + 16, (_DWORD)v6, (__int64)(PoolWithTag + 4));
            if ( v4 < 0 )
              break;
            v4 = ZwEnumerateKey(KeyHandle, ++v8, KeyBasicInformation, PoolWithTag, 0x220u, &ResultLength);
            if ( v4 < 0 )
              goto LABEL_10;
          }
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        v4 = -1073741670;
      }
    }
    if ( v6 )
      ZwClose(v6);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
