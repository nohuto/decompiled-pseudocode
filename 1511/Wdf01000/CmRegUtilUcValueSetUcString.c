/*
 * XREFs of CmRegUtilUcValueSetUcString @ 0x1C00BE3EC
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00BDD84 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C00BE538 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     memmove @ 0x1C0036900 (memmove.c)
 */

__int64 __fastcall CmRegUtilUcValueSetUcString(void *KeyHandle, _UNICODE_STRING *ValueName, _UNICODE_STRING *ValueData)
{
  __int64 Length; // r8
  unsigned int v7; // ebx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *Buffer; // rdx
  _UNICODE_STRING tempString; // [rsp+30h] [rbp-18h] BYREF

  Length = ValueData->Length;
  if ( (unsigned __int64)(ValueData->MaximumLength - (int)Length) < 2 )
  {
    tempString.Length = 0;
    tempString.MaximumLength = Length + 2;
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length + 2, 0x63557050u);
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
