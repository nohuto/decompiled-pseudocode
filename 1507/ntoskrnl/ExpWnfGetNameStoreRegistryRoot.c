/*
 * XREFs of ExpWnfGetNameStoreRegistryRoot @ 0x1404FE6FC
 * Callers:
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140409ACC (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfLookupPermanentName @ 0x1404FE56C (ExpWnfLookupPermanentName.c)
 *     ExpWnfDeletePermanentName @ 0x14053F894 (ExpWnfDeletePermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x14055A4A8 (ExpWnfRegisterPermanentName.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1405BF084 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 */

NTSTATUS __fastcall ExpWnfGetNameStoreRegistryRoot(int a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  NTSTATUS result; // eax
  bool v7; // zf
  bool v8; // cf
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+10h] BYREF

  v3 = 5LL * a1;
  v4 = (__int64 *)ExpWnfNameStoreDescriptors[5 * a1 + 3];
  v5 = *v4;
  *a2 = *v4;
  if ( v5 )
    return 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  v7 = HIDWORD(ExpWnfNameStoreDescriptors[v3 + 4]) == 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&ExpWnfNameStoreDescriptors[v3 + 1];
  v8 = LODWORD(ExpWnfNameStoreDescriptors[v3 + 4]) != 0;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, v8 ? 131097 : 983103, &ObjectAttributes, 0, 0LL, !v7, 0LL);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)ExpWnfNameStoreDescriptors[v3 + 3],
           (signed __int64)KeyHandle,
           0LL) )
    {
      ZwClose(KeyHandle);
    }
    *a2 = *(_QWORD *)ExpWnfNameStoreDescriptors[v3 + 3];
    return 0;
  }
  return result;
}
