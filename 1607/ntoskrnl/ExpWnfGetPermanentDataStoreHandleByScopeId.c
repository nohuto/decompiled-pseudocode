/*
 * XREFs of ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x140580124
 * Callers:
 *     ExpWnfGetPermanentDataStoreHandle @ 0x1404D274C (ExpWnfGetPermanentDataStoreHandle.c)
 *     ExpWnfEnumeratePermanentDataStores @ 0x1406BA49C (ExpWnfEnumeratePermanentDataStores.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1403F52A0 (ExpWnfGetNameStoreRegistryRoot.c)
 */

NTSTATUS __fastcall ExpWnfGetPermanentDataStoreHandleByScopeId(
        int a1,
        void *a2,
        __int64 a3,
        int a4,
        int a5,
        PHANDLE KeyHandle)
{
  int v6; // ebx
  NTSTATUS result; // eax
  NTSTATUS v8; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-38h] BYREF
  void *v11; // [rsp+98h] [rbp+10h] BYREF

  v11 = a2;
  if ( (a1 & 0xFFFFFFFB) != 0 )
    return a5 != 0 ? -1073741822 : -1073741772;
  v6 = 0;
  if ( a4 )
    return a5 != 0 ? -1073741822 : -1073741772;
  result = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&v11);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Data");
    ObjectAttributes.RootDirectory = v11;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v8 < 0 )
      return v8;
    return v6;
  }
  return result;
}
