/*
 * XREFs of ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x180007D78
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180005D20 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180006188 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 * Callees:
 *     ??1_bstr_t@@QEAA@XZ @ 0x180008E8C (--1_bstr_t@@QEAA@XZ.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180008EFC (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x180019AA0 (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 *     ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x18001A1A4 (-_Tidy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_BOOL8 __fastcall TaskbarLayoutPolicyManager::IsOverrideLayout(const unsigned __int16 **this, struct IXMLDOMNode *a2)
{
  bool v3; // bl
  __int64 v4; // rdx
  unsigned __int64 v5; // r9
  const wchar_t *v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  const wchar_t *v9; // r10
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  BOOL v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int128 v18; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19; // [rsp+68h] [rbp+28h] BYREF
  char v20; // [rsp+70h] [rbp+30h] BYREF

  v19 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
         &v19) < 0 )
  {
LABEL_26:
    v13 = 0;
    goto LABEL_27;
  }
  v18 = 0LL;
  _bstr_t::_bstr_t((_bstr_t *)&v20, this[14]);
  v3 = (int)StartLayout::GetStringAttributeValue(v19, &v20, &v18) >= 0;
  _bstr_t::~_bstr_t((_bstr_t *)&v20);
  if ( !v3 )
  {
    if ( *((_QWORD *)&v18 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v15 = *((_QWORD *)&v18 + 1);
        LOBYTE(v4) = 1;
        std::wstring::_Tidy(*((_QWORD *)&v18 + 1) + 16LL, v4, 0LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)&v18 + 1) + 16LL))(*((_QWORD *)&v18 + 1), 1LL);
      }
    }
    goto LABEL_26;
  }
  v5 = aReplace[0] != 0 ? 7 : 0;
  v6 = (const wchar_t *)v18;
  v7 = *(_QWORD *)(v18 + 16);
  if ( *(_QWORD *)(v18 + 24) >= 8uLL )
    v6 = *(const wchar_t **)v18;
  v8 = aReplace[0] != 0 ? 7 : 0;
  if ( v7 < v5 )
    v8 = *(_QWORD *)(v18 + 16);
  if ( v8 )
  {
    v9 = L"Replace";
    while ( *v6 == *v9 )
    {
      ++v6;
      ++v9;
      if ( !--v8 )
        goto LABEL_13;
    }
    v10 = *v6 < *v9 ? -1 : 1;
  }
  else
  {
LABEL_13:
    v10 = 0;
  }
  v11 = v10;
  v12 = v7 != v5;
  if ( v7 < v5 )
    v12 = -1;
  if ( v11 )
    v12 = v11;
  v13 = v12 == 0;
  if ( *((_QWORD *)&v18 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL)) )
    {
      v14 = *((_QWORD *)&v18 + 1);
      LOBYTE(v8) = 1;
      std::wstring::_Tidy(*((_QWORD *)&v18 + 1) + 16LL, v8, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)&v18 + 1) + 16LL))(*((_QWORD *)&v18 + 1), 1LL);
    }
  }
LABEL_27:
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v13;
}
