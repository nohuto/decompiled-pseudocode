/*
 * XREFs of CmRegUtilUcValueSetUcString @ 0x1C00D7DF0
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00D7844 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C00D7F48 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     memmove @ 0x1C0040140 (memmove.c)
 */

__int64 __fastcall CmRegUtilUcValueSetUcString(void *KeyHandle, _UNICODE_STRING *ValueName, _UNICODE_STRING *ValueData)
{
  __int64 Length; // r8
  unsigned int v7; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *Buffer; // rdx
  _UNICODE_STRING tempString; // [rsp+30h] [rbp-18h] BYREF

  Length = ValueData->Length;
  if ( ValueData->MaximumLength - (unsigned int)Length < 2 )
  {
    tempString.Length = 0;
    tempString.MaximumLength = Length + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Length + 2, 0x63557050u);
    tempString.Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      Buffer = ValueData->Buffer;
      tempString.Length = ValueData->Length;
      memmove(PoolWithTag, Buffer, tempString.Length);
      tempString.Buffer[(unsigned __int64)tempString.Length >> 1] = 0;
      v7 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, tempString.Buffer, tempString.Length + 2);
      RtlFreeUnicodeString(&tempString);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    ValueData->Buffer[(unsigned __int64)(unsigned int)Length >> 1] = 0;
    return (unsigned int)ZwSetValueKey(KeyHandle, ValueName, 0, 1u, ValueData->Buffer, ValueData->Length + 2);
  }
  return v7;
}
