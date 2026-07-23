/*
 * XREFs of MiProtectionToCacheAttribute @ 0x1400E538C
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140022CA4 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MiAllocateContiguousMemory @ 0x14009A740 (MiAllocateContiguousMemory.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400BD440 (MiBuildMdlForMappedFileFault.c)
 *     MiInitializePfn @ 0x1400E5120 (MiInitializePfn.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146DB8 (MiInsertViewOfPhysicalSection.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiGet64KPage @ 0x1401FB5F0 (MiGet64KPage.c)
 *     MiFindLargePageMemory @ 0x1406627C8 (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x140662AD4 (MiGetFastLargePage.c)
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
