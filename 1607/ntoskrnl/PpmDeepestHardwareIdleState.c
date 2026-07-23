/*
 * XREFs of PpmDeepestHardwareIdleState @ 0x14014618C
 * Callers:
 *     PpmInstallNewIdleStates @ 0x140145C68 (PpmInstallNewIdleStates.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall PpmDeepestHardwareIdleState(__int64 a1)
{
  unsigned __int8 v1; // dl
  unsigned int v2; // eax
  unsigned __int8 *v3; // r8
  __int64 v4; // r9
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // al

  v1 = 1;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 28);
    if ( v2 )
    {
      v3 = (unsigned __int8 *)(a1 + 1040);
      v4 = v2;
      do
      {
        v5 = *v3;
        v3 += 248;
        v6 = v1;
        if ( v5 > v1 )
          v6 = v5;
        v1 = v6;
        --v4;
      }
      while ( v4 );
    }
  }
  return v1;
}
