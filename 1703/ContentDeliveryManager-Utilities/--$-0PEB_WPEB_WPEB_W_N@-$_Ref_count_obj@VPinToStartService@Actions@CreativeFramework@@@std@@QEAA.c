/*
 * XREFs of ??$?0PEB_WPEB_WPEB_W_N@?$_Ref_count_obj@VPinToStartService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00$$QEA_N@Z @ 0x18005A0CC
 * Callers:
 *     ??$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VPinToStartService@Actions@CreativeFramework@@@0@$$QEAPEB_W00$$QEA_N@Z @ 0x180059920 (--$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA-AV-$share.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>(
        __int64 a1,
        char **a2,
        char **a3,
        char **a4,
        char *a5)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  char v8; // r12
  char *v9; // rbp
  char *v10; // r15
  char *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
  v6 = a1 + 16;
  v7 = 0LL;
  if ( a1 != -16 )
  {
    v8 = *a5;
    v9 = *a4;
    v10 = *a3;
    v11 = *a2;
    *(_QWORD *)v6 = &CreativeFramework::Actions::PinToStartService::`vftable';
    v12 = (_QWORD *)(a1 + 24);
    *(_QWORD *)(v6 + 32) = 7LL;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_WORD *)(v6 + 8) = 0;
    v13 = -1LL;
    if ( *(_WORD *)v11 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)&v11[2 * v14] );
    }
    else
    {
      v14 = 0LL;
    }
    std::wstring::assign(v12, v11, v14);
    *(_QWORD *)(v6 + 64) = 7LL;
    *(_QWORD *)(v6 + 56) = 0LL;
    *(_WORD *)(v6 + 40) = 0;
    if ( *(_WORD *)v10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)&v10[2 * v15] );
    }
    else
    {
      v15 = 0LL;
    }
    std::wstring::assign((_QWORD *)(v6 + 40), v10, v15);
    *(_QWORD *)(v6 + 96) = 7LL;
    *(_QWORD *)(v6 + 88) = 0LL;
    *(_WORD *)(v6 + 72) = 0;
    if ( *(_WORD *)v9 )
    {
      do
        ++v13;
      while ( *(_WORD *)&v9[2 * v13] );
      v7 = v13;
    }
    std::wstring::assign((_QWORD *)(v6 + 72), v9, v7);
    *(_BYTE *)(v6 + 104) = v8;
  }
  return a1;
}
