/*
 * XREFs of NVMeGetTemperatureThresholdCompletion @ 0x1C000BA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall NVMeGetTemperatureThresholdCompletion(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v3 = *(_QWORD *)(a2 + 104);
  else
    v3 = *(_QWORD *)(a2 + 56);
  v4 = v3 & 0xFFF;
  if ( (v3 & 0xFFF) != 0 )
    v3 = v3 - v4 + 4096;
  if ( a3 )
  {
    LOBYTE(v4) = *(_BYTE *)(a2 + 3);
    if ( (_BYTE)v4 != 14 )
    {
      if ( (_BYTE)v4 == 1 )
      {
        LOWORD(v4) = *a3;
        *(_WORD *)(a1 + 148) = *a3;
      }
      *(_BYTE *)(v3 + 4186) = 1;
    }
  }
  return v4;
}
