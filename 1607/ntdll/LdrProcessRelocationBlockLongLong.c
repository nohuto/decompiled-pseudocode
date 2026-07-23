/*
 * XREFs of LdrProcessRelocationBlockLongLong @ 0x180084EF8
 * Callers:
 *     LdrRelocateImage @ 0x180084E1C (LdrRelocateImage.c)
 *     LdrProcessRelocationBlock @ 0x1800DCB90 (LdrProcessRelocationBlock.c)
 *     LdrProcessRelocationBlockEx @ 0x1800DCBC0 (LdrProcessRelocationBlockEx.c)
 * Callees:
 *     LdrpArmProcessRelocation @ 0x1800DCBCC (LdrpArmProcessRelocation.c)
 *     LdrpThumbProcessRelocation @ 0x1800DCC9C (LdrpThumbProcessRelocation.c)
 */

unsigned __int16 *__fastcall LdrProcessRelocationBlockLongLong(
        __int16 a1,
        __int64 a2,
        int a3,
        unsigned __int16 *a4,
        __int64 a5)
{
  unsigned __int16 *v5; // rbx
  unsigned __int64 v8; // rbp
  int v9; // ecx
  unsigned int v10; // r9d
  _QWORD *v11; // r8
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax

  v5 = a4;
  v8 = (unsigned __int64)&a4[a3];
  if ( (unsigned __int64)a4 >= v8 )
    return v5;
  while ( 1 )
  {
    v9 = *v5 >> 12;
    if ( ((1 << v9) & 0x3A0) != 0 )
      break;
    v10 = 1;
    v11 = (_QWORD *)(a2 + (*v5 & 0xFFF));
    if ( v9 )
    {
      v12 = v9 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              if ( v15 == 6 )
                *v11 += a5;
              else
                v10 = 0;
            }
            else
            {
              v10 = 2;
              *(_WORD *)v11 = (v5[1] + (unsigned int)a5 + (*(unsigned __int16 *)v11 << 16) + 0x8000) >> 16;
            }
          }
          else
          {
            *(_DWORD *)v11 += a5;
          }
        }
        else
        {
          *(_WORD *)v11 += a5;
        }
      }
      else
      {
        *(_WORD *)v11 = ((unsigned int)a5 + (*(unsigned __int16 *)v11 << 16)) >> 16;
      }
    }
LABEL_21:
    if ( !v10 )
      return 0LL;
    v5 += v10;
    if ( (unsigned __int64)v5 >= v8 )
      return v5;
  }
  if ( a1 == 448 )
  {
    v16 = LdrpArmProcessRelocation(v5, a2, a5);
    goto LABEL_20;
  }
  if ( a1 == 450 || a1 == 452 )
  {
    v16 = LdrpThumbProcessRelocation(v5, a2, a5);
LABEL_20:
    v10 = v16;
    goto LABEL_21;
  }
  return 0LL;
}
