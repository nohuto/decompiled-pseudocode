/*
 * XREFs of PpmUpdateIdleContext @ 0x1406B1CE4
 * Callers:
 *     PpmUpdateIdleStates @ 0x14059A450 (PpmUpdateIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmUpdateIdleContext(unsigned int a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = 0;
  if ( a1 >= (unsigned int)KeNumberProcessors_0 )
  {
    v3 = 0LL;
  }
  else
  {
    _mm_lfence();
    v3 = KiProcessorBlock[a1];
  }
  v4 = *(_QWORD *)(v3 + 23808);
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 472) )
    {
      *(_DWORD *)(v4 + 32) = 4;
      *(_QWORD *)(v4 + 472) = *(_QWORD *)(a2 + 8);
    }
    else
    {
      return (unsigned int)-1073741431;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
