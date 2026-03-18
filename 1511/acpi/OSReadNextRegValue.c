/*
 * XREFs of OSReadNextRegValue @ 0x1C007D400
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C0043FB8 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     memmove @ 0x1C0024E80 (memmove.c)
 */

__int64 __fastcall OSReadNextRegValue(HANDLE KeyHandle, ULONG Index, void *a3, _DWORD *a4)
{
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  ULONG v10; // eax
  unsigned __int16 *PoolWithTag; // rsi
  int MaximumLength; // r14d
  struct _STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp+30h] BYREF

  if ( !KeyHandle || a4 && *a4 && !a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = ZwEnumerateValueKey(KeyHandle, Index, KeyValueBasicInformation, 0LL, 0, &ResultLength);
    v8 = v9;
    if ( v9 )
    {
      if ( v9 == -2147483643 || v9 == -1073741789 )
      {
        v10 = ResultLength;
        if ( ResultLength <= 0x10 )
          v10 = 16;
        ResultLength = v10;
        PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v10, 0x4D706341u);
        if ( PoolWithTag )
        {
          v8 = ZwEnumerateValueKey(KeyHandle, Index, KeyValueBasicInformation, PoolWithTag, ResultLength, &ResultLength);
          if ( v8 >= 0 )
          {
            SourceString.Buffer = PoolWithTag + 6;
            SourceString.Length = PoolWithTag[4];
            SourceString.MaximumLength = PoolWithTag[4] + 2;
            v8 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
            if ( v8 >= 0 )
            {
              if ( a4 )
              {
                MaximumLength = DestinationString.MaximumLength;
                if ( *a4 < (unsigned int)DestinationString.MaximumLength )
                  v8 = -1073741789;
                else
                  memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
                *a4 = MaximumLength;
              }
              RtlFreeAnsiString(&DestinationString);
            }
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v8;
}
