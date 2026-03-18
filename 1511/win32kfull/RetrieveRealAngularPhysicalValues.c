/*
 * XREFs of RetrieveRealAngularPhysicalValues @ 0x1C01CE3C4
 * Callers:
 *     RetrieveNormalizationRange @ 0x1C01C3E8C (RetrieveNormalizationRange.c)
 * Callees:
 *     ComputePower @ 0x1C01C95E0 (ComputePower.c)
 */

__int64 __fastcall RetrieveRealAngularPhysicalValues(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbx
  char v3; // r8
  __int64 v4; // rax
  __int16 v6; // di
  unsigned int v7; // r14d
  unsigned int v9; // esi
  unsigned __int16 *v10; // rcx
  unsigned int v11; // r8d
  int v12; // r9d
  int v13; // r10d
  int v14; // r11d
  int v15; // eax
  int v16; // eax
  unsigned int v17; // eax

  v2 = 0LL;
  v3 = *(_BYTE *)(a1 + 32) & 0xF;
  v4 = 0LL;
  v6 = 0;
  v7 = 62831;
  if ( !*a2 )
    return 1LL;
  v9 = *(_DWORD *)(a1 + 36) & 0xF;
  if ( !v9 )
    goto LABEL_23;
  v10 = word_1C02EA978;
  do
  {
    if ( *(_BYTE *)v10 == v3 )
      break;
    v4 = (unsigned int)(v4 + 1);
    v10 += 2;
  }
  while ( (unsigned int)v4 < 0xB );
  if ( (unsigned int)v4 < 0xB )
    v6 = word_1C02EA978[2 * v4 + 1];
  v11 = ComputePower(v6);
  if ( v13 < 0 )
    v13 = v12 + ~v13;
  if ( v9 >= 5 )
    goto LABEL_23;
  v15 = dword_1C02EA960[v9];
  if ( v15 == 4 )
  {
    if ( v6 <= (__int16)v14 && v13 / v11 )
    {
      for ( ; v14 > v6; v7 = v16 + 10 * v7 )
      {
        if ( v14 <= -8 )
          break;
        v16 = dword_1C02EA950[v2];
        v14 -= v12;
        v2 = (unsigned int)(v12 + v2);
      }
      v17 = 360 * v13 / v7;
      goto LABEL_22;
    }
LABEL_23:
    UserLogError(2147483913LL);
    return (unsigned int)v2;
  }
  if ( v15 != 3 || v6 > -2 )
    goto LABEL_23;
  v17 = v13 / v11;
LABEL_22:
  *a2 = v17;
  LODWORD(v2) = v12;
  return (unsigned int)v2;
}
