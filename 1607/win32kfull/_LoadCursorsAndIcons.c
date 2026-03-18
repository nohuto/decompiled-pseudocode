/*
 * XREFs of _LoadCursorsAndIcons @ 0x1C008EE50
 * Callers:
 *     <none>
 * Callees:
 *     UpdateSystemCursorPath @ 0x1C00901D4 (UpdateSystemCursorPath.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall LoadCursorsAndIcons(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 v3; // rcx
  unsigned int v4; // esi
  unsigned __int16 *v5; // rcx

  if ( PsGetCurrentProcess(a1) == gpepCSRSS )
  {
    v1 = 0LL;
    gdwHydraHint |= 0x4000u;
    for ( i = gpcurFirst; i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_WORD *)(i + 74) == 1 )
      {
        v4 = *(unsigned __int16 *)(i + 64) - 100;
        *(_QWORD *)(i + 64) = gasyscur[8 * v4];
        v5 = &gasyscur[8 * v4 + 4];
        if ( *(_QWORD *)v5 )
        {
          if ( *(_QWORD *)(i + 48) == i )
          {
            *(_DWORD *)(i + 76) = *(_DWORD *)(i + 140);
            *(_QWORD *)(i + 40) = *(_QWORD *)(*(_QWORD *)&gasyscur[8 * v4 + 4] + 40LL);
            *(_QWORD *)(*(_QWORD *)&gasyscur[8 * v4 + 4] + 40LL) = i;
            *(_QWORD *)(i + 48) = *(_QWORD *)&gasyscur[8 * v4 + 4];
          }
        }
        else
        {
          HMAssignmentLock(v5, i);
          UpdateSystemCursorPath(v4, 0LL);
        }
      }
      else if ( *(_WORD *)(i + 74) == 3 )
      {
        v3 = 16LL * (*(unsigned __int16 *)(i + 64) - 100);
        *(_QWORD *)(i + 64) = *(unsigned __int16 *)((char *)&gasysico + v3);
        if ( (*(_DWORD *)(i + 80) & 4) != 0 )
          HMAssignmentLock((char *)&gasysico + v3 + 8, i);
        else
          *(_QWORD *)(gpsi + 5624LL) = *(_QWORD *)i;
      }
    }
    if ( qword_1C0321A08 )
      v1 = *(_QWORD *)qword_1C0321A08;
    *(_QWORD *)(gpsi + 5632LL) = v1;
  }
  return 1LL;
}
