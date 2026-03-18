/*
 * XREFs of WindowStationOpenProcedure @ 0x1401EF320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowStationOpenProcedure(__int64 a1, __int64 a2)
{
  int *v3; // rdi
  int v4; // ebx
  _QWORD *i; // rcx

  v3 = *(int **)(a1 + 32);
  if ( *(_WORD *)(a1 + 40) )
  {
    if ( !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)(a1 + 24)) )
    {
      v4 = *v3;
      if ( (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 24)) != v4 )
        return 3221225506LL;
    }
  }
  if ( (v3[8] & 0x100) == 0 )
    return 0LL;
  for ( i = (_QWORD *)(W32GetUserSessionState(a1, a2) + 63512); *i; i = (_QWORD *)(*i + 8LL) )
    ;
  LockObjectAssignment(i, v3);
  v3[8] &= ~0x100u;
  return 0x40000000LL;
}
