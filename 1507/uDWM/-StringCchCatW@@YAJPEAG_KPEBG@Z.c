/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180081C94
 * Callers:
 *     ?BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z @ 0x18007DC1C (-BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, char *a3)
{
  int v4; // r9d
  unsigned __int16 *v6; // r11
  __int64 v7; // rax
  __int64 v8; // r8
  char *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r10
  signed __int64 v12; // rbx
  __int16 v13; // ax

  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  v6 = a1;
  if ( v4 >= 0 )
  {
    v7 = a2;
    v4 = 0;
    if ( a2 )
    {
      do
      {
        if ( !*a1 )
          break;
        ++a1;
        --v7;
      }
      while ( v7 );
      if ( v7 )
      {
        v8 = a2 - v7;
        goto LABEL_11;
      }
    }
    v4 = -2147024809;
  }
  v8 = 0LL;
LABEL_11:
  if ( v4 >= 0 )
  {
    v9 = (char *)&v6[v8];
    v4 = 0;
    v10 = a2 - v8;
    if ( a2 == v8 )
      goto LABEL_18;
    v11 = 2147483646LL;
    v12 = a3 - v9;
    do
    {
      if ( !v11 )
        break;
      v13 = *(_WORD *)&v9[v12];
      if ( !v13 )
        break;
      *(_WORD *)v9 = v13;
      --v11;
      v9 += 2;
      --v10;
    }
    while ( v10 );
    if ( !v10 )
    {
LABEL_18:
      v9 -= 2;
      v4 = -2147024774;
    }
    *(_WORD *)v9 = 0;
  }
  return (unsigned int)v4;
}
