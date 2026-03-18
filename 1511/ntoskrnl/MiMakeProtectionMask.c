/*
 * XREFs of MiMakeProtectionMask @ 0x140062870
 * Callers:
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MmAllocateContiguousNodeMemory @ 0x1400BD454 (MmAllocateContiguousNodeMemory.c)
 *     MmMapIoSpaceEx @ 0x1400C0C7C (MmMapIoSpaceEx.c)
 *     MmProtectMdlSystemAddress @ 0x1400E5CC4 (MmProtectMdlSystemAddress.c)
 *     MmSetPageProtection @ 0x1400EBB14 (MmSetPageProtection.c)
 *     MmProtectSystemCacheView @ 0x1401D57E4 (MmProtectSystemCacheView.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     NtProtectVirtualMemory @ 0x140418D90 (NtProtectVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 *     MiMapViewOfSection @ 0x140419680 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     NtMapViewOfSection @ 0x140493120 (NtMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
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
