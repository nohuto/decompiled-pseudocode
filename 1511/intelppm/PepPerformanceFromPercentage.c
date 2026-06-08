/*
 * XREFs of PepPerformanceFromPercentage @ 0x1C000693C
 * Callers:
 *     PepPerfControlHandler @ 0x1C0006850 (PepPerfControlHandler.c)
 *     PepPerfSelectionHandler @ 0x1C00068E0 (PepPerfSelectionHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PepPerformanceFromPercentage(unsigned int *a1, int a2)
{
  unsigned int *v2; // rax

  v2 = *(unsigned int **)a1;
  if ( a2 == *(_DWORD *)(*(_QWORD *)a1 + 20LL) )
  {
    return *v2;
  }
  else if ( a2 == 100 )
  {
    return v2[1];
  }
  else if ( a2 == a1[6] )
  {
    return a1[5];
  }
  else if ( a2 == v2[6] )
  {
    return v2[2];
  }
  else if ( a2 == v2[7] )
  {
    return v2[3];
  }
  else
  {
    return a2 * v2[1] / 0x64;
  }
}
