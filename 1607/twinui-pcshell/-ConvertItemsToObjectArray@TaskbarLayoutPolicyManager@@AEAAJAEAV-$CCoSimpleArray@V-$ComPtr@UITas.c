/*
 * XREFs of ?ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x180007B8C
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x180005F90 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::ConvertItemsToObjectArray(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+70h] [rbp+18h]

  *a3 = 0LL;
  v18 = 0LL;
  v5 = -2147024882;
  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v19 = v6;
  if ( v6 )
  {
    *v6 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
    v6[1] = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
    v6[2] = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
    *((_DWORD *)v6 + 6) = 1;
    *((_DWORD *)v6 + 7) = 4;
    *((_DWORD *)v6 + 8) = 0;
    v6[5] = 0LL;
    v6[6] = 0LL;
    v6[7] = 0LL;
    v6[8] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7
    && (v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v7)(
               v7,
               &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
               &v18),
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7),
        v5 >= 0) )
  {
    v8 = *(_QWORD **)a2;
    v9 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
    while ( v8 != (_QWORD *)v9 )
    {
      v10 = (_QWORD *)*v8;
      v19 = v10;
      if ( v10 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v18 + 40LL))(v18, v10);
      v5 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x206,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v11);
        if ( v10 )
          (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
        goto LABEL_21;
      }
      if ( v10 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      ++v8;
    }
    v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v18)(
            v18,
            &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
            a3);
    v5 = v12;
    if ( v12 < 0 )
    {
      v13 = (unsigned int)v12;
      v14 = 520LL;
      goto LABEL_20;
    }
  }
  else
  {
    v13 = (unsigned int)v5;
    v14 = 515LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)v13);
  }
LABEL_21:
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v5;
}
