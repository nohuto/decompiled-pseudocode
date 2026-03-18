/*
 * XREFs of RtlpArchContextFlagFromMachine @ 0x140518890
 * Callers:
 *     RtlWow64GetCpuAreaInfo @ 0x140518800 (RtlWow64GetCpuAreaInfo.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140518E30 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64SetupCpuArea @ 0x14051A59C (PspWow64SetupCpuArea.c)
 *     PspWow64InitThread @ 0x14051AA18 (PspWow64InitThread.c)
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
