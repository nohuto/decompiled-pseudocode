/*
 * XREFs of RtlpArchContextFlagFromMachine @ 0x140531A14
 * Callers:
 *     PspWow64InitThread @ 0x140530C38 (PspWow64InitThread.c)
 *     PspWow64SetupCpuArea @ 0x140530E54 (PspWow64SetupCpuArea.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1405315B0 (RtlpWow64SanitizeContextFlags.c)
 *     RtlWoW64GetCpuAreaInfo @ 0x140531984 (RtlWoW64GetCpuAreaInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpArchContextFlagFromMachine(unsigned __int16 a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  switch ( a1 )
  {
    case 0x14Cu:
      return 0x10000;
    case 0x1C4u:
      return 0x200000;
    case 0x8664u:
      return 0x100000;
    case 0xAA64u:
      return 0x400000;
  }
  return v1;
}
