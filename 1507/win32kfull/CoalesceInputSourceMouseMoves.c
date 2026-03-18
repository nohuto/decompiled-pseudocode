/*
 * XREFs of CoalesceInputSourceMouseMoves @ 0x1C0090AE8
 * Callers:
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     PostMoveToPwnd @ 0x1C008BBEC (PostMoveToPwnd.c)
 *     IsEqualInputSource @ 0x1C00EE90C (IsEqualInputSource.c)
 */

void __fastcall CoalesceInputSourceMouseMoves(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( a2 )
  {
    if ( (a1[83] & 0x20) == 0 )
    {
LABEL_3:
      a1[91] = *a2;
      a1[92] = a2[1];
      return;
    }
    if ( !(unsigned int)IsEqualInputSource(a1 + 91, a2, a3) )
    {
      if ( (*(_DWORD *)(v6 + 4) & 0xFFFFFFFB) != 0 )
      {
        if ( (*(_DWORD *)(v5 + 4) & 0xFFFFFFFB) != 0 )
        {
          if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) & 1) == 0 )
            PostMoveToPwnd((__int64)a1, 0LL, 0);
          goto LABEL_3;
        }
      }
      else if ( (*(_DWORD *)(v5 + 4) & 0xFFFFFFFB) != 0 )
      {
        goto LABEL_3;
      }
    }
  }
}
