/*
 * XREFs of CmRegUtilUcValueGetFullBuffer @ 0x1C00BE2D4
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00BDBD4 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmRegUtilUcValueGetFullBuffer(
        void *KeyHandle,
        _UNICODE_STRING *ValueName,
        unsigned int Information,
        unsigned int a4,
        _KEY_VALUE_FULL_INFORMATION **ValueName_0)
{
  _KEY_VALUE_FULL_INFORMATION **v6; // rsi
  ULONG Length; // edi
  _KEY_VALUE_FULL_INFORMATION *PoolWithTag; // rbx
  NTSTATUS v11; // edi
  _KEY_VALUE_FULL_INFORMATION *v12; // rax
  unsigned int keyValueLength; // [rsp+68h] [rbp+20h] BYREF

  keyValueLength = a4;
  v6 = ValueName_0;
  Length = (ValueName->Length + 31) & 0xFFFFFFF8;
  *ValueName_0 = 0LL;
  PoolWithTag = (_KEY_VALUE_FULL_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x62527050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v11 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, PoolWithTag, Length, &keyValueLength);
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v11 != -2147483643 && v11 != -1073741789 )
      return (unsigned int)v11;
    v12 = (_KEY_VALUE_FULL_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, keyValueLength, 0x62527050u);
    PoolWithTag = v12;
    if ( !v12 )
      return 3221225626LL;
    v11 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, v12, keyValueLength, &keyValueLength);
    if ( v11 < 0 )
    {
LABEL_11:
      ExFreePoolWithTag(PoolWithTag, 0);
      return (unsigned int)v11;
    }
  }
  if ( PoolWithTag->Type != 3 )
  {
    v11 = -1073741788;
    goto LABEL_11;
  }
  *v6 = PoolWithTag;
  return 0LL;
}
