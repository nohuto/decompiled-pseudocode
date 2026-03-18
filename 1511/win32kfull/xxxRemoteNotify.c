/*
 * XREFs of xxxRemoteNotify @ 0x1C0111CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteNotify(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx

  v4 = a1;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
  {
    if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > W32UserProbeAddress )
      v4 = (_DWORD *)W32UserProbeAddress;
    if ( *v4 == 6 )
    {
      gbStopReadInput = 1;
    }
    else
    {
      if ( *v4 == 11 )
      {
        gdwHydraHint |= 0x4000000u;
      }
      else
      {
        if ( *v4 != 12 )
          return 0LL;
        gdwHydraHint |= 0x8000000u;
      }
      SetConnectCompletedState(1LL);
    }
    return 0LL;
  }
  return 3221225506LL;
}
