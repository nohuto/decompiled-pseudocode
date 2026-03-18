/*
 * XREFs of IopGetModeInformation @ 0x14053A6FC
 * Callers:
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetModeInformation(__int64 a1)
{
  int v1; // r8d
  unsigned int v2; // edx

  v1 = *(_DWORD *)(a1 + 80);
  v2 = 0;
  if ( (v1 & 0x10) != 0 )
    v2 = 2;
  if ( (v1 & 0x20) != 0 )
    v2 |= 4u;
  if ( (v1 & 8) != 0 )
    v2 |= 8u;
  if ( (v1 & 2) != 0 )
  {
    if ( (v1 & 4) != 0 )
      v2 |= 0x10u;
    else
      v2 |= 0x20u;
  }
  if ( (v1 & 0x10000) != 0 )
    v2 |= 0x1000u;
  return v2;
}
