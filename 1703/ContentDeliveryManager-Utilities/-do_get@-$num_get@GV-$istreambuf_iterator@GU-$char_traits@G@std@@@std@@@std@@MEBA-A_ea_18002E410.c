/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAI@Z @ 0x18002E410
 * Callers:
 *     <none>
 * Callees:
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x1800238E4 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x18002F7D8 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x180032F38 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _Stoulx @ 0x18006AB5C (_Stoulx.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        int a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        int *a7)
{
  _QWORD *v11; // rdx
  unsigned int v12; // ebx
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char *v14; // rdi
  int v15; // ebx
  int v17; // [rsp+30h] [rbp-51h] BYREF
  __int64 v18; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-41h] BYREF
  char v20; // [rsp+50h] [rbp-31h] BYREF
  char v21; // [rsp+51h] [rbp-30h] BYREF

  v19[1] = -2LL;
  v17 = 0;
  v11 = std::ios_base::getloc(a5, &v18);
  v12 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
          a1,
          (unsigned int)&v20,
          (_DWORD)a3,
          a4,
          *(_DWORD *)(a5 + 24),
          (__int64)v11);
  if ( v18 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v14 = &v21;
  if ( v20 != 45 )
    v14 = &v20;
  v15 = Stoulx(v14, v19, v12, &v17);
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *a6 |= 1u;
  if ( (char *)v19[0] == v14 || v17 )
  {
    *a6 |= 2u;
  }
  else
  {
    if ( v20 == 45 )
      v15 = -v15;
    *a7 = v15;
  }
  *a2 = *a3;
  return a2;
}
