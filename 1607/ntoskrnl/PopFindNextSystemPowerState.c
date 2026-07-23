/*
 * XREFs of PopFindNextSystemPowerState @ 0x14066A4AC
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
  dword_1403033C0 = dword_1403033C4;
  if ( dword_1403033C4 == 1 )
  {
    v4 = dword_1403033AC;
    if ( dword_1403033AC < 0 && *a3 )
    {
      *a3 = 0;
      dword_1403033AC = v4 & 0xEFFFFFFF;
      dword_1403033C0 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_1403033C0 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
