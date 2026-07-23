/*
 * XREFs of PiDevCfgPushCopyKeyEntry @ 0x1401CEED8
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140636F28 (PiDevCfgCopyDeviceKeys.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgPushCopyKeyEntry(HANDLE *a1, void *a2, void *a3, int a4)
{
  NTSTATUS v4; // edi
  HANDLE *PoolWithTag; // rax
  HANDLE *v10; // rbx
  HANDLE **v11; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF

  v4 = 0;
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x63647050u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *((_DWORD *)PoolWithTag + 8) = a4;
  if ( a4 >= 0 )
  {
    PoolWithTag[2] = a2;
    PoolWithTag[3] = a3;
    goto LABEL_9;
  }
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)PiDevCfgEmptyString;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(PoolWithTag + 2, 0x20019u, &ObjectAttributes);
  if ( v4 < 0 )
    goto LABEL_12;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)PiDevCfgEmptyString;
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(v10 + 3, 0xF003Fu, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    *((_DWORD *)v10 + 8) |= 0x40000000u;
LABEL_9:
    v11 = (HANDLE **)a1[1];
    if ( *v11 != a1 )
      __fastfail(3u);
    *v10 = a1;
    v10[1] = v11;
    *v11 = v10;
    a1[1] = v10;
    v10 = 0LL;
    goto LABEL_12;
  }
  ZwClose(v10[2]);
LABEL_12:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v4;
}
