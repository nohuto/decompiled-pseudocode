/*
 * XREFs of ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x180009468
 * Callers:
 *     ?AcquireTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x1800093E8 (-AcquireTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 *     ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x180071E0C (-ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVADServer::QueryState(CVADServer *this, int *a2, int *a3, int *a4)
{
  int v4; // eax

  if ( a2 )
    *a2 = *((unsigned __int8 *)this + 204);
  if ( a3 )
  {
    if ( *((_DWORD *)this + 68) || (v4 = 1, (*((_BYTE *)this + 276) & 1) == 0) )
      v4 = 0;
    *a3 = v4;
  }
  if ( a4 )
    *a4 = *((_DWORD *)this + 70);
  return 0LL;
}
