/*
 * XREFs of sub_14054598C @ 0x14054598C
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     ExReArmFastCache @ 0x14066869C (ExReArmFastCache.c)
 *     sub_140668B98 @ 0x140668B98 (sub_140668B98.c)
 *     sub_140669FD4 @ 0x140669FD4 (sub_140669FD4.c)
 *     sub_14076255C @ 0x14076255C (sub_14076255C.c)
 *     sub_140785A2C @ 0x140785A2C (sub_140785A2C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwLockRegistryKey @ 0x1401525E0 (ZwLockRegistryKey.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406696D0 (ExpCreateRestrictedFastCacheRegistryKey.c)
 */

__int64 __fastcall sub_14054598C(UNICODE_STRING *String1, PVOID *a2)
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
