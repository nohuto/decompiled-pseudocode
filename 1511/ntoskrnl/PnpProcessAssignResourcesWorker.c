/*
 * XREFs of PnpProcessAssignResourcesWorker @ 0x1404B195C
 * Callers:
 *     PnpProcessAssignResources @ 0x1404B1780 (PnpProcessAssignResources.c)
 * Callees:
 *     PipClearDevNodeProblem @ 0x1404A0DFC (PipClearDevNodeProblem.c)
 */

__int64 __fastcall PnpProcessAssignResourcesWorker(__int64 a1, _DWORD *a2)
{
  __int64 i; // rbx

  for ( i = a1; ; i = *(_QWORD *)(i + 8) )
  {
LABEL_2:
    if ( *a2
      && ((*(_DWORD *)(i + 396) & 0x2000) != 0 && *(_DWORD *)(i + 404) == 12
       || (*(_DWORD *)(i + 396) & 0x2000) != 0 && (*(_DWORD *)(i + 404) == 33 || *(_DWORD *)(i + 404) == 36)) )
    {
      PipClearDevNodeProblem(i);
    }
    if ( (*(_DWORD *)(i + 396) & 0x6000) == 0 && *(_DWORD *)(i + 300) == 771 )
      *(_QWORD *)&a2[2 * a2[1]++ + 2] = *(_QWORD *)(i + 32);
    if ( !*(_QWORD *)(i + 8) )
      break;
  }
  while ( i != a1 )
  {
    if ( *(_QWORD *)i )
    {
      i = *(_QWORD *)i;
      goto LABEL_2;
    }
    if ( *(_QWORD *)(i + 16) )
      i = *(_QWORD *)(i + 16);
  }
  return 0LL;
}
