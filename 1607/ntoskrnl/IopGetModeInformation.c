/*
 * XREFs of IopGetModeInformation @ 0x1404B1D18
 * Callers:
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 * Callees:
 *     <none>
 */

int __fastcall IopGetModeInformation(__int64 a1)
{
  int v1; // edx
  int result; // eax

  v1 = *(_DWORD *)(a1 + 80);
  result = 0;
  if ( (v1 & 0x10) != 0 )
    result = 2;
  if ( (v1 & 0x20) != 0 )
    result |= 4u;
  if ( (v1 & 8) != 0 )
    result |= 8u;
  if ( (v1 & 2) != 0 )
  {
    if ( (v1 & 4) != 0 )
      result |= 0x10u;
    else
      result |= 0x20u;
  }
  if ( (v1 & 0x10000) != 0 )
    return result | 0x1000;
  return result;
}
