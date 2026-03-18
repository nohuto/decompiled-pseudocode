/*
 * XREFs of CoalesceInputSourceMouseMoves @ 0x1C005873C
 * Callers:
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PostMoveToPwnd @ 0x1C0056F40 (PostMoveToPwnd.c)
 *     IsEqualInputSource @ 0x1C0112E64 (IsEqualInputSource.c)
 */

void __fastcall CoalesceInputSourceMouseMoves(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( a2 )
  {
    if ( (a1[85] & 0x20) == 0 )
    {
LABEL_3:
      a1[93] = *a2;
      a1[94] = a2[1];
      return;
    }
    if ( !(unsigned int)IsEqualInputSource(a1 + 93) )
    {
      if ( (*(_DWORD *)(v5 + 4) & 0xFFFFFFFB) != 0 )
      {
        if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFFB) != 0 )
        {
          if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v6, v7) + 440) & 1) == 0 )
            PostMoveToPwnd((__int64)a1, 0LL, 0);
          goto LABEL_3;
        }
      }
      else if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFFB) != 0 )
      {
        goto LABEL_3;
      }
    }
  }
}
