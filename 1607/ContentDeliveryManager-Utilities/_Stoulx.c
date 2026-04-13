/*
 * XREFs of _Stoulx @ 0x180053F84
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAK@Z @ 0x180026B30 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180026B30.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAI@Z @ 0x180026D90 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180026D90.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAG@Z @ 0x180026ED0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180026ED0.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180027010 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180027010.c)
 *     _Stolx @ 0x180053E9C (_Stolx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Stoulx(char *a1, char **a2, int a3, _DWORD *a4)
{
  char **v6; // r14
  char *v7; // rbp
  char *v8; // rbx
  int i; // ecx
  char v10; // r15
  unsigned int v11; // edi
  int v12; // eax
  void *v13; // rax
  int v14; // r13d
  int v15; // eax
  __int64 v17; // rcx
  char *v18; // [rsp+20h] [rbp-58h]
  unsigned int v21; // [rsp+90h] [rbp+18h]
  unsigned __int8 *v22; // [rsp+98h] [rbp+20h]

  v6 = a2;
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
    goto LABEL_30;
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
  v22 = (unsigned __int8 *)v8;
  while ( *v8 == 48 )
    ++v8;
  v11 = 0;
  v21 = 0;
  v18 = v8;
  v12 = tolower(*v8);
  v13 = memchr("0123456789abcdefghijklmnopqrstuvwxyz", v12, a3);
  if ( v13 )
  {
    do
    {
      v21 = v11;
      v14 = (char)((_BYTE)v13 - (unsigned __int8)"0123456789abcdefghijklmnopqrstuvwxyz");
      ++v8;
      v11 = v14 + a3 * v11;
      v15 = tolower(*v8);
      v13 = memchr("0123456789abcdefghijklmnopqrstuvwxyz", v15, a3);
    }
    while ( v13 );
    v6 = a2;
    v7 = a1;
  }
  else
  {
    LOBYTE(v14) = 0;
  }
  if ( v22 == (unsigned __int8 *)v8 )
  {
LABEL_30:
    if ( v6 )
      *v6 = v7;
    return 0LL;
  }
  v17 = &v8[-byte_1800714B8[a3]] - v18;
  if ( v17 >= 0 && (v17 > 0 || v11 < (char)v14 || (v11 - (char)v14) / a3 != v21) )
  {
    *_errno() = 34;
    if ( a4 )
      *a4 = 1;
    v11 = -1;
    v10 = 43;
  }
  if ( v10 == 45 )
    v11 = -v11;
  if ( v6 )
    *v6 = v8;
  return v11;
}
