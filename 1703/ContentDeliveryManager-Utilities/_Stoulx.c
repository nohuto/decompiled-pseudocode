/*
 * XREFs of _Stoulx @ 0x18006AB5C
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAK@Z @ 0x18002E1B0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18002E1B0.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAI@Z @ 0x18002E410 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18002E410.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAG@Z @ 0x18002E540 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18002E540.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18002E680 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18002E680.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAK@Z @ 0x180062180 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180062180.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAI@Z @ 0x1800623E0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800623E0.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAG@Z @ 0x180062510 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180062510.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180062650 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180062650.c)
 *     _Stolx @ 0x18006AA7C (_Stolx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Stoulx(char *a1, char **a2, int a3, _DWORD *a4)
{
  char **v6; // rsi
  char *v7; // r14
  int v8; // ecx
  char *v9; // rbx
  char v10; // r12
  unsigned int v11; // ebp
  int v12; // eax
  void *v13; // rax
  int v14; // r13d
  int v15; // eax
  __int64 result; // rax
  __int64 v17; // rcx
  char *v18; // [rsp+20h] [rbp-58h]
  unsigned int v21; // [rsp+90h] [rbp+18h]
  char *v22; // [rsp+98h] [rbp+20h]

  v6 = a2;
  v7 = a1;
  if ( a4 )
    *a4 = 0;
  v8 = (unsigned __int8)*a1;
  v9 = v7;
  while ( isspace(v8) )
    v8 = (unsigned __int8)*++v9;
  v10 = *v9;
  if ( ((*v9 - 43) & 0xFD) != 0 )
    v10 = 43;
  else
    ++v9;
  if ( a3 && (unsigned int)(a3 - 2) > 0x22 )
    goto LABEL_30;
  if ( a3 <= 0 )
  {
    if ( *v9 == 48 )
    {
      if ( ((v9[1] - 88) & 0xDF) == 0 )
      {
        a3 = 16;
LABEL_21:
        v9 += 2;
        goto LABEL_22;
      }
      a3 = 8;
    }
    else
    {
      a3 = 10;
    }
  }
  else if ( a3 == 16 && *v9 == 48 && ((v9[1] - 88) & 0xDF) == 0 )
  {
    goto LABEL_21;
  }
LABEL_22:
  v22 = v9;
  while ( *v9 == 48 )
    ++v9;
  v11 = 0;
  v21 = 0;
  v18 = v9;
  v12 = tolower(*v9);
  v13 = memchr("0123456789abcdefghijklmnopqrstuvwxyz", v12, a3);
  if ( v13 )
  {
    do
    {
      v21 = v11;
      v14 = (char)((_BYTE)v13 - (unsigned __int8)"0123456789abcdefghijklmnopqrstuvwxyz");
      ++v9;
      v11 = v14 + a3 * v11;
      v15 = tolower(*v9);
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
  if ( v22 == v9 )
  {
LABEL_30:
    if ( v6 )
      *v6 = v7;
    return 0LL;
  }
  v17 = &v9[-byte_180091AB0[a3]] - v18;
  if ( v17 >= 0 && (v17 > 0 || v11 < (char)v14 || (v11 - (char)v14) / a3 != v21) )
  {
    *_errno() = 34;
    if ( a4 )
      *a4 = 1;
    v11 = -1;
    v10 = 43;
  }
  result = -v11;
  if ( v10 != 45 )
    result = v11;
  if ( v6 )
    *v6 = v9;
  return result;
}
