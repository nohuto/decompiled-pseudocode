/*
 * XREFs of MapUnmapPhysMem @ 0x1C001FD98
 * Callers:
 *     OpRegion @ 0x1C001FC60 (OpRegion.c)
 * Callees:
 *     MapPhysMem @ 0x1C001FDF8 (MapPhysMem.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall MapUnmapPhysMem(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  int v6; // esi

  v4 = 0;
  v6 = (int)a2;
  if ( a3 )
  {
    if ( KeGetCurrentIrql() )
    {
      v4 = -1072431098;
      LogError(3222536198LL);
      PrintDebugMessage(77, KeGetCurrentIrql(), 0, 0, 0LL);
    }
    else if ( a4 )
    {
      v4 = MapPhysMem((ULONG_PTR)a2, a3);
      if ( v4 < 0 )
      {
        LogError(3222536204LL);
        PrintDebugMessage(102, v6, a3, v4, 0LL);
        return 0;
      }
    }
    else
    {
      MmUnmapIoSpace(a2, a3);
    }
  }
  else
  {
    v4 = -1072431089;
    LogError(3222536207LL);
    PrintDebugMessage(216, 0, 0, 0, 0LL);
  }
  return (unsigned int)v4;
}
