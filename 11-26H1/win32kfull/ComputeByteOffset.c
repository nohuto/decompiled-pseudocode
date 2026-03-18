/*
 * XREFs of ComputeByteOffset @ 0x140143948
 * Callers:
 *     SetupAAHeader @ 0x140142A9C (SetupAAHeader.c)
 *     CheckBMPNeedFixup @ 0x140144330 (CheckBMPNeedFixup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeByteOffset(unsigned int a1, int a2, _BYTE *a3)
{
  char v3; // al
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx

  v3 = 0;
  if ( a1 > 0xF7 )
  {
    v11 = a1 - 248;
    if ( !v11 )
      goto LABEL_10;
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_10;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_10;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_10;
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_25;
    v16 = v15 - 1;
    if ( !v16 )
      goto LABEL_25;
    v17 = v16 - 1;
    if ( !v17 )
      goto LABEL_10;
    if ( v17 != 1 )
      return 0LL;
    goto LABEL_15;
  }
  if ( a1 == 247 )
  {
LABEL_10:
    *a3 = v3;
    return (unsigned int)a2;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    v3 = a2 & 7;
    a2 >>= 3;
    goto LABEL_10;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_15:
    v3 = a2 & 1;
    a2 >>= 1;
    goto LABEL_10;
  }
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_10;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_25:
    a2 *= 2;
    goto LABEL_10;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    a2 *= 3;
    goto LABEL_10;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    a2 *= 4;
    goto LABEL_10;
  }
  if ( v9 - 239 < 2 )
    goto LABEL_10;
  return 0LL;
}
