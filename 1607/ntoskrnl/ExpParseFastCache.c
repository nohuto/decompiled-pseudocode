/*
 * XREFs of ExpParseFastCache @ 0x1406AF6A4
 * Callers:
 *     sub_1406AF170 @ 0x1406AF170 (sub_1406AF170.c)
 *     ExpParseFastCacheHelper @ 0x1406AF734 (ExpParseFastCacheHelper.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpParseFastCache(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r11
  unsigned int v6; // r10d
  unsigned int v8; // edx
  unsigned int v9; // ecx
  __int64 v10; // rax

  v4 = *(_DWORD *)(a1 + 8);
  v5 = a1 + 24;
  v6 = 0;
  if ( v4 )
  {
    while ( (v5 & 7) == 0 )
    {
      v8 = *(_DWORD *)(v5 + 40);
      if ( v8 >= 0xFFFFFFD4 )
        break;
      if ( v8 + 51 < v8 + 44 )
        break;
      v9 = (v8 + 51) & 0xFFFFFFF8;
      if ( v4 < v9 || !v8 )
        break;
      if ( a2 && v6 < a3 )
      {
        v10 = 2LL * v6;
        *(_BYTE *)(a2 + 8 * v10) = 2;
        *(_QWORD *)(a2 + 8 * v10 + 8) = v5;
      }
      ++v6;
      v5 += v9;
      v4 -= v9;
      if ( !v4 )
        goto LABEL_11;
    }
    return 3221225534LL;
  }
LABEL_11:
  if ( a3 > v6 )
    return 3221225534LL;
  if ( a4 )
    *a4 = v6;
  return a3 < v6 ? 0xC0000023 : 0;
}
