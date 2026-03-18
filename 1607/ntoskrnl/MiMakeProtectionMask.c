/*
 * XREFs of MiMakeProtectionMask @ 0x14002BD00
 * Callers:
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MmAllocateContiguousNodeMemory @ 0x14009AEA0 (MmAllocateContiguousNodeMemory.c)
 *     MmMapIoSpaceEx @ 0x14009B870 (MmMapIoSpaceEx.c)
 *     MmSetPageProtection @ 0x1400B23C0 (MmSetPageProtection.c)
 *     MiProtectPool @ 0x1400EA400 (MiProtectPool.c)
 *     MmProtectMdlSystemAddress @ 0x1401E44E4 (MmProtectMdlSystemAddress.c)
 *     MmProtectSystemCacheView @ 0x1401E6EC4 (MmProtectSystemCacheView.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfSection @ 0x140433010 (MiMapViewOfSection.c)
 *     MiProtectVirtualMemory @ 0x140433470 (MiProtectVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140433B80 (NtProtectVirtualMemory.c)
 *     NtMapViewOfSection @ 0x140436740 (NtMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E84C (MiCopyPagesIntoEnclave.c)
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
