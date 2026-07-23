/*
 * XREFs of PpmPerfSelectDomainStates @ 0x1400D25E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmPerfSelectDomainStates()
{
  __int64 i; // r8
  unsigned int v1; // ecx
  unsigned int v2; // edx
  __int64 v3; // r9
  unsigned int *v4; // rax

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v1 = *(_DWORD *)(i + 192);
    v2 = 1;
    if ( v1 )
    {
      v3 = v1;
      v4 = (unsigned int *)(*(_QWORD *)(i + 200) + 56LL);
      do
      {
        if ( !*((_BYTE *)v4 - 40) && *v4 > v2 )
          v2 = *v4;
        v4 += 24;
        --v3;
      }
      while ( v3 );
    }
    *(_DWORD *)(i + 352) = v2;
    if ( v2 != *(_DWORD *)(i + 344) )
      *(_BYTE *)(i + 406) = 1;
  }
  return 1;
}
