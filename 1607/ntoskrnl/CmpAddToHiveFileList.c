/*
 * XREFs of CmpAddToHiveFileList @ 0x1404CD0D8
 * Callers:
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1400B0B88 (CmpAllocateTransientPoolWithTag.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryObject @ 0x14015A3F0 (ZwQueryObject.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpAddToHiveFileList(HANDLE a1)
{
  HANDLE v1; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rdi
  NTSTATUS v3; // ebx
  unsigned __int64 v4; // rax
  __int16 *Luid; // rcx
  ULONG DataSize; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int16 v10; // [rsp+B8h] [rbp+38h] BYREF
  ULONG ReturnLength; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+48h] BYREF

  v1 = a1;
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
    a1 = KeyHandle;
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&CmpHiveFileListHandle,
           (signed __int64)KeyHandle,
           0LL) )
    {
      ZwClose(KeyHandle);
    }
  }
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag((__int64)a1, 0x202uLL, 0x62714D43u);
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741801;
  if ( (*((_DWORD *)v1 + 36) & 1) != 0 )
  {
    Luid = &v10;
    DataSize = 2;
    goto LABEL_6;
  }
  v3 = ZwQueryObject(*((HANDLE *)v1 + 333), ObjectNameInformation, TransientPoolWithTag, 0x200u, &ReturnLength);
  v4 = ReturnLength - 16;
  ReturnLength -= 16;
  if ( v3 >= 0 )
  {
    Luid = (__int16 *)TransientPoolWithTag->Privilege[0].Luid;
    Luid[v4 >> 1] = 0;
    DataSize = ReturnLength + 2;
LABEL_6:
    ReturnLength = DataSize;
    v3 = ZwSetValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)v1 + 189, 0, 1u, Luid, DataSize);
  }
  MiDeleteSubsection(TransientPoolWithTag);
  return (unsigned int)v3;
}
