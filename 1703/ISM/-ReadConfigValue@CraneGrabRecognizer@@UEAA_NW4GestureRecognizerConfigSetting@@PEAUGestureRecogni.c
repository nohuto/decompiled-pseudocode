/*
 * XREFs of ?ReadConfigValue@CraneGrabRecognizer@@UEAA_NW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x180039C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CraneGrabRecognizer::ReadConfigValue(_WORD *a1, int a2, __int64 a3)
{
  char v3; // r10
  __int16 v4; // ax

  v3 = 1;
  switch ( a2 )
  {
    case 27:
      *(_WORD *)(a3 + 4) = a1[26];
      goto LABEL_9;
    case 28:
      v4 = a1[27];
      goto LABEL_6;
    case 29:
      v4 = a1[28];
LABEL_6:
      *(_WORD *)(a3 + 4) = v4;
LABEL_9:
      *(_DWORD *)a3 = a2;
      return v3;
  }
  return 0;
}
