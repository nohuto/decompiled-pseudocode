/*
 * XREFs of CcCalculateVacbLevelLockCount @ 0x140139B5C
 * Callers:
 *     CcExtendVacbArray @ 0x140078038 (CcExtendVacbArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcCalculateVacbLevelLockCount(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  _QWORD *v3; // r10
  int v4; // r8d
  __int64 v5; // r11
  int v7; // ecx
  __int64 result; // rax
  __int64 v9; // rax

  v2 = 0;
  v3 = a2;
  v4 = 0;
  v5 = 128LL;
  do
  {
    if ( *v3++ )
      ++v4;
    --v5;
  }
  while ( v5 );
  v7 = *(_DWORD *)(a1 + 152) & 0x200;
  if ( v7 )
  {
    v9 = v3[1] - 16LL;
    do
    {
      if ( *(_WORD *)v9 == 765 )
        ++v4;
      else
        ++v2;
      v9 = *(_QWORD *)(v9 + 24) - 16LL;
    }
    while ( v2 <= 0x3F );
  }
  result = v7 != 0 ? 0x400 : 0;
  *(_DWORD *)((char *)a2 + result + 1024) = v4;
  return result;
}
