/*
 * XREFs of PopPepShouldActivityWait @ 0x1400C07BC
 * Callers:
 *     PopPepAttemptAcitivityPromotion @ 0x1400C0690 (PopPepAttemptAcitivityPromotion.c)
 * Callees:
 *     <none>
 */

char __fastcall PopPepShouldActivityWait(__int64 a1, int a2, int a3, int a4, char a5)
{
  __int64 v6; // rdx
  char *v7; // rax
  char *v8; // rdx
  char *v9; // r9
  char v10; // dl
  _DWORD **i; // r10

  v6 = 136LL * a2;
  v7 = (char *)&unk_1402576C8;
  if ( !a5 )
    v7 = (char *)&unk_1402576B0;
  v8 = &v7[v6];
  if ( a3 > a4 )
    return 0;
  v9 = &v8[4 * a3];
  v10 = 1;
  for ( i = (_DWORD **)(a1 + 8LL * a3); !*(_DWORD *)v9 || (*(_DWORD *)v9 & **i) == 0; ++i )
  {
    ++a3;
    v9 += 4;
    if ( a3 > a4 )
      return 0;
  }
  return v10;
}
