/*
 * XREFs of xxxRemoteNotify @ 0x1C0133230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteNotify(_DWORD *a1)
{
  _DWORD *v1; // rbx

  v1 = a1;
  if ( PsGetCurrentProcess(a1) == gpepCSRSS )
  {
    if ( v1 + 1 < v1 || (unsigned __int64)(v1 + 1) > W32UserProbeAddress )
      v1 = (_DWORD *)W32UserProbeAddress;
    if ( *v1 == 6 )
    {
      gbStopReadInput = 1;
    }
    else
    {
      if ( *v1 == 11 )
      {
        gdwHydraHint |= 0x4000000u;
      }
      else
      {
        if ( *v1 != 12 )
          return 0LL;
        gdwHydraHint |= 0x8000000u;
      }
      SetConnectCompletedState(1LL);
    }
    return 0LL;
  }
  return 3221225506LL;
}
