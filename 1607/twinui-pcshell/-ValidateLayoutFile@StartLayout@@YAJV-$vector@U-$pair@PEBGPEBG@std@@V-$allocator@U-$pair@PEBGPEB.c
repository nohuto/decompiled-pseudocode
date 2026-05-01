/*
 * XREFs of ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180019188
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800079AC (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180007A88 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180003D64 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180008368 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@IEAAXXZ @ 0x180008414 (-_Tidy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@IEAAXXZ.c)
 *     ??1_bstr_t@@QEAA@XZ @ 0x180008E8C (--1_bstr_t@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180018F54 (-AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001964C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x1800197E8 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002EE60 (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002FDD4 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall StartLayout::ValidateLayoutFile(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        bool a3)
{
  _QWORD *v5; // r14
  unsigned __int16 *v6; // rsi
  HRESULT Instance; // eax
  struct IXMLDOMSchemaCollection *v8; // r9
  int v9; // edi
  __int64 v10; // rdx
  unsigned __int16 *v11; // rcx
  __int64 i; // rbx
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rbx
  unsigned __int16 *v19; // rax
  unsigned __int16 *v20; // r14
  int v21; // eax
  __int64 v22; // rcx
  void (*v23)(void); // rax
  __int64 v24; // rax
  int v25; // ebx
  CHAR *v26; // rax
  unsigned int v27; // edi
  void *v28; // rdx
  unsigned int v29; // r8d
  const char *v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int ppv; // [rsp+28h] [rbp-59h]
  const char *cbMultiByte; // [rsp+30h] [rbp-51h]
  const char *cbMultiBytea; // [rsp+30h] [rbp-51h]
  __int64 v39; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int16 *v40; // [rsp+50h] [rbp-31h]
  __int64 v41; // [rsp+58h] [rbp-29h]
  _QWORD *v42; // [rsp+60h] [rbp-21h]
  VARIANTARG pvarg; // [rsp+68h] [rbp-19h] BYREF
  VARIANTARG v44[3]; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  __int64 v46; // [rsp+F8h] [rbp+77h] BYREF
  unsigned __int16 *v47; // [rsp+100h] [rbp+7Fh] BYREF

  v41 = -2LL;
  v5 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         v44,
         a1,
         a3);
  v42 = v5;
  v6 = 0LL;
  v40 = 0LL;
  v47 = 0LL;
  Instance = CoCreateInstance(
               &GUID_88d96a07_f192_11d4_a65f_0040963251e5,
               0LL,
               1u,
               &GUID_373984c8_b845_449b_91e7_45ac83036ade,
               (LPVOID *)&v47);
  v9 = Instance;
  if ( Instance >= 0 )
  {
    for ( i = *v5; i != v5[1]; i += 16LL )
    {
      Instance = StartLayout::AddSchemaToCollection(*(StartLayout **)i, *(const unsigned __int16 **)(i + 8), v47, v8);
      v9 = Instance;
      if ( Instance < 0 )
      {
        v10 = 419LL;
        goto LABEL_3;
      }
    }
    v6 = v47;
    if ( v47 )
    {
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v47 + 8LL))(v47);
      v6 = v47;
    }
    v40 = v6;
    if ( v6 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy((__int64)v5);
    v9 = 0;
  }
  else
  {
    v10 = 415LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)Instance);
    v11 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy((__int64)v5);
  }
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AE,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v9);
LABEL_46:
    if ( v6 )
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v6 + 16LL))(v6);
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy((__int64)a1);
    return (unsigned int)v9;
  }
  v46 = 0LL;
  v13 = (**a2)(a2, &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60, &v46);
  v9 = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v15 = 434LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v14);
    goto LABEL_44;
  }
  pvarg.vt = 9;
  pvarg.llVal = (LONGLONG)v6;
  if ( v6 )
    (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v6 + 8LL))(v6);
  v44[0] = pvarg;
  v9 = (*(__int64 (__fastcall **)(__int64, VARIANTARG *))(*(_QWORD *)v46 + 624LL))(v46, v44);
  if ( VariantClear(&pvarg) < 0 )
    _com_issue_error();
  if ( v9 < 0 )
  {
    v14 = (unsigned int)v9;
    v15 = 435LL;
    goto LABEL_21;
  }
  v39 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v46 + 632LL))(v46, &v39);
  v17 = v16;
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B6,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v16);
  if ( v17 == 1 )
  {
    v47 = 0LL;
    v18 = v39;
    v19 = (unsigned __int16 *)operator new(0x18uLL);
    v20 = v19;
    v47 = v19;
    if ( v19 )
    {
      *((_QWORD *)v19 + 1) = 0LL;
      *((_DWORD *)v19 + 4) = 1;
      *(_QWORD *)v19 = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
    v47 = v20;
    if ( !v20 )
      _com_issue_error();
    v21 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v18 + 72LL))(v18, v20);
    v9 = v21;
    if ( v21 >= 0 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( *(_WORD *)(*(_QWORD *)v20 + 2 * v24) );
      v25 = 2 * v24 + 2;
      v26 = (CHAR *)operator new[](v25);
      v27 = (unsigned int)v26;
      WideCharToMultiByte(0, 0x400u, *(LPCWCH *)v20, -1, v26, v25, 0LL, 0LL);
      wil::details::in1diag3::Log_Win32Msg(
        retaddr,
        (void *)0x1C1,
        (unsigned int)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
        (const char *)0x5B9,
        (unsigned int)"Error parsing layout file",
        cbMultiByte);
      wil::details::in1diag3::Log_Win32Msg(
        retaddr,
        (void *)0x1C2,
        (unsigned int)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
        (const char *)0x5B9,
        v27,
        cbMultiBytea);
      v9 = wil::details::in1diag3::Return_Win32(retaddr, v28, v29, v30, ppv);
      _bstr_t::~_bstr_t((_bstr_t *)&v47);
      v31 = v39;
      if ( !v39 )
      {
LABEL_44:
        v32 = v46;
        if ( v46 )
        {
          v46 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
        goto LABEL_46;
      }
      v39 = 0LL;
      v23 = *(void (**)(void))(*(_QWORD *)v31 + 16LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BB,
        (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
        (const char *)(unsigned int)v21);
      _bstr_t::~_bstr_t((_bstr_t *)&v47);
      v22 = v39;
      if ( !v39 )
        goto LABEL_44;
      v39 = 0LL;
      v23 = *(void (**)(void))(*(_QWORD *)v22 + 16LL);
    }
    v23();
    goto LABEL_44;
  }
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C5,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v17);
  v34 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  if ( v6 )
    (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v6 + 16LL))(v6);
  std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy((__int64)a1);
  return (unsigned int)v17;
}
