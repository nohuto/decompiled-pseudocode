/*
 * XREFs of MiMakeProtectionMask @ 0x14008E520
 * Callers:
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MmAllocateContiguousNodeMemory @ 0x140114D80 (MmAllocateContiguousNodeMemory.c)
 *     MmMapIoSpaceEx @ 0x140115984 (MmMapIoSpaceEx.c)
 *     MmProtectMdlSystemAddress @ 0x1401184E8 (MmProtectMdlSystemAddress.c)
 *     MmSetPageProtection @ 0x14013821C (MmSetPageProtection.c)
 *     MmProtectSystemCacheView @ 0x140217958 (MmProtectSystemCacheView.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     NtMapViewOfSection @ 0x1404B5D50 (NtMapViewOfSection.c)
 *     NtProtectVirtualMemory @ 0x1404B9510 (NtProtectVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x1404B9700 (MiProtectVirtualMemory.c)
 *     MiMapViewOfSection @ 0x1404BA540 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionMask(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 >= 0x800 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0xF) != 0 )
  {
    if ( (a1 & 0xF0) != 0 )
      return 0xFFFFFFFFLL;
    result = (unsigned int)MmUserProtectionToMask1[a1 & 0xF];
  }
  else
  {
    if ( !((unsigned __int8)a1 >> 4) )
      return 0xFFFFFFFFLL;
    result = (unsigned int)MmUserProtectionToMask2[(unsigned __int8)a1 >> 4];
  }
  if ( (_DWORD)result == -1 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0x700) == 0 )
    return result;
  if ( (a1 & 0x100) != 0 )
  {
    if ( (_DWORD)result == 24 || (a1 & 0x600) != 0 )
      return 0xFFFFFFFFLL;
    result = (unsigned int)result | 0x10;
  }
  if ( (a1 & 0x200) == 0 )
    goto LABEL_15;
  if ( (_DWORD)result == 24 || (a1 & 0x400) != 0 )
    return 0xFFFFFFFFLL;
  result = (unsigned int)result | 8;
LABEL_15:
  if ( (a1 & 0x400) != 0 )
  {
    if ( (_DWORD)result != 24 && (result & 2) == 0 )
      return (unsigned int)result | 0x18;
    return 0xFFFFFFFFLL;
  }
  return result;
}
