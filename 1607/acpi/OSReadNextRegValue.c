/*
 * XREFs of OSReadNextRegValue @ 0x1C009E948
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C005B750 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C00554D8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall OSReadNextRegValue(HANDLE KeyHandle, ULONG Index, void *a3, _DWORD *a4)
{
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  ULONG v10; // eax
  unsigned __int16 *PoolWithTag; // rax
  int v12; // edx
  unsigned __int16 *v13; // r14
  NTSTATUS v14; // eax
  int v15; // edx
  int MaximumLength; // esi
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
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          v8 = ZwEnumerateValueKey(KeyHandle, Index, KeyValueBasicInformation, PoolWithTag, ResultLength, &ResultLength);
          if ( v8 >= 0 )
          {
            SourceString.Buffer = v13 + 6;
            SourceString.Length = v13[4];
            SourceString.MaximumLength = v13[4] + 2;
            v14 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
            v8 = v14;
            if ( v14 >= 0 )
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
            else
            {
              LOBYTE(v15) = 2;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v15,
                21,
                27,
                (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
                v14);
            }
          }
          ExFreePoolWithTag(v13, 0);
        }
        else
        {
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            21,
            26,
            (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
            ResultLength);
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
