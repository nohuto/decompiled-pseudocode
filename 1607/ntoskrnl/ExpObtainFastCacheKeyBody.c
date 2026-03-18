/*
 * XREFs of ExpObtainFastCacheKeyBody @ 0x14057A65C
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExReArmFastCache @ 0x1406AE05C (ExReArmFastCache.c)
 *     sub_1406AE414 @ 0x1406AE414 (sub_1406AE414.c)
 *     sub_1406AF6C0 @ 0x1406AF6C0 (sub_1406AF6C0.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     ZwLockRegistryKey @ 0x14015BC80 (ZwLockRegistryKey.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AED54 (ExpCreateRestrictedFastCacheRegistryKey.c)
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
