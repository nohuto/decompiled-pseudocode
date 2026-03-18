/*
 * XREFs of CheckABInfo @ 0x1C0249948
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C00F3410 (HT_HalftoneBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckABInfo(__int64 a1, int a2, int a3, __int16 *a4, unsigned __int16 *a5)
{
  char *v5; // r10
  unsigned __int16 v7; // dx
  char v8; // cl
  __int16 v9; // ax
  char v10; // cl
  __int64 result; // rax

  v5 = *(char **)(a1 + 8);
  if ( !v5 )
    return 4294967256LL;
  switch ( a3 )
  {
    case 1:
      v7 = 2;
      goto LABEL_11;
    case 2:
      goto LABEL_9;
    case 3:
    case 254:
      v7 = 256;
LABEL_11:
      if ( *((_QWORD *)v5 + 1) && *((_WORD *)v5 + 1) <= v7 )
        goto LABEL_13;
      return 4294967256LL;
    case 255:
LABEL_9:
      v7 = 16;
      goto LABEL_11;
  }
  v7 = 0;
LABEL_13:
  v8 = *v5;
  *a4 |= 0x80u;
  v9 = *a4;
  if ( (v8 & 1) != 0 )
  {
    v10 = v5[1];
    if ( !v10 )
      return 0LL;
    if ( v10 == -1 )
    {
      v7 = 0;
      *a4 = v9 & 0xFF7F;
    }
    else
    {
      *a4 = v9 | 0x100;
    }
  }
  else
  {
    if ( a2 != 6 )
      return 4294967287LL;
    if ( (v8 & 4) != 0 )
      *a4 = v9 | 0x200;
    if ( (v8 & 8) != 0 )
    {
      if ( a3 != 6 )
        return 4294967285LL;
      *a4 |= 0x400u;
    }
  }
  result = 1LL;
  *a5 = v7;
  return result;
}
