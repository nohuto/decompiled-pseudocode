/*
 * XREFs of PopAdvanceSystemPowerState @ 0x140534CE0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     PopVerifySystemPowerState @ 0x140543198 (PopVerifySystemPowerState.c)
 */

void __fastcall PopAdvanceSystemPowerState(int *a1, __int64 a2, int a3, int a4)
{
  int v4; // edi
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // edx

  if ( !a1 )
    return;
  v4 = *a1;
  if ( *a1 < 2 )
    return;
  if ( v4 >= 6 )
    goto LABEL_9;
  if ( !(_DWORD)a2 )
  {
    v7 = v4 - 1;
LABEL_6:
    *a1 = v7;
    PopVerifySystemPowerState(a1, a2);
    goto LABEL_7;
  }
  v9 = a2 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      goto LABEL_7;
    if ( v4 != 5 )
    {
      v7 = v4 + 1;
      a2 = 2LL;
      goto LABEL_6;
    }
LABEL_9:
    *a1 = 1;
    return;
  }
  *a1 = v4 - 1;
  PopVerifySystemPowerState(a1, 1LL);
  if ( *a1 == v4 )
    *a1 = v10;
LABEL_7:
  v8 = *a1;
  if ( *a1 != 1 && (v8 < a3 || v8 > a4) )
    goto LABEL_9;
}
