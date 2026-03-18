/*
 * XREFs of MUIInitializeResourceLock @ 0x1404ABA74
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1404AAE1C (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404AB19C (NtMapCMFModule.c)
 *     NtFlushInstallUILanguage @ 0x14054A1B0 (NtFlushInstallUILanguage.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MUIInitializeResourceLock(volatile signed __int64 *a1)
{
  unsigned int v2; // ebx
  struct _ERESOURCE *PoolWithTag; // rax
  struct _ERESOURCE *v5; // rdi

  if ( a1 )
  {
    if ( *a1 )
    {
      return 0;
    }
    else
    {
      PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6D756950u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        v2 = ExInitializeResourceLite(PoolWithTag);
        if ( (v2 & 0xC0000000) != 0xC0000000 )
        {
          if ( _InterlockedCompareExchange64(a1, (signed __int64)v5, 0LL) )
            ExDeleteResourceLite(v5);
          else
            v5 = 0LL;
          v2 = 0;
        }
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
