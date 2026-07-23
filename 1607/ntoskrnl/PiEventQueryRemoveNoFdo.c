/*
 * XREFs of PiEventQueryRemoveNoFdo @ 0x14064D234
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 *     PnpRestartDeviceNode @ 0x14062DD3C (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x14062E304 (PipIsProblemReadonly.c)
 */

__int64 __fastcall PiEventQueryRemoveNoFdo(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx

  v2 = 0;
  if ( ((a1[75] - 770) & 0xFFFFFFEF) == 0 )
  {
    if ( (a1[99] & 0x6000) != 0 && !(unsigned int)PipIsProblemReadonly((__int64)a1, a1[101]) )
      PipClearDevNodeProblem(v5);
    if ( (a1[99] & 0x6000) != 0 )
    {
      if ( (*(_BYTE *)(a2 + 136) & 2) == 0 )
        return (unsigned int)-1073741811;
    }
    else if ( (*(_DWORD *)(a2 + 136) & 2) != 0 )
    {
      PipSetDevNodeProblem((__int64)a1, *(_DWORD *)(a2 + 16), 0);
    }
    else
    {
      PnpRestartDeviceNode((__int64)a1);
    }
  }
  return v2;
}
