/*
 * XREFs of ExpOsProductCacheProviderHelper @ 0x1406ED418
 * Callers:
 *     ExpGenuinePolicyPostProcess @ 0x14051DEEC (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductContentIdCacheProvider @ 0x1406ED570 (ExpOsProductContentIdCacheProvider.c)
 *     ExpOsProductPfnCacheProvider @ 0x1406ED5A0 (ExpOsProductPfnCacheProvider.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpOsProductCacheProviderHelper(
        PUNICODE_STRING ValueName,
        _DWORD *a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *ResultLength)
{
  NTSTATUS ValueKey; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rdi
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF

  KeyHandle = 0LL;
  *ResultLength = 1;
  ValueKey = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&stru_1407228D8);
  if ( ValueKey >= 0 )
  {
    ValueKey = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, 0LL, 0, (PULONG)&ResultLength);
    if ( (int)(ValueKey + 0x80000000) < 0 || ValueKey == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)ResultLength, 0x20534C53u);
      v12 = PoolWithTag;
      if ( PoolWithTag )
      {
        ValueKey = ZwQueryValueKey(
                     KeyHandle,
                     ValueName,
                     KeyValuePartialInformation,
                     PoolWithTag,
                     (ULONG)ResultLength,
                     (PULONG)&ResultLength);
        if ( ValueKey >= 0 )
        {
          *a5 = v12[2];
          if ( a2 )
            *a2 = v12[1];
          if ( a4 >= v12[2] )
          {
            if ( a3 )
              memmove(a3, v12 + 3, (unsigned int)v12[2]);
          }
          else
          {
            ValueKey = -1073741789;
          }
        }
        ExFreePoolWithTag(v12, 0);
      }
      else
      {
        ValueKey = -1073741801;
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)ValueKey;
}
