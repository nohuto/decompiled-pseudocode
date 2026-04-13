/*
 * XREFs of ??0?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@_N@Z @ 0x1800276C4
 * Callers:
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180024E0C (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1800376BC (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18001C28C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18001C348 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180029768 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800538BC (--2@YAPEAX_K@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800545F0 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::basic_istream<unsigned short>::basic_istream<unsigned short>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  void (__fastcall ***v9)(_QWORD, __int64); // r8
  void (__fastcall ***v10)(_QWORD, __int64); // rax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h]

  v13 = 0;
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_istream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 24;
  a1[1] = 0LL;
  v4 = (__int64)a1 + *(int *)(*a1 + 4LL);
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 513;
  *(_QWORD *)(v4 + 32) = 6LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  std::ios_base::clear((std::ios_base *)v4, 0, 0);
  v5 = operator new(8uLL);
  if ( v5 )
    *v5 = std::locale::_Init(1);
  else
    v5 = 0LL;
  *(_QWORD *)(v4 + 64) = v5;
  *(_QWORD *)(v4 + 72) = a2;
  *(_QWORD *)(v4 + 80) = 0LL;
  v6 = std::ios_base::getloc(v4, &v12);
  v8 = std::use_facet<std::ctype<unsigned short>>(v6);
  if ( v12 )
  {
    v10 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v9 = v10;
    if ( v10 )
      (**v10)(v10, 1LL);
  }
  LOBYTE(v7) = 32;
  *(_WORD *)(v4 + 88) = (*(__int64 (__fastcall **)(__int64, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v8 + 96LL))(
                          v8,
                          v7,
                          v9);
  if ( !*(_QWORD *)(v4 + 72) )
    std::ios_base::clear((std::ios_base *)v4, *(_BYTE *)(v4 + 16) | 4, 0);
  return a1;
}
