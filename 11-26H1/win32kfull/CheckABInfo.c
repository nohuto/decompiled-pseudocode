/*
 * XREFs of CheckABInfo @ 0x140296484
 * Callers:
 *     HT_HalftoneBitmap @ 0x1401449FC (HT_HalftoneBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckABInfo(__int64 a1, int a2, int a3, _WORD *a4, unsigned __int16 *a5)
{
  char *v5; // r10
  unsigned __int16 v7; // dx
  char v8; // cl
  __int16 v9; // ax
  char v10; // cl
  __int16 v11; // ax
  __int64 result; // rax

  v5 = *(char **)(a1 + 8);
  if ( !v5 )
    return 4294967256LL;
  if ( a3 == 1 )
  {
    v7 = 2;
    goto LABEL_11;
  }
  if ( a3 == 2 )
    goto LABEL_9;
  if ( a3 != 3 && a3 != 254 )
  {
    if ( a3 != 255 )
    {
      v7 = 0;
      goto LABEL_13;
    }
LABEL_9:
    v7 = 16;
    goto LABEL_11;
  }
  v7 = 256;
LABEL_11:
  if ( *((_QWORD *)v5 + 1) && *((_WORD *)v5 + 1) <= v7 )
  {
LABEL_13:
    v8 = *v5;
    v9 = *a4 | 0x80;
    *a4 = v9;
    if ( (v8 & 1) != 0 )
    {
      v10 = v5[1];
      if ( !v10 )
        return 0LL;
      if ( v10 == -1 )
        v11 = v9 & 0xFF7F;
      else
        v11 = v9 | 0x100;
      if ( v10 == -1 )
        v7 = 0;
    }
    else
    {
      if ( a2 != 6 )
        return 4294967287LL;
      if ( (v8 & 4) != 0 )
      {
        v9 |= 0x200u;
        *a4 = v9;
      }
      if ( (v8 & 8) == 0 )
        goto LABEL_31;
      if ( a3 != 6 )
        return 4294967285LL;
      v11 = v9 | 0x400;
    }
    *a4 = v11;
LABEL_31:
    result = 1LL;
    *a5 = v7;
    return result;
  }
  return 4294967256LL;
}
