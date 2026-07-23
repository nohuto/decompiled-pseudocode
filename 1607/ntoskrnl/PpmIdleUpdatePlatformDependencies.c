/*
 * XREFs of PpmIdleUpdatePlatformDependencies @ 0x1406764B8
 * Callers:
 *     PpmInstallPlatformIdleStates @ 0x14066B1AC (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleUpdatePlatformDependencies(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  bool i; // r11
  unsigned int v5; // r10d
  __int64 v6; // rcx

  result = ((unsigned int)HvlpFlags >> 1) & 1;
  if ( (((unsigned int)HvlpFlags >> 1) & 1) != 0 && (HvlEnlightenments & 0x400) != 0
    || !(_DWORD)result && HvlHypervisorConnected )
  {
    v3 = 0;
    for ( i = (HvlEnlightenments & 0x200) != 0; v3 < *(_DWORD *)(a1 + 8); ++v3 )
    {
      result = v3;
      v5 = 0;
      for ( *(_BYTE *)(a1 + 48LL * v3 + 61) = i; v5 < *(_DWORD *)(a1 + 48LL * v3 + 72); *(_BYTE *)(result + 8 * v6 + 4) = i )
      {
        result = *(_QWORD *)(a1 + 48LL * v3 + 96);
        v6 = v5++;
      }
    }
  }
  return result;
}
