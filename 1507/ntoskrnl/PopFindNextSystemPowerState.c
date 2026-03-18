/*
 * XREFs of PopFindNextSystemPowerState @ 0x1406B066C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9
  int v4; // eax

  v3 = 1;
  dword_14032E660 = dword_14032E664;
  if ( dword_14032E664 == 1 )
  {
    v4 = dword_14032E64C;
    if ( dword_14032E64C < 0 && *a3 )
    {
      *a3 = 0;
      dword_14032E64C = v4 & 0xEFFFFFFF;
      dword_14032E660 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_14032E660 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
