/*
 * XREFs of FreeThreadsWindowHooks @ 0x1C00FEB20
 * Callers:
 *     <none>
 * Callees:
 *     FreeHook @ 0x1C00A4550 (FreeHook.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C00A45B0 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 */

void FreeThreadsWindowHooks()
{
  __int64 i; // rsi
  __int64 v1; // rbx
  __int64 v2; // rbp

  if ( gptiCurrent && *(_QWORD *)(gptiCurrent + 408LL) )
  {
    HMAssignmentUnlock(gptiCurrent + 608LL);
    for ( i = -1LL; i <= 14; ++i )
    {
      v1 = *(_QWORD *)(gptiCurrent + 8 * i + 800);
      if ( !v1 )
      {
        v1 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8 * i + 40);
        if ( !v1 )
          continue;
      }
      do
      {
        v2 = *(_QWORD *)(v1 + 40);
        if ( !v2 && (*(_DWORD *)(v1 + 64) & 1) == 0 )
          v2 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8 * i + 40);
        if ( (*(_DWORD *)(v1 + 64) & 1) == 0 )
        {
          UnlinkHook((struct tagHOOK *)v1);
          *(_DWORD *)(v1 + 64) |= 0x80u;
          *(_QWORD *)(v1 + 40) = 0LL;
        }
        if ( *(_QWORD *)(v1 + 16) == gptiCurrent )
          FreeHook((struct tagHOOK *)v1);
        v1 = v2;
      }
      while ( v2 );
    }
    *(_DWORD *)(gptiCurrent + 600LL) = 0;
  }
}
