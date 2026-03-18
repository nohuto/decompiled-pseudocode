/*
 * XREFs of _LoadCursorsAndIcons @ 0x1C0135F40
 * Callers:
 *     <none>
 * Callees:
 *     UpdateSystemCursorPath @ 0x1C01369CC (UpdateSystemCursorPath.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall LoadCursorsAndIcons(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  __int64 v4; // rcx
  unsigned int v5; // esi
  unsigned __int16 *v6; // rcx

  if ( PsGetCurrentProcess(a1, a2) == gpepCSRSS )
  {
    v2 = 0LL;
    gdwHydraHint |= 0x4000u;
    for ( i = gpcurFirst; i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_WORD *)(i + 74) == 1 )
      {
        v5 = *(unsigned __int16 *)(i + 64) - 100;
        *(_QWORD *)(i + 64) = gasyscur[8 * v5];
        v6 = &gasyscur[8 * v5 + 4];
        if ( *(_QWORD *)v6 )
        {
          if ( *(_QWORD *)(i + 48) == i )
          {
            *(_DWORD *)(i + 76) = *(_DWORD *)(i + 140);
            *(_QWORD *)(i + 40) = *(_QWORD *)(*(_QWORD *)&gasyscur[8 * v5 + 4] + 40LL);
            *(_QWORD *)(*(_QWORD *)&gasyscur[8 * v5 + 4] + 40LL) = i;
            *(_QWORD *)(i + 48) = *(_QWORD *)&gasyscur[8 * v5 + 4];
          }
        }
        else
        {
          HMAssignmentLock(v6, i);
          UpdateSystemCursorPath(v5, 0LL);
        }
      }
      else if ( *(_WORD *)(i + 74) == 3 )
      {
        v4 = 16LL * (*(unsigned __int16 *)(i + 64) - 100);
        *(_QWORD *)(i + 64) = *(unsigned __int16 *)((char *)&gasysico + v4);
        if ( (*(_DWORD *)(i + 80) & 4) != 0 )
          HMAssignmentLock((char *)&gasysico + v4 + 8, i);
        else
          *(_QWORD *)(gpsi + 4232LL) = *(_QWORD *)i;
      }
    }
    if ( qword_1C031EA98 )
      v2 = *(_QWORD *)qword_1C031EA98;
    *(_QWORD *)(gpsi + 4240LL) = v2;
  }
  return 1LL;
}
