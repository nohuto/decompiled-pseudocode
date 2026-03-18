/*
 * XREFs of CcCalculateVacbLevelLockCount @ 0x1400E06D4
 * Callers:
 *     CcExtendVacbArray @ 0x1400E0744 (CcExtendVacbArray.c)
 * Callees:
 *     VacbLevelReference @ 0x1400E0F58 (VacbLevelReference.c)
 */

_DWORD *__fastcall CcCalculateVacbLevelLockCount(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  _QWORD *v3; // r10
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v7; // rax
  _DWORD *result; // rax
  int v9; // r9d

  v2 = 0;
  v3 = a2;
  v4 = 0LL;
  v5 = 128LL;
  do
  {
    if ( *v3++ )
      v4 = (unsigned int)(v4 + 1);
    --v5;
  }
  while ( v5 );
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v7 = v3[1] - 16LL;
    do
    {
      if ( *(_WORD *)v7 == 765 )
        v4 = (unsigned int)(v4 + 1);
      else
        ++v2;
      v7 = *(_QWORD *)(v7 + 24) - 16LL;
    }
    while ( v2 <= 0x3F );
  }
  result = (_DWORD *)VacbLevelReference(a1, a2, 0LL, v4);
  *result = v9;
  return result;
}
