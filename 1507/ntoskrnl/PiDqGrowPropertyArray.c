/*
 * XREFs of PiDqGrowPropertyArray @ 0x1405577CC
 * Callers:
 *     PiDqActionDataGetChangedProperties @ 0x1405575E8 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140681894 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140681B20 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqGrowPropertyArray(const void **a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  PVOID PoolWithTag; // rax
  PVOID v7; // rsi

  v4 = a2;
  v5 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48LL * a3, 0x58706E50u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( *a1 )
    {
      memmove(PoolWithTag, *a1, 48 * v4);
      ExFreePoolWithTag((PVOID)*a1, 0x58706E50u);
    }
    *a1 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
