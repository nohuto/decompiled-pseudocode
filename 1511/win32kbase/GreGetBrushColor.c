/*
 * XREFs of GreGetBrushColor @ 0x1C00B3030
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreGetBrushColor(__int64 a1, __int64 a2, int a3)
{
  unsigned __int16 v3; // di
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // eax

  v3 = a1;
  v4 = -1;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v6 = *((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * v3);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 24);
    if ( v7 == 6 || v7 == 7 )
      v4 = *(_DWORD *)(v6 + 84);
  }
  GreReleaseHmgrSemaphore(3LL * v3, v6, v5);
  return v4;
}
