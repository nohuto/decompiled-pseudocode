/*
 * XREFs of PopFindNextSystemPowerState @ 0x14066A3C8
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9
  int v4; // eax

  v3 = 1;
  dword_140303480 = dword_140303484;
  if ( dword_140303484 == 1 )
  {
    v4 = dword_14030346C;
    if ( dword_14030346C < 0 && *a3 )
    {
      *a3 = 0;
      dword_14030346C = v4 & 0xEFFFFFFF;
      dword_140303480 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140303480 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
