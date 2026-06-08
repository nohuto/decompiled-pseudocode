/*
 * XREFs of PepPerformanceFromPercentage @ 0x1C00076FC
 * Callers:
 *     PepPerfControlHandler @ 0x1C0007610 (PepPerfControlHandler.c)
 *     PepPerfSelectionHandler @ 0x1C00076A0 (PepPerfSelectionHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PepPerformanceFromPercentage(unsigned int *a1, int a2)
{
  unsigned int *v2; // rax

  v2 = *(unsigned int **)a1;
  if ( a2 == *(_DWORD *)(*(_QWORD *)a1 + 28LL) )
  {
    return v2[2];
  }
  else if ( a2 == 100 )
  {
    return v2[3];
  }
  else if ( a2 == a1[6] )
  {
    return a1[5];
  }
  else if ( a2 == v2[8] )
  {
    return v2[4];
  }
  else if ( a2 == v2[9] )
  {
    return v2[5];
  }
  else
  {
    return a2 * v2[3] / 0x64;
  }
}
