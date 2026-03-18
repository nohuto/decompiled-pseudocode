/*
 * XREFs of PopFindNextSystemPowerState @ 0x140632160
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9
  int v4; // eax

  v3 = 1;
  dword_1402DE0A0 = dword_1402DE0A4;
  if ( dword_1402DE0A4 == 1 )
  {
    v4 = dword_1402DE08C;
    if ( dword_1402DE08C < 0 && *a3 )
    {
      *a3 = 0;
      dword_1402DE08C = v4 & 0xEFFFFFFF;
      dword_1402DE0A0 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_1402DE0A0 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
