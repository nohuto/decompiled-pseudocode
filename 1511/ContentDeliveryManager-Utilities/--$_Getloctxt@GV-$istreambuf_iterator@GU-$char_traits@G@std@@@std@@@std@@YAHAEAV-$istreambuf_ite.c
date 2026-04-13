/*
 * XREFs of ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x180019008
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180014E90 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambuf.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800175A0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1800183E4 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEBAGXZ @ 0x180018474 (-_Peek@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEBAGXZ.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(
        __int64 a1,
        __int64 a2,
        size_t a3,
        __int16 *a4)
{
  __int64 v8; // r10
  __int16 v9; // ax
  unsigned __int64 v10; // r13
  __int64 v11; // rbx
  size_t v12; // r14
  __int16 v13; // ax
  void **v14; // rax
  void **v15; // rax
  __int16 v16; // ax
  char v17; // cl
  void **v18; // rdx
  char v19; // cl
  char v21; // [rsp+20h] [rbp-40h]
  unsigned int v22; // [rsp+24h] [rbp-3Ch]
  void *v23[3]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-18h]

  v8 = 0LL;
  if ( *a4 )
  {
    v9 = *a4;
    do
    {
      if ( v9 == *a4 )
        ++a3;
      v9 = a4[++v8];
    }
    while ( v9 );
  }
  v24 = 15LL;
  v23[2] = 0LL;
  LOBYTE(v23[0]) = 0;
  std::string::assign(v23, a3, 0);
  v22 = -2;
  v10 = 1LL;
  while ( 2 )
  {
    v21 = 0;
    v11 = 0LL;
    v12 = 0LL;
    if ( !a3 )
      break;
    do
    {
      while ( 1 )
      {
        v13 = a4[v11];
        if ( !v13 || v13 == *a4 )
          break;
        ++v11;
      }
      v14 = v23;
      if ( v24 >= 0x10 )
        v14 = (void **)v23[0];
      if ( !*((_BYTE *)v14 + v12) )
      {
        v11 += v10;
        v16 = a4[v11];
        if ( v16 == *a4 || !v16 )
        {
          v18 = v23;
          if ( v24 >= 0x10 )
            v18 = (void **)v23[0];
          v22 = v12;
          goto LABEL_38;
        }
        if ( !*(_BYTE *)(a1 + 8) )
          std::istreambuf_iterator<unsigned short>::_Peek((__int64 *)a1);
        if ( !*(_BYTE *)(a2 + 8) )
          std::istreambuf_iterator<unsigned short>::_Peek((__int64 *)a2);
        if ( *(_QWORD *)a1 )
        {
          if ( !*(_QWORD *)a2 )
            goto LABEL_28;
        }
        else if ( *(_QWORD *)a2 )
        {
LABEL_28:
          if ( !*(_BYTE *)(a1 + 8) )
            std::istreambuf_iterator<unsigned short>::_Peek((__int64 *)a1);
          if ( a4[v11] == *(_WORD *)(a1 + 10) )
          {
            v17 = 1;
            v21 = 1;
            goto LABEL_42;
          }
        }
        v18 = v23;
        if ( v24 >= 0x10 )
          v18 = (void **)v23[0];
LABEL_38:
        v19 = 127;
        if ( v10 < 0x7F )
          v19 = v10;
        *((_BYTE *)v18 + v12) = v19;
        goto LABEL_41;
      }
      v15 = v23;
      if ( v24 >= 0x10 )
        v15 = (void **)v23[0];
      v11 += *((char *)v15 + v12);
LABEL_41:
      v17 = v21;
LABEL_42:
      ++v12;
    }
    while ( v12 < a3 );
    if ( v17 )
    {
      if ( !*(_BYTE *)(a1 + 8) )
        std::istreambuf_iterator<unsigned short>::_Peek((__int64 *)a1);
      if ( !*(_BYTE *)(a2 + 8) )
        std::istreambuf_iterator<unsigned short>::_Peek((__int64 *)a2);
      if ( *(_QWORD *)a1 )
      {
        if ( !*(_QWORD *)a2 )
          goto LABEL_52;
      }
      else if ( *(_QWORD *)a2 )
      {
LABEL_52:
        ++v10;
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a1);
        v22 = -1;
        continue;
      }
    }
    break;
  }
  if ( v24 >= 0x10 )
    operator delete(v23[0]);
  return v22;
}
