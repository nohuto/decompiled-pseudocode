/*
 * XREFs of ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18002A384
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180027010 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180027010.c)
 * Callees:
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18002916C (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180029408 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1800295D0 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBA_NAEBV12@@Z @ 0x18002A91C (-equal@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(
        __int64 *a1,
        __int64 a2,
        size_t a3,
        __int16 *a4)
{
  __int64 v6; // rsi
  __int64 v7; // r10
  __int16 v8; // ax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r13
  _QWORD *v11; // r12
  __int64 v12; // rbx
  __int16 v13; // ax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int16 v16; // ax
  char v17; // cl
  _QWORD *v18; // rdx
  char v19; // cl
  char v21; // [rsp+20h] [rbp-50h]
  unsigned int v22; // [rsp+24h] [rbp-4Ch]
  _QWORD v25[3]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( *a4 )
  {
    v8 = *a4;
    do
    {
      if ( v8 == *a4 )
        ++a3;
      v8 = a4[++v7];
    }
    while ( v8 );
  }
  v26 = 15LL;
  v25[2] = 0LL;
  LOBYTE(v25[0]) = 0;
  std::string::assign(v25, a3, 0);
  v22 = -2;
  v9 = 1LL;
  v10 = v26;
  v11 = (_QWORD *)v25[0];
LABEL_7:
  v21 = 0;
  v12 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = a4[v12];
        if ( !v13 || v13 == *a4 )
          break;
        ++v12;
      }
      v14 = v25;
      if ( v10 >= 0x10 )
        v14 = v11;
      if ( *((_BYTE *)v14 + v6) )
        break;
      v12 += v9;
      v16 = a4[v12];
      if ( v16 == *a4 || !v16 )
      {
        v22 = v6;
LABEL_24:
        v18 = v25;
        if ( v10 >= 0x10 )
          v18 = v11;
        v19 = 127;
        if ( v9 < 0x7F )
          v19 = v9;
        *((_BYTE *)v18 + v6) = v19;
        v11 = (_QWORD *)v25[0];
        v10 = v26;
LABEL_29:
        v17 = v21;
        goto LABEL_30;
      }
      if ( (unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a1, a2)
        || a4[v12] != *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a1) )
      {
        goto LABEL_24;
      }
      v17 = 1;
      v21 = 1;
LABEL_30:
      if ( ++v6 >= a3 )
      {
        v6 = 0LL;
        if ( v17 && !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a1, a2) )
        {
          ++v9;
          std::istreambuf_iterator<unsigned short>::_Inc(a1);
          v22 = -1;
          goto LABEL_7;
        }
        goto LABEL_34;
      }
    }
    v15 = v25;
    if ( v10 >= 0x10 )
      v15 = v11;
    v12 += *((char *)v15 + v6);
    goto LABEL_29;
  }
LABEL_34:
  if ( v10 >= 0x10 )
    operator delete(v11);
  return v22;
}
