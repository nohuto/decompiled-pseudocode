/*
 * XREFs of ?ReadConfigValue@CraneCarryRecognizer@@UEAA_NW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x180038630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CraneCarryRecognizer::ReadConfigValue(__int64 a1, int a2, __int64 a3)
{
  char v3; // r10
  int v4; // eax
  __int16 v5; // ax

  v3 = 1;
  switch ( a2 )
  {
    case 30:
      *(_WORD *)(a3 + 4) = *(_WORD *)(a1 + 44);
      goto LABEL_14;
    case 31:
      v5 = *(_WORD *)(a1 + 46);
      goto LABEL_11;
    case 32:
      v5 = *(_WORD *)(a1 + 48);
LABEL_11:
      *(_WORD *)(a3 + 4) = v5;
      goto LABEL_14;
    case 33:
      v4 = *(_DWORD *)(a1 + 28);
      goto LABEL_8;
    case 34:
      v4 = *(unsigned __int16 *)(a1 + 50);
LABEL_8:
      *(_DWORD *)(a3 + 4) = v4;
LABEL_14:
      *(_DWORD *)a3 = a2;
      return v3;
  }
  return 0;
}
