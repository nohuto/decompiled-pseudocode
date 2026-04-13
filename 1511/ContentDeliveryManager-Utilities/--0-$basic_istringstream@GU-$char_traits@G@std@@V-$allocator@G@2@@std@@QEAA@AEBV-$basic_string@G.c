/*
 * XREFs of ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180013D7C
 * Callers:
 *     ?GetImpressionEventExpirationTime@?A0x15bf3041@@YA_KPEBG0_K@Z @ 0x18000DE38 (-GetImpressionEventExpirationTime@-A0x15bf3041@@YA_KPEBG0_K@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18000AF9C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18000B058 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x1800188B4 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180022C48 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180022CC8 (--2@YAPEAX_K@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800230D0 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     memcpy_0 @ 0x1800280A8 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::basic_istringstream<unsigned short>::basic_istringstream<unsigned short>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  void (__fastcall ***v10)(_QWORD, __int64); // rax
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rdi
  signed __int64 v13; // rdi
  void *v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF
  int v20; // [rsp+88h] [rbp+20h]

  *(_QWORD *)a1 = &std::basic_istringstream<unsigned short>::`vbtable';
  *(_QWORD *)(a1 + 144) = &std::basic_ios<unsigned short>::`vftable';
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
  v9 = std::use_facet<std::ctype<unsigned short>>(v7);
  if ( v19 )
  {
    v10 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v10 )
      (**v10)(v10, 1LL);
  }
  LOBYTE(v8) = 32;
  *(_WORD *)(v4 + 88) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 96LL))(v9, v8);
  if ( !*(_QWORD *)(v4 + 72) )
    std::ios_base::clear((std::ios_base *)v4, *(_BYTE *)(v4 + 16) | 4, 0);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_istringstream<unsigned short>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 144;
  *v6 = &std::basic_streambuf<unsigned short>::`vftable';
  v11 = operator new(8uLL);
  if ( v11 )
    *v11 = std::locale::_Init(1);
  else
    v11 = 0LL;
  *(_QWORD *)(a1 + 112) = v11;
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
  v12 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 2;
  if ( v12 )
  {
    if ( v12 > 0x7FFFFFFFFFFFFFFFLL || (v13 = 2 * v12, v14 = operator new(v13), (v15 = (__int64)v14) == 0) )
      std::_Xbad_alloc();
    memcpy_0(v14, a2, v13);
    *(_QWORD *)(a1 + 120) = v13 + v15;
    if ( (*(_BYTE *)(a1 + 128) & 4) == 0 )
    {
      **(_QWORD **)(a1 + 40) = v15;
      **(_QWORD **)(a1 + 72) = v15;
      **(_DWORD **)(a1 + 96) = v13 >> 1;
    }
    v16 = *(_DWORD *)(a1 + 128);
    if ( (v16 & 2) == 0 )
    {
      v17 = v15;
      if ( (v16 & 0x10) != 0 )
        v17 = v13 + v15;
      **(_QWORD **)(a1 + 48) = v15;
      **(_QWORD **)(a1 + 80) = v17;
      **(_DWORD **)(a1 + 104) = (v15 + v13 - v17) >> 1;
      if ( !**(_QWORD **)(a1 + 72) )
      {
        **(_QWORD **)(a1 + 40) = v15;
        **(_QWORD **)(a1 + 72) = 0LL;
        **(_DWORD **)(a1 + 96) = v15 >> 1;
      }
    }
    *(_DWORD *)(a1 + 128) |= 1u;
  }
  return a1;
}
