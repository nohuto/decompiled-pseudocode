/*
 * XREFs of PpmPerfApplyDomainStates @ 0x1400D3180
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyDomainState @ 0x1400D1F60 (PpmPerfApplyDomainState.c)
 *     KeIsSubsetAffinityEx @ 0x1401D3D04 (KeIsSubsetAffinityEx.c)
 */

char PpmPerfApplyDomainStates()
{
  __int64 v0; // rbx
  __int64 i; // rbx
  __int64 j; // rbx

  if ( PpmPerfArtificialDomainEnabled )
  {
    v0 = PpmPerfDomainHead;
    if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
    {
      while ( !*(_BYTE *)(v0 + 406) || (unsigned int)KeIsSubsetAffinityEx(v0 + 24, &PpmPerfNewCoreParkingMask) )
      {
        v0 = *(_QWORD *)v0;
        if ( (__int64 *)v0 == &PpmPerfDomainHead )
          goto LABEL_11;
      }
      for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
      {
        if ( !(unsigned int)KeIsSubsetAffinityEx(i + 24, &PpmPerfNewCoreParkingMask) )
          *(_BYTE *)(i + 406) = 1;
      }
    }
  }
LABEL_11:
  for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
  {
    if ( *(_BYTE *)(j + 406) )
    {
      if ( PpmPerfApplyDomainState(j) )
        *(_BYTE *)(j + 407) = 1;
      *(_BYTE *)(j + 406) = 0;
    }
  }
  return 1;
}
