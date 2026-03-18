/*
 * XREFs of OSOpenNextSubkey @ 0x1C007D27C
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C0043FB8 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     OSOpenHandle @ 0x1C006592C (OSOpenHandle.c)
 */

__int64 __fastcall OSOpenNextSubkey(HANDLE KeyHandle, ULONG Index, void *a3, _DWORD *a4, void **a5)
{
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  ULONG v11; // eax
  unsigned __int16 *PoolWithTag; // rsi
  int MaximumLength; // r15d
  struct _STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp+30h] BYREF

  if ( !KeyHandle || a4 && *a4 && !a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, 0LL, 0, &ResultLength);
    v9 = v10;
    if ( v10 )
    {
      if ( v10 == -2147483643 || v10 == -1073741789 )
      {
        v11 = ResultLength;
        if ( ResultLength <= 0x18 )
          v11 = 24;
        ResultLength = v11;
        PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v11, 0x4D706341u);
        if ( PoolWithTag )
        {
          v9 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, PoolWithTag, ResultLength, &ResultLength);
          if ( v9 >= 0 )
          {
            SourceString.Buffer = PoolWithTag + 8;
            SourceString.Length = PoolWithTag[6];
            SourceString.MaximumLength = PoolWithTag[6] + 2;
            v9 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
            if ( v9 >= 0 )
            {
              if ( a4 )
              {
                MaximumLength = DestinationString.MaximumLength;
                if ( *a4 < (unsigned int)DestinationString.MaximumLength )
                  v9 = -1073741789;
                else
                  memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
                *a4 = MaximumLength;
              }
              if ( v9 >= 0 && a5 )
                v9 = OSOpenHandle(DestinationString.Buffer, KeyHandle, a5);
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
  return (unsigned int)v9;
}
