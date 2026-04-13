/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x180015890
 * Callers:
 *     <none>
 * Callees:
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18000B058 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180016658 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Peek@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEBAGXZ @ 0x180018474 (-_Peek@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEBAGXZ.c)
 *     _Stoullx @ 0x180023C34 (_Stoullx.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        int a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 *a7)
{
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r13
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  int v16; // [rsp+30h] [rbp-98h] BYREF
  _BYTE *v17; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-78h] BYREF

  v18[1] = -2LL;
  v16 = 0;
  v11 = std::ios_base::getloc(a5, v18);
  v12 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
          a1,
          (unsigned int)v19,
          a3,
          a4,
          *(_DWORD *)(a5 + 24),
          (__int64)v11);
  v13 = Stoullx(v19, &v17, v12, &v16);
  if ( v18[0] )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
    if ( v14 )
      (**v14)(v14, 1LL);
  }
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a4);
  if ( !*(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( *(_QWORD *)a4 )
LABEL_12:
    *a6 |= 1u;
LABEL_13:
  if ( v17 == v19 || v16 )
    *a6 |= 2u;
  else
    *a7 = v13;
  *a2 = *(_OWORD *)a3;
  return a2;
}
