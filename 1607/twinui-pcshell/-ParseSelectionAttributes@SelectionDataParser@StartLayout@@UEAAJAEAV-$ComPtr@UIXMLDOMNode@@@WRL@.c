/*
 * XREFs of ?ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2@@Z @ 0x18001A660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?push_back@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z @ 0x18000B988 (-push_back@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBoolAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x180019874 (-GetBoolAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z.c)
 *     ?GetUintAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180019994 (-GetUintAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x180019AA0 (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 *     ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x18001A1A4 (-_Tidy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_N_K@Z.c)
 *     ?ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z @ 0x18001A9B4 (-ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z.c)
 *     ??$ParseTokenizedAttribute@V_lambda_90e6f0723618cb3436a38cb4841dd480_@@@StartLayout@@YAXPEBGV_lambda_90e6f0723618cb3436a38cb4841dd480_@@@Z @ 0x18001AC50 (--$ParseTokenizedAttribute@V_lambda_90e6f0723618cb3436a38cb4841dd480_@@@StartLayout@@YAXPEBGV_la.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall StartLayout::SelectionDataParser::ParseSelectionAttributes(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // esi
  unsigned int *v7; // r9
  const WCHAR *v8; // rcx
  wchar_t *i; // rcx
  int v10; // eax
  wchar_t *v11; // rax
  StartLayout::SelectionDataParser *v12; // rcx
  bool *v13; // r9
  const WCHAR *v14; // rcx
  wchar_t *j; // rcx
  wchar_t *v16; // rax
  bool *v17; // r9
  const WCHAR *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rbx
  StartLayout *v22; // rcx
  StartLayout *v24; // [rsp+28h] [rbp-59h] BYREF
  int v25; // [rsp+30h] [rbp-51h] BYREF
  LPWSTR ppwsz; // [rsp+38h] [rbp-49h] BYREF
  LPWSTR v27; // [rsp+40h] [rbp-41h] BYREF
  wchar_t *Context; // [rsp+48h] [rbp-39h] BYREF
  LPWSTR v29; // [rsp+50h] [rbp-31h] BYREF
  wchar_t *v30; // [rsp+58h] [rbp-29h] BYREF
  LPWSTR v31[2]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v32; // [rsp+78h] [rbp-9h] BYREF
  __int128 v33; // [rsp+88h] [rbp+7h] BYREF
  __int128 v34; // [rsp+98h] [rbp+17h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+27h]
  __int128 v36; // [rsp+B8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  char v38; // [rsp+F0h] [rbp+6Fh] BYREF
  char v39; // [rsp+100h] [rbp+7Fh] BYREF

  v35 = -2LL;
  v24 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, StartLayout **))*a2)(
         *a2,
         &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
         &v24);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v34 = 0LL;
    if ( (int)StartLayout::GetStringAttributeValue((__int64)v24, (__int64 **)(a1 + 56), &v34) >= 0 )
    {
      v8 = (const WCHAR *)v34;
      if ( *(_QWORD *)(v34 + 24) >= 8uLL )
        v8 = *(const WCHAR **)v34;
      ppwsz = 0LL;
      if ( SHStrDupW(v8, &ppwsz) >= 0 )
      {
        Context = 0LL;
        for ( i = ppwsz; ; i = 0LL )
        {
          v11 = wcstok_s(i, L"|", &Context);
          if ( !v11 )
            break;
          v10 = StartLayout::SelectionDataParser::ParseSKUAttributeValue(
                  v12,
                  v11,
                  (struct StartLayout::SelectionData *)a3);
          if ( v10 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x49,
              (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\selectiondataparser.cpp",
              (const char *)(unsigned int)v10);
        }
        CoTaskMemFree(ppwsz);
      }
    }
    if ( (int)StartLayout::GetUintAttributeValue(
                v24,
                (struct IXMLDOMElement *)(a1 + 16),
                (const struct _bstr_t *)&v25,
                v7) >= 0 )
    {
      *(_DWORD *)(a3 + 56) = v25;
      *(_BYTE *)(a3 + 1) = 1;
    }
    v33 = 0LL;
    if ( (int)StartLayout::GetStringAttributeValue((__int64)v24, (__int64 **)(a1 + 32), &v33) >= 0 )
    {
      v14 = (const WCHAR *)v33;
      if ( *(_QWORD *)(v33 + 24) >= 8uLL )
        v14 = *(const WCHAR **)v33;
      v27 = 0LL;
      if ( SHStrDupW(v14, &v27) >= 0 )
      {
        v30 = 0LL;
        for ( j = v27; ; j = 0LL )
        {
          v16 = wcstok_s(j, L"|", &v30);
          if ( !v16 )
            break;
          v29 = 0LL;
          if ( SHStrDupW(v16, &v29) >= 0 )
          {
            std::vector<unsigned short *>::push_back((_QWORD *)(a3 + 8), &v29);
            *(_BYTE *)a3 = 1;
          }
        }
        CoTaskMemFree(v27);
      }
    }
    if ( (int)StartLayout::GetBoolAttributeValue(
                v24,
                (struct IXMLDOMElement *)(a1 + 24),
                (const struct _bstr_t *)&v38,
                v13) >= 0 )
    {
      *(_BYTE *)(a3 + 61) = v38;
      *(_BYTE *)(a3 + 4) = 1;
    }
    if ( (int)StartLayout::GetBoolAttributeValue(
                v24,
                (struct IXMLDOMElement *)(a1 + 40),
                (const struct _bstr_t *)&v39,
                v17) >= 0 )
    {
      *(_BYTE *)(a3 + 60) = v39;
      *(_BYTE *)(a3 + 2) = 1;
    }
    v32 = 0LL;
    if ( (int)StartLayout::GetStringAttributeValue((__int64)v24, (__int64 **)(a1 + 48), &v32) >= 0 )
    {
      v31[0] = (LPWSTR)a1;
      v31[1] = (LPWSTR)a3;
      v36 = *(_OWORD *)v31;
      v18 = (const WCHAR *)v32;
      if ( *(_QWORD *)(v32 + 24) >= 8uLL )
        v18 = *(const WCHAR **)v32;
      v31[0] = 0LL;
      if ( SHStrDupW(v18, v31) >= 0 )
        StartLayout::ParseTokenizedAttribute<_lambda_90e6f0723618cb3436a38cb4841dd480_>(&v36, v31);
    }
    v6 = 0;
    if ( *((_QWORD *)&v32 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v19 = *((_QWORD *)&v32 + 1);
        std::wstring::_Tidy((void **)(*((_QWORD *)&v32 + 1) + 16LL), 1, 0LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)&v32 + 1) + 16LL))(*((_QWORD *)&v32 + 1), 1LL);
      }
    }
    if ( *((_QWORD *)&v33 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v20 = *((_QWORD *)&v33 + 1);
        std::wstring::_Tidy((void **)(*((_QWORD *)&v33 + 1) + 16LL), 1, 0LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)&v33 + 1) + 16LL))(*((_QWORD *)&v33 + 1), 1LL);
      }
    }
    if ( *((_QWORD *)&v34 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v21 = *((_QWORD *)&v34 + 1);
        std::wstring::_Tidy((void **)(*((_QWORD *)&v34 + 1) + 16LL), 1, 0LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)&v34 + 1) + 16LL))(*((_QWORD *)&v34 + 1), 1LL);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\selectiondataparser.cpp",
      (const char *)(unsigned int)v5);
  }
  v22 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(StartLayout *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v6;
}
