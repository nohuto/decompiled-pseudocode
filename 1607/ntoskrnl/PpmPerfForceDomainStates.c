/*
 * XREFs of PpmPerfForceDomainStates @ 0x140131A6C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmPerfForceDomainStates()
{
  __int64 i; // r8
  __int64 v1; // r9
  __int64 v2; // rdx

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 406) )
    {
      v1 = 0LL;
      for ( *(_BYTE *)(i + 404) = 1; (unsigned int)v1 < *(_DWORD *)(i + 192); *(_BYTE *)(v2 + *(_QWORD *)(i + 200) + 88) = 1 )
      {
        v2 = 96 * v1;
        v1 = (unsigned int)(v1 + 1);
      }
    }
  }
  return 1;
}
