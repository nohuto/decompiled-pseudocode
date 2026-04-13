/*
 * XREFs of ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x1800615F8
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x180060CD8 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002382C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x1800238E4 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180064740 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x18006A6D0 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x18006B188 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     memcpy_0 @ 0x18006F914 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::wistringstream::wistringstream(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  void (__fastcall ***v9)(_QWORD, __int64); // r8
  __int64 v10; // r14
  void (__fastcall ***v11)(_QWORD, __int64); // rax
  _QWORD *v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // r14
  void *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF
  int v20; // [rsp+88h] [rbp+20h]

  *(_QWORD *)a1 = &std::wistringstream::`vbtable';
  *(_QWORD *)(a1 + 144) = &std::wios::`vftable';
  v20 = 1;
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_istream<unsigned short>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 24;
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
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
  v6 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(v4 + 72) = a1 + 16;
  *(_QWORD *)(v4 + 80) = 0LL;
  v7 = std::ios_base::getloc(v4, &v19);
  v10 = std::use_facet<std::ctype<wchar_t>>(v7);
  if ( v19 )
  {
    v11 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v9 = v11;
    if ( v11 )
      (**v11)(v11, 1LL);
  }
  LOBYTE(v8) = 32;
  *(_WORD *)(v4 + 88) = (*(__int64 (__fastcall **)(__int64, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v10 + 96LL))(
                          v10,
                          v8,
                          v9);
  if ( !*(_QWORD *)(v4 + 72) )
    std::ios_base::clear((std::ios_base *)v4, *(_BYTE *)(v4 + 16) | 4, 0);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_istringstream<unsigned short>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 144;
  *v6 = &std::wstreambuf::`vftable';
  v12 = operator new(8uLL);
  if ( v12 )
    *v12 = std::locale::_Init(1);
  else
    v12 = 0LL;
  *(_QWORD *)(a1 + 112) = v12;
  *(_QWORD *)(a1 + 40) = a1 + 24;
  *(_QWORD *)(a1 + 48) = a1 + 32;
  *(_QWORD *)(a1 + 72) = a1 + 56;
  *(_QWORD *)(a1 + 80) = a1 + 64;
  *(_QWORD *)(a1 + 96) = a1 + 88;
  *(_QWORD *)(a1 + 104) = a1 + 92;
  *(_QWORD *)(a1 + 32) = 0LL;
  **(_QWORD **)(a1 + 80) = 0LL;
  **(_DWORD **)(a1 + 104) = 0;
  **(_QWORD **)(a1 + 40) = 0LL;
  **(_QWORD **)(a1 + 72) = 0LL;
  **(_DWORD **)(a1 + 96) = 0;
  *v6 = &std::basic_stringbuf<unsigned short>::`vftable';
  v13 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 2;
  if ( v13 )
  {
    if ( v13 > 0x7FFFFFFFFFFFFFFFLL || (v14 = 2 * v13, v15 = operator new(2 * v13), (v16 = (__int64)v15) == 0) )
      std::_Xbad_alloc();
    memcpy_0(v15, a2, 2 * v13);
    *(_QWORD *)(a1 + 120) = v14 + v16;
    if ( (*(_BYTE *)(a1 + 128) & 4) == 0 )
    {
      **(_QWORD **)(a1 + 40) = v16;
      **(_QWORD **)(a1 + 72) = v16;
      **(_DWORD **)(a1 + 96) = v13;
    }
    if ( (*(_BYTE *)(a1 + 128) & 2) == 0 )
    {
      v17 = v16;
      if ( (*(_BYTE *)(a1 + 128) & 0x10) != 0 )
        v17 = v14 + v16;
      **(_QWORD **)(a1 + 48) = v16;
      **(_QWORD **)(a1 + 80) = v17;
      **(_DWORD **)(a1 + 104) = (v16 + v14 - v17) >> 1;
      if ( !**(_QWORD **)(a1 + 72) )
      {
        **(_QWORD **)(a1 + 40) = v16;
        **(_QWORD **)(a1 + 72) = 0LL;
        **(_DWORD **)(a1 + 96) = v16 >> 1;
      }
    }
    *(_DWORD *)(a1 + 128) |= 1u;
  }
  return a1;
}
