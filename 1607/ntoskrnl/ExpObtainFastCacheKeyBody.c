/*
 * XREFs of ExpObtainFastCacheKeyBody @ 0x14057AB9C
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExReArmFastCache @ 0x1406AE194 (ExReArmFastCache.c)
 *     sub_1406AE54C @ 0x1406AE54C (sub_1406AE54C.c)
 *     sub_1406AF7F8 @ 0x1406AF7F8 (sub_1406AF7F8.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwLockRegistryKey @ 0x14015C1F0 (ZwLockRegistryKey.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AEE8C (ExpCreateRestrictedFastCacheRegistryKey.c)
 */

__int64 __fastcall ExpObtainFastCacheKeyBody(UNICODE_STRING *String1, PVOID *a2)
{
  NTSTATUS RestrictedFastCacheRegistryKey; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+20h] BYREF
  PVOID Object; // [rsp+90h] [rbp+30h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = String1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RestrictedFastCacheRegistryKey = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( RestrictedFastCacheRegistryKey == -1073741772 )
    RestrictedFastCacheRegistryKey = ExpCreateRestrictedFastCacheRegistryKey(String1);
  if ( RestrictedFastCacheRegistryKey >= 0 )
  {
    RestrictedFastCacheRegistryKey = ObReferenceObjectByHandle(
                                       KeyHandle,
                                       0x20006u,
                                       (POBJECT_TYPE)CmKeyObjectType,
                                       0,
                                       &Object,
                                       0LL);
    if ( RestrictedFastCacheRegistryKey >= 0 )
    {
      RestrictedFastCacheRegistryKey = ZwLockRegistryKey(KeyHandle);
      if ( RestrictedFastCacheRegistryKey < 0 )
        ObfDereferenceObject(Object);
      else
        *a2 = Object;
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)RestrictedFastCacheRegistryKey;
}
