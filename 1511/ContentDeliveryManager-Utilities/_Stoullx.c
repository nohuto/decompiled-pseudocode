/*
 * XREFs of _Stoullx @ 0x180023C34
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x180015890 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180015890.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x180015D40 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180015D40.c)
 *     _Stollx @ 0x18002382C (_Stollx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Stoullx(char *a1, char **a2, int a3, _DWORD *a4)
{
  char *v7; // rbp
  char *v8; // rbx
  int i; // ecx
  char v10; // r15
  unsigned __int64 v11; // rdi
  char v12; // r13
  int v13; // eax
  void *v14; // rax
  int v15; // eax
  __int64 v17; // rcx
  unsigned __int8 *v18; // [rsp+20h] [rbp-48h]
  char *v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21; // [rsp+88h] [rbp+20h]

  v7 = a1;
  if ( a4 )
    *a4 = 0;
  v8 = a1;
  for ( i = (unsigned __int8)*a1; isspace(i); i = (unsigned __int8)*v8 )
    ++v8;
  v10 = *v8;
  if ( ((*v8 - 43) & 0xFD) != 0 )
    v10 = 43;
  else
    ++v8;
  if ( a3 && (unsigned int)(a3 - 2) > 0x22 )
    goto LABEL_29;
  if ( a3 <= 0 )
  {
    if ( *v8 == 48 )
    {
      if ( ((v8[1] - 88) & 0xDF) == 0 )
      {
        a3 = 16;
LABEL_21:
        v8 += 2;
        goto LABEL_22;
      }
      a3 = 8;
    }
    else
    {
      a3 = 10;
    }
  }
  else if ( a3 == 16 && *v8 == 48 && ((v8[1] - 88) & 0xDF) == 0 )
  {
    goto LABEL_21;
  }
LABEL_22:
  v18 = (unsigned __int8 *)v8;
  while ( *v8 == 48 )
    ++v8;
  v11 = 0LL;
  v21 = 0LL;
  v12 = 0;
  v19 = v8;
  v13 = tolower(*v8);
  v14 = memchr("0123456789abcdefghijklmnopqrstuvwxyz", v13, a3);
  if ( v14 )
  {
    do
    {
      v21 = v11;
      v12 = (_BYTE)v14 - (unsigned __int8)"0123456789abcdefghijklmnopqrstuvwxyz";
      ++v8;
      v11 = v11 * a3 + v12;
      v15 = tolower(*v8);
      v14 = memchr("0123456789abcdefghijklmnopqrstuvwxyz", v15, a3);
    }
    while ( v14 );
    v7 = a1;
  }
  if ( v18 == (unsigned __int8 *)v8 )
  {
LABEL_29:
    if ( a2 )
      *a2 = v7;
    return 0LL;
  }
  v17 = &v8[-byte_18002D468[a3]] - v19;
  if ( v17 >= 0 && (v17 > 0 || v11 < v12 || (v11 - v12) / a3 != v21) )
  {
    *_errno() = 34;
    if ( a4 )
      *a4 = 1;
    v11 = -1LL;
    v10 = 43;
  }
  if ( v10 == 45 )
    v11 = -(__int64)v11;
  if ( a2 )
    *a2 = v8;
  return v11;
}
