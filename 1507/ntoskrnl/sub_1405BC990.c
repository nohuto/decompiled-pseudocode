/*
 * XREFs of sub_1405BC990 @ 0x1405BC990
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     ExReArmFastCache @ 0x1406EBBEC (ExReArmFastCache.c)
 *     sub_1406EC140 @ 0x1406EC140 (sub_1406EC140.c)
 *     sub_1406ED5D0 @ 0x1406ED5D0 (sub_1406ED5D0.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwLockRegistryKey @ 0x140180F50 (ZwLockRegistryKey.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406ECC64 (ExpCreateRestrictedFastCacheRegistryKey.c)
 */

__int64 __fastcall sub_1405BC990(UNICODE_STRING *String1, PVOID *a2)
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
