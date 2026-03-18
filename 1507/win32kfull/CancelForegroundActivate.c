/*
 * XREFs of CancelForegroundActivate @ 0x1C00F75A4
 * Callers:
 *     WakeSomeone @ 0x1C0090208 (WakeSomeone.c)
 * Callees:
 *     <none>
 */

void CancelForegroundActivate()
{
  _DWORD *v0; // rcx
  __int64 v1; // rbx

  v0 = (_DWORD *)gdwPUDFlags;
  if ( (gdwPUDFlags & 0x8000000) != 0 )
  {
    v1 = gppiStarting;
    if ( gppiStarting )
    {
      do
      {
        if ( !PsGetProcessDebugPort(*(_QWORD *)v1) )
          *(_DWORD *)(v1 + 12) &= ~0x100u;
        v1 = *(_QWORD *)(v1 + 344);
      }
      while ( v1 );
      v0 = (_DWORD *)gdwPUDFlags;
    }
    *v0 &= ~0x8000000u;
  }
}
