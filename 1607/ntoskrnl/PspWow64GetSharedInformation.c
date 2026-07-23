/*
 * XREFs of PspWow64GetSharedInformation @ 0x1404FE07C
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspWow64InitThread @ 0x1404FDE08 (PspWow64InitThread.c)
 *     PsWow64IsMachineSupported @ 0x1404FE060 (PsWow64IsMachineSupported.c)
 *     CmpSetVersionData @ 0x14055DEE8 (CmpSetVersionData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspWow64GetSharedInformation(__int16 a1, int a2)
{
  switch ( a1 )
  {
    case 332:
      return (unsigned int)PsWow64SharedInformation[a2];
    case 452:
      return (unsigned int)PsWowArmSharedInformation[a2];
    case 14948:
      return (unsigned int)PsWow64SharedInformation[a2];
  }
  return 0LL;
}
