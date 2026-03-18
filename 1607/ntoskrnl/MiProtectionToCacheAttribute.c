/*
 * XREFs of MiProtectionToCacheAttribute @ 0x1400E74EC
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140023124 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MiAllocateContiguousMemory @ 0x14009AF40 (MiAllocateContiguousMemory.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400BF5B0 (MiBuildMdlForMappedFileFault.c)
 *     MiInitializePfn @ 0x1400E7280 (MiInitializePfn.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146848 (MiInsertViewOfPhysicalSection.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     MiGet64KPage @ 0x1401FB7C4 (MiGet64KPage.c)
 *     MiFindLargePageMemory @ 0x1406626E4 (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x1406629F0 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiProtectionToCacheAttribute(unsigned int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 != 31 )
  {
    if ( a1 >> 3 == 3 && (a1 & 7) != 0 )
    {
      return (unsigned int)dword_1403A92D0;
    }
    else if ( a1 >> 3 == 1 )
    {
      return (unsigned int)MiPlatformCacheAttributes[0];
    }
  }
  return result;
}
