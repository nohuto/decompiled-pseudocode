/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAI@Z @ 0x1800152D0
 * Callers:
 *     <none>
 * Callees:
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18000B058 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180016658 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Peek@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEBAGXZ @ 0x180018474 (-_Peek@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEBAGXZ.c)
 *     _Stoulx @ 0x180024174 (_Stoulx.c)
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
        int *a7)
{
  _QWORD *v11; // rdx
  unsigned int v12; // r13d
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char *v14; // rdi
  int v15; // ebx
  int v17; // [rsp+30h] [rbp-51h] BYREF
  char *v18; // [rsp+38h] [rbp-49h] BYREF
  int *v19; // [rsp+40h] [rbp-41h]
  _QWORD v20[2]; // [rsp+48h] [rbp-39h] BYREF
  char v21; // [rsp+58h] [rbp-29h] BYREF
  char v22; // [rsp+59h] [rbp-28h] BYREF

  v20[1] = -2LL;
  v19 = a7;
  v17 = 0;
  v11 = std::ios_base::getloc(a5, v20);
  v12 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
          a1,
          (unsigned int)&v21,
          a3,
          a4,
          *(_DWORD *)(a5 + 24),
          (__int64)v11);
  if ( v20[0] )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v14 = &v22;
  if ( v21 != 45 )
    v14 = &v21;
  v15 = Stoulx(v14, &v18, v12, &v17);
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a4);
  if ( !*(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( *(_QWORD *)a4 )
LABEL_14:
    *a6 |= 1u;
LABEL_15:
  if ( v18 == v14 || v17 )
  {
    *a6 |= 2u;
  }
  else
  {
    if ( v21 == 45 )
      v15 = -v15;
    *v19 = v15;
  }
  *a2 = *(_OWORD *)a3;
  return a2;
}
