/*
 * XREFs of ExpParseFastCache @ 0x1405A9954
 * Callers:
 *     ExpParseFastCacheHelper @ 0x1405A9894 (ExpParseFastCacheHelper.c)
 *     sub_1406ECEC4 @ 0x1406ECEC4 (sub_1406ECEC4.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpParseFastCache(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r11
  unsigned int v6; // r10d
  bool i; // zf
  unsigned int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // rax

  v4 = *(_DWORD *)(a1 + 8);
  v5 = a1 + 24;
  v6 = 0;
  for ( i = v4 == 0; !i; i = v4 == 0 )
  {
    if ( (v5 & 7) != 0 )
      return 3221225534LL;
    v9 = *(_DWORD *)(v5 + 40);
    if ( v9 >= 0xFFFFFFD4 )
      return 3221225534LL;
    if ( v9 + 51 < v9 + 44 )
      return 3221225534LL;
    v10 = (v9 + 51) & 0xFFFFFFF8;
    if ( v4 < v10 || !v9 )
      return 3221225534LL;
    if ( a2 )
    {
      if ( v6 < a3 )
      {
        v11 = 2LL * v6;
        *(_BYTE *)(a2 + 8 * v11) = 2;
        *(_QWORD *)(a2 + 8 * v11 + 8) = v5;
      }
    }
    ++v6;
    v5 += v10;
    v4 -= v10;
  }
  if ( a3 > v6 )
    return 3221225534LL;
  if ( a4 )
    *a4 = v6;
  return a3 < v6 ? 0xC0000023 : 0;
}
