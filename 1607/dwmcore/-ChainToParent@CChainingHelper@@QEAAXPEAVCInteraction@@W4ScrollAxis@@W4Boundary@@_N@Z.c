/*
 * XREFs of ?ChainToParent@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N@Z @ 0x1801688DC
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z @ 0x18015E958 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N3@Z @ 0x180168A94 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis.c)
 * Callees:
 *     <none>
 */

void __fastcall CChainingHelper::ChainToParent(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  int v7; // edx
  __int64 v8; // rbx
  char v9; // r11
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  int v13; // edx

  v7 = 0;
  v8 = 3LL * a3;
  v9 = *(_BYTE *)(a1 + 12LL * a3) ^ (a5 ^ *(_BYTE *)(a1 + 12LL * a3)) & 1;
  *(_BYTE *)(a1 + 12LL * a3) = v9;
  v10 = 0;
  if ( a3 )
  {
    v11 = a3 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        if ( ((a4 - 1) & 0xFFFFFFFD) == 0 )
          v10 = 16;
        if ( (unsigned int)(a4 - 2) <= 1 )
          v10 |= 0x20u;
        v7 = 48;
      }
    }
    else
    {
      if ( ((a4 - 1) & 0xFFFFFFFD) == 0 )
        v10 = 4;
      if ( (unsigned int)(a4 - 2) <= 1 )
        v10 |= 8u;
      v7 = 12;
    }
  }
  else
  {
    v10 = ((a4 - 1) & 0xFFFFFFFD) == 0;
    if ( (unsigned int)(a4 - 2) <= 1 )
      v10 |= 2u;
    v7 = 3;
  }
  if ( a5 )
  {
    v12 = 15;
    v13 = ~v7;
    if ( a3 == 2 )
      v12 = 63;
    v10 |= v12 & v13;
  }
  *(_BYTE *)(a1 + 4 * v8) = v9 | 2;
  *(_DWORD *)(a1 + 4 * v8 + 4) = ~v10;
  *(_BYTE *)(a1 + 36) |= 1u;
}
