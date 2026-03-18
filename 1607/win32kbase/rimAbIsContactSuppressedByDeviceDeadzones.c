/*
 * XREFs of rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C00D0A1C
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00D13A8 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C00E0A3C (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 */

__int64 __fastcall rimAbIsContactSuppressedByDeviceDeadzones(__int64 a1, struct tagHPD_CONTACT *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v5; // edi
  RIMDeadzone **i; // rsi

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( *(_DWORD *)(v2 + 456) )
  {
    v5 = 0;
    for ( i = (RIMDeadzone **)(v2 + 416); !*i || !(unsigned int)RIMDeadzone::IsInDeadzone(*i, a2); ++i )
    {
      if ( (unsigned int)++v5 >= 5 )
        return v3;
    }
    return 1;
  }
  return v3;
}
