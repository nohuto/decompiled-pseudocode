/*
 * XREFs of SmpComputeDesiredPfSizeForCrashDump @ 0x14000FDB0
 * Callers:
 *     SmpInitializeManagedPagefileSupport @ 0x1400101A8 (SmpInitializeManagedPagefileSupport.c)
 * Callees:
 *     SmpQueryPagefileTooSmallForDump @ 0x140011010 (SmpQueryPagefileTooSmallForDump.c)
 */

unsigned __int64 SmpComputeDesiredPfSizeForCrashDump()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx

  v0 = 0LL;
  SmpTryHardForCrashDump = 0;
  if ( SmpUseDedicatedDumpFile != 1 )
  {
    if ( SmpDumpType != 7 )
    {
      if ( SmpDumpType == 2 )
        goto LABEL_18;
      if ( SmpDumpType != 1 )
        return v0;
      if ( SmpUseFilterPagesDumpFile )
      {
LABEL_18:
        v0 = SmpMemorySize;
      }
      else
      {
        v0 = 0x40000000LL;
        if ( SmpMemorySize
           + 0x10000000
           + ((unsigned int)~(dword_140025A88 - 1) & ((unsigned int)(dword_140025A88 - 1)
                                                    + 8256LL
                                                    + ((unsigned __int64)(unsigned int)(dword_140025A94 + 7) >> 3))) > 0x40000000 )
          v0 = SmpMemorySize
             + 0x10000000
             + ((unsigned int)~(dword_140025A88 - 1) & ((unsigned int)(dword_140025A88 - 1)
                                                      + 8256LL
                                                      + ((unsigned __int64)(unsigned int)(dword_140025A94 + 7) >> 3)));
      }
      SmpTryHardForCrashDump = 1;
      return v0;
    }
    v1 = 0x800000000LL;
    if ( (unsigned __int64)SmpMemorySize >= 0x100000000LL )
    {
      v2 = 0x800000000LL;
      if ( (unsigned __int64)(SmpMemorySize - 0x100000000LL) >> 3 < 0x800000000LL )
        v2 = (unsigned __int64)(SmpMemorySize - 0x100000000LL) >> 3;
      v0 = ((unsigned __int64)(SmpMemorySize - 0x100000000LL) >> 6) + 715827882 + v2;
    }
    else
    {
      v0 = SmpMemorySize / 6uLL;
    }
    if ( v0 < 0x10000000 )
      v0 = 0x10000000LL;
    if ( (unsigned __int64)(MEMORY[0x7FFE0014] - SmpQueryPagefileTooSmallForDump()) < 0x1600A3910000LL )
    {
      if ( (unsigned __int64)SmpMemorySize < 0x800000000LL )
        v1 = SmpMemorySize;
      if ( v0 < v1 )
        return v1;
    }
  }
  return v0;
}
