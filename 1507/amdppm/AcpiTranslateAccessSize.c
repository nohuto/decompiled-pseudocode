/*
 * XREFs of AcpiTranslateAccessSize @ 0x1C0011884
 * Callers:
 *     AcpiEval_CST @ 0x1C000F75C (AcpiEval_CST.c)
 *     AcpiEval_PCT_PTC @ 0x1C000FA78 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_CPC @ 0x1C0010ADC (AcpiEval_CPC.c)
 *     DecodeAcpi2CState @ 0x1C0015380 (DecodeAcpi2CState.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiTranslateAccessSize(_BYTE *a1)
{
  unsigned __int8 v1; // r9
  _BYTE *v2; // rax
  unsigned int v3; // r8d
  unsigned __int8 v4; // al
  unsigned __int8 v5; // dl

  v1 = a1[3];
  v2 = &unk_1C0007455;
  v3 = 1;
  while ( v1 != *v2 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 5 )
    {
      v4 = a1[3];
      if ( v1 > 4u )
        v4 = 0;
      if ( !v4 )
      {
        v5 = a1[1] + a1[2];
        if ( v5 > 8u )
        {
          if ( v5 > 0x10u )
            v4 = (v5 > 0x20u) + 3;
          else
            v4 = 2;
        }
        else
        {
          v4 = 1;
        }
      }
      LOBYTE(v2) = *((_BYTE *)&AcpiGenericAccessSizeTranslation + v4);
      a1[3] = (_BYTE)v2;
      return (char)v2;
    }
  }
  return (char)v2;
}
