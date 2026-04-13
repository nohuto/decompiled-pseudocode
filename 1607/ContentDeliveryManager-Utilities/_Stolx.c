/*
 * XREFs of _Stolx @ 0x180053E9C
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAJ@Z @ 0x180026C60 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180026C60.c)
 * Callees:
 *     _Stoulx @ 0x180053F84 (_Stoulx.c)
 */

__int64 __fastcall Stolx(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, _DWORD *a4)
{
  unsigned __int8 **v4; // rsi
  char *v6; // rdi
  int v7; // ecx
  char v10; // bl
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  unsigned int v15; // eax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned __int8 **)&v16;
  v6 = (char *)a1;
  v7 = *a1;
  if ( a2 )
    v4 = a2;
  while ( isspace(v7) )
    v7 = (unsigned __int8)*++v6;
  v10 = *v6;
  if ( ((*v6 - 43) & 0xFD) != 0 )
    v10 = 43;
  else
    ++v6;
  v11 = Stoulx(v6, v4, a3, a4);
  v12 = v11;
  if ( v6 == (char *)*v4 )
    *v4 = a1;
  v13 = 0x7FFFFFFF;
  if ( a1 == *v4 && v11 || v10 == 43 && v11 > 0x7FFFFFFF || v10 == 45 && v11 > 0x80000000 )
  {
    *_errno() = 34;
    if ( a4 )
      *a4 = 1;
    if ( v10 == 45 )
      return 0x80000000;
    return v13;
  }
  else
  {
    v15 = -v11;
    if ( v10 == 45 )
      return v15;
    return v12;
  }
}
