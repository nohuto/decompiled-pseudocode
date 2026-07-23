/*
 * XREFs of PnpProcessAssignResourcesWorker @ 0x1403F10F4
 * Callers:
 *     PnpProcessAssignResources @ 0x1403F0F18 (PnpProcessAssignResources.c)
 * Callees:
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 */

__int64 __fastcall PnpProcessAssignResourcesWorker(__int64 *a1, _DWORD *a2)
{
  __int64 *i; // rbx

  for ( i = a1; ; i = (__int64 *)i[1] )
  {
LABEL_2:
    if ( *a2
      && ((*((_DWORD *)i + 99) & 0x2000) != 0 && *((_DWORD *)i + 101) == 12
       || (*((_DWORD *)i + 99) & 0x2000) != 0 && (*((_DWORD *)i + 101) == 33 || *((_DWORD *)i + 101) == 36)) )
    {
      PipClearDevNodeProblem(i);
    }
    if ( (*((_DWORD *)i + 99) & 0x6000) == 0 && *((_DWORD *)i + 75) == 771 )
      *(_QWORD *)&a2[2 * a2[1]++ + 2] = i[4];
    if ( !i[1] )
      break;
  }
  while ( i != a1 )
  {
    if ( *i )
    {
      i = (__int64 *)*i;
      goto LABEL_2;
    }
    if ( i[2] )
      i = (__int64 *)i[2];
  }
  return 0LL;
}
