/*
 * XREFs of CmpAddToHiveFileList @ 0x1404EBEEC
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryObject @ 0x14017F1F0 (ZwQueryObject.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpAddToHiveFileList(__int64 a1)
{
  _QWORD *PoolWithTag; // rdi
  NTSTATUS v3; // ebx
  unsigned __int64 v4; // rax
  __int16 *v5; // rcx
  ULONG DataSize; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int16 v10; // [rsp+B8h] [rbp+38h] BYREF
  ULONG ReturnLength; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+48h] BYREF

  v10 = 0;
  if ( !CmpHiveFileListHandle )
  {
    RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\system\\currentcontrolset\\control\\hivelist");
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    if ( v3 < 0 )
      return (unsigned int)v3;
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&CmpHiveFileListHandle,
           (signed __int64)KeyHandle,
           0LL) )
    {
      ZwClose(KeyHandle);
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x202uLL, 0x62714D43u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  if ( (*(_DWORD *)(a1 + 144) & 1) != 0 )
  {
    v5 = &v10;
    DataSize = 2;
    goto LABEL_6;
  }
  v3 = ZwQueryObject(*(HANDLE *)(a1 + 2664), ObjectNameInformation, PoolWithTag, 0x200u, &ReturnLength);
  v4 = ReturnLength - 16;
  ReturnLength -= 16;
  if ( v3 >= 0 )
  {
    v5 = (__int16 *)PoolWithTag[1];
    v5[v4 >> 1] = 0;
    DataSize = ReturnLength + 2;
LABEL_6:
    ReturnLength = DataSize;
    v3 = ZwSetValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(a1 + 3024), 0, 1u, v5, DataSize);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v3;
}
