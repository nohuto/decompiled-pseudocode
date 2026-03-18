/*
 * XREFs of CoalesceInputSourceMouseMoves @ 0x1C0066AD8
 * Callers:
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     PostMoveToPwnd @ 0x1C0065C2C (PostMoveToPwnd.c)
 *     IsEqualInputSource @ 0x1C00F3F04 (IsEqualInputSource.c)
 */

void __fastcall CoalesceInputSourceMouseMoves(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( a2 )
  {
    if ( (a1[83] & 0x20) == 0 )
    {
LABEL_3:
      a1[91] = *a2;
      a1[92] = a2[1];
      return;
    }
    if ( !(unsigned int)IsEqualInputSource(a1 + 91) )
    {
      if ( (*(_DWORD *)(v5 + 4) & 0xFFFFFFFB) != 0 )
      {
        if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFFB) != 0 )
        {
          if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) & 1) == 0 )
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
