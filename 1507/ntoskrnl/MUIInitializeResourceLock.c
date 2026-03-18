/*
 * XREFs of MUIInitializeResourceLock @ 0x14053B410
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x14053A748 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x14053AB00 (NtMapCMFModule.c)
 *     NtFlushInstallUILanguage @ 0x1405C1454 (NtFlushInstallUILanguage.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
