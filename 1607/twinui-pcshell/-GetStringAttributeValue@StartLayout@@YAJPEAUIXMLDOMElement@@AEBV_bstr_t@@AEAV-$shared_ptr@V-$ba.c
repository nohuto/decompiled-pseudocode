/*
 * XREFs of ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x180019AA0
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x180007D78 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18000AF4C (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2@@Z @ 0x18001A660 (-ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180003D64 (-_com_issue_error@@YAXJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEAG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEAG@Z @ 0x180019CE0 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEAG@std@@YA-AV-.c)
 *     ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x18001A1A4 (-_Tidy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall StartLayout::GetStringAttributeValue(__int64 a1, __int64 **a2, _QWORD *a3)
{
  __int64 **v4; // rsi
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  bool v11; // zf
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v17; // [rsp+30h] [rbp-40h]
  volatile signed __int32 *v18; // [rsp+40h] [rbp-30h]
  _BYTE v19[8]; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int32 *v20; // [rsp+50h] [rbp-20h]
  VARIANTARG pvarg; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v4 = a2;
  v18 = (volatile signed __int32 *)a3[1];
  a3[1] = 0LL;
  *a3 = 0LL;
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a2) = 1;
      std::wstring::_Tidy(v18 + 4, a2, 0LL);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 16LL))(v18, 1LL);
    }
  }
  VariantInit(&pvarg);
  if ( *v4 )
    v6 = **v4;
  else
    v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, VARIANTARG *))(*(_QWORD *)a1 + 352LL))(a1, v6, &pvarg);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 64LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\xmlhelpers.cpp",
      (const char *)v9);
    goto LABEL_29;
  }
  if ( pvarg.vt == 1 )
  {
    v8 = -2147023728;
    goto LABEL_29;
  }
  v11 = pvarg.vt == 8;
  if ( pvarg.vt != 8 )
  {
    if ( VariantChangeType(&pvarg, &pvarg, 0, 8u) < 0 )
      _com_issue_error();
    v11 = pvarg.vt == 8;
  }
  if ( !v11 )
  {
    v8 = -2147418113;
    v9 = 2147549183LL;
    v10 = 68LL;
    goto LABEL_18;
  }
  v12 = (__int64 *)std::make_shared<std::wstring,unsigned short * &>(v19, &pvarg.decVal.Lo32);
  v13 = *v12;
  v14 = v12[1];
  *v12 = 0LL;
  v12[1] = 0LL;
  v17 = (volatile signed __int32 *)a3[1];
  a3[1] = v14;
  *a3 = v13;
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(v13) = 1;
      std::wstring::_Tidy(v17 + 4, v13, 0LL);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 16LL))(v17, 1LL);
    }
  }
  v15 = v20;
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(v13) = 1;
      std::wstring::_Tidy(v15 + 4, v13, 0LL);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
      {
        if ( v15 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 16LL))(v15, 1LL);
      }
    }
  }
  v8 = 0;
LABEL_29:
  if ( VariantClear(&pvarg) < 0 )
    _com_issue_error();
  return v8;
}
