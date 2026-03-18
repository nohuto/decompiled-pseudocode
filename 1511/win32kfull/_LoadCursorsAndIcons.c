/*
 * XREFs of _LoadCursorsAndIcons @ 0x1C01081D0
 * Callers:
 *     <none>
 * Callees:
 *     UpdateSystemCursorPath @ 0x1C0124050 (UpdateSystemCursorPath.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall LoadCursorsAndIcons(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 i; // rbx
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned __int16 *v8; // rcx

  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
  {
    v4 = 0LL;
    gdwHydraHint |= 0x4000u;
    for ( i = gpcurFirst; i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_WORD *)(i + 74) == 1 )
      {
        v7 = *(unsigned __int16 *)(i + 64) - 100;
        *(_QWORD *)(i + 64) = gasyscur[8 * v7];
        v8 = &gasyscur[8 * v7 + 4];
        if ( *(_QWORD *)v8 )
        {
          if ( *(_QWORD *)(i + 48) == i )
          {
            *(_DWORD *)(i + 76) = *(_DWORD *)(i + 140);
            *(_QWORD *)(i + 40) = *(_QWORD *)(*(_QWORD *)&gasyscur[8 * v7 + 4] + 40LL);
            *(_QWORD *)(*(_QWORD *)&gasyscur[8 * v7 + 4] + 40LL) = i;
            *(_QWORD *)(i + 48) = *(_QWORD *)&gasyscur[8 * v7 + 4];
          }
        }
        else
        {
          HMAssignmentLock(v8, i);
          UpdateSystemCursorPath(v7, 0LL);
        }
      }
      else if ( *(_WORD *)(i + 74) == 3 )
      {
        v6 = 16LL * (*(unsigned __int16 *)(i + 64) - 100);
        *(_QWORD *)(i + 64) = *(unsigned __int16 *)((char *)&gasysico + v6);
        if ( (*(_DWORD *)(i + 80) & 4) != 0 )
          HMAssignmentLock((char *)&gasysico + v6 + 8, i);
        else
          *(_QWORD *)(gpsi + 4232LL) = *(_QWORD *)i;
      }
    }
    if ( qword_1C031B908 )
      v4 = *(_QWORD *)qword_1C031B908;
    *(_QWORD *)(gpsi + 4240LL) = v4;
  }
  return 1LL;
}
