/*
 * XREFs of ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18000AF4C
 * Callers:
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18000ABFC (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_bstr_t@@QEAA@XZ @ 0x180008E8C (--1_bstr_t@@QEAA@XZ.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180008EFC (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x180019AA0 (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 *     ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x18001A1A4 (-_Tidy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_N_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TaskbarLayoutParser::ParsePinnedAppNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct ITaskbarLayoutItem **a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  char v12; // bl
  char v13; // di
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  bool v17; // bl
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct ITaskbarLayoutItem *v22; // rcx
  struct ITaskbarLayoutItem *v24; // [rsp+28h] [rbp-58h] BYREF
  __int64 v25; // [rsp+30h] [rbp-50h] BYREF
  __int128 v26; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v27[8]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v28[8]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v29[8]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v30; // [rsp+60h] [rbp-20h] BYREF
  __int64 v31; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v33; // [rsp+C8h] [rbp+48h] BYREF

  v31 = -2LL;
  *a3 = 0LL;
  v24 = 0LL;
  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
      (const char *)0x8007000ELL);
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_45;
  }
  *(_QWORD *)v6 = &Microsoft::WRL::ChainInterfaces<ITaskbarLayoutItemInternal,ITaskbarLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v6[3] = 1;
  *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<ITaskbarLayoutItemInternal,ITaskbarLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v6 = &TaskbarLayoutItem::`vftable';
  *((_QWORD *)v6 + 2) = 0LL;
  *((_QWORD *)v6 + 3) = 0LL;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_QWORD *)v6 + 5) = 0LL;
  *((_QWORD *)v6 + 6) = 0LL;
  *((_QWORD *)v6 + 7) = 0LL;
  v6[16] = 0;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, struct ITaskbarLayoutItem **))v7)(
         v7,
         &GUID_8a2a3037_d907_4af5_996a_0262e73bbe8f,
         &v24);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
      (const char *)(unsigned int)v8);
  if ( v7 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v9 < 0 )
    goto LABEL_44;
  v25 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(struct ITaskbarLayoutItem *, GUID *, __int64 *))v24)(
          v24,
          &GUID_983d5c32_6534_4fa1_8383_a8430e19de76,
          &v25);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v33 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
            &v33);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v11);
LABEL_39:
      v20 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_41;
    }
    v26 = 0LL;
    v30 = 0LL;
    _bstr_t::_bstr_t((_bstr_t *)v28, this[2]);
    v12 = 1;
    if ( (int)StartLayout::GetStringAttributeValue(v33, v28, &v26) >= 0
      || (_bstr_t::_bstr_t((_bstr_t *)v27, this[3]),
          v12 = 3,
          v13 = 0,
          (int)StartLayout::GetStringAttributeValue(v33, v27, &v26) >= 0) )
    {
      v13 = 1;
    }
    if ( (v12 & 2) != 0 )
    {
      v12 &= ~2u;
      _bstr_t::~_bstr_t((_bstr_t *)v27);
    }
    if ( (v12 & 1) != 0 )
      _bstr_t::~_bstr_t((_bstr_t *)v28);
    if ( v13 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 48LL))(v25);
      v9 = v14;
      if ( v14 < 0 )
      {
        v16 = 212LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
          (const char *)(unsigned int)v14);
        goto LABEL_31;
      }
    }
    else
    {
      _bstr_t::_bstr_t((_bstr_t *)v29, this[4]);
      v17 = (int)StartLayout::GetStringAttributeValue(v33, v29, &v30) >= 0;
      _bstr_t::~_bstr_t((_bstr_t *)v29);
      if ( !v17 )
      {
        v9 = -2147467259;
LABEL_31:
        if ( *((_QWORD *)&v30 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v18 = *((_QWORD *)&v30 + 1);
            LOBYTE(v15) = 1;
            std::wstring::_Tidy(*((_QWORD *)&v30 + 1) + 16LL, v15, 0LL);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)&v30 + 1) + 16LL))(*((_QWORD *)&v30 + 1), 1LL);
          }
        }
        if ( *((_QWORD *)&v26 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v19 = *((_QWORD *)&v26 + 1);
            LOBYTE(v15) = 1;
            std::wstring::_Tidy(*((_QWORD *)&v26 + 1) + 16LL, v15, 0LL);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)&v26 + 1) + 16LL))(*((_QWORD *)&v26 + 1), 1LL);
          }
        }
        goto LABEL_39;
      }
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 56LL))(v25);
      v9 = v14;
      if ( v14 < 0 )
      {
        v16 = 216LL;
        goto LABEL_26;
      }
    }
    if ( v24 )
      (*(void (__fastcall **)(struct ITaskbarLayoutItem *))(*(_QWORD *)v24 + 8LL))(v24);
    *a3 = v24;
    v9 = 0;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCB,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
    (const char *)(unsigned int)v10);
LABEL_41:
  v21 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
LABEL_45:
  v22 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct ITaskbarLayoutItem *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return (unsigned int)v9;
}
