/*
 * XREFs of _Stoullx @ 0x18006B588
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x18002DB80 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambuf.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x18002DF50 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18002DF50.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x180061B50 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istream.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x180061F20 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180061F20.c)
 *     _Stollx @ 0x18006A7B8 (_Stollx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Stoullx(char *a1, char **a2, int a3, _DWORD *a4)
{
  char *v7; // r14
  int v8; // ecx
  char *v9; // rbx
  char v10; // r12
  unsigned __int64 v11; // rbp
  char v12; // r13
  int v13; // eax
  void *v14; // rax
  int v15; // eax
  unsigned __int64 result; // rax
  __int64 v17; // rcx
  char *v18; // [rsp+20h] [rbp-48h]
  char *v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21; // [rsp+88h] [rbp+20h]

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
    goto LABEL_29;
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
  v18 = v9;
  while ( *v9 == 48 )
    ++v9;
  v11 = 0LL;
  v21 = 0LL;
  v12 = 0;
  v19 = v9;
  v13 = tolower(*v9);
  v14 = memchr("0123456789abcdefghijklmnopqrstuvwxyz", v13, a3);
  if ( v14 )
  {
    do
    {
      v21 = v11;
      v12 = (_BYTE)v14 - (unsigned __int8)"0123456789abcdefghijklmnopqrstuvwxyz";
      ++v9;
      v11 = v11 * a3 + v12;
      v15 = tolower(*v9);
      v14 = memchr("0123456789abcdefghijklmnopqrstuvwxyz", v15, a3);
    }
    while ( v14 );
    v7 = a1;
  }
  if ( v18 == v9 )
  {
LABEL_29:
    if ( a2 )
      *a2 = v7;
    return 0LL;
  }
  v17 = &v9[-byte_180091B78[a3]] - v19;
  if ( v17 >= 0 && (v17 > 0 || v11 < v12 || (v11 - v12) / a3 != v21) )
  {
    *_errno() = 34;
    if ( a4 )
      *a4 = 1;
    v11 = -1LL;
    v10 = 43;
  }
  result = -(__int64)v11;
  if ( v10 != 45 )
    result = v11;
  if ( a2 )
    *a2 = v9;
  return result;
}
