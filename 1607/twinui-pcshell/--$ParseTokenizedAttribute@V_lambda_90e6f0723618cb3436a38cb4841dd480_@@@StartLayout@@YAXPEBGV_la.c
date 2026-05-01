/*
 * XREFs of ??$ParseTokenizedAttribute@V_lambda_90e6f0723618cb3436a38cb4841dd480_@@@StartLayout@@YAXPEBGV_lambda_90e6f0723618cb3436a38cb4841dd480_@@@Z @ 0x18001AC50
 * Callers:
 *     ?ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2@@Z @ 0x18001A660 (-ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall StartLayout::ParseTokenizedAttribute<_lambda_90e6f0723618cb3436a38cb4841dd480_>(
        __int64 a1,
        wchar_t **a2)
{
  wchar_t *i; // rdi
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  wchar_t *Context; // [rsp+60h] [rbp+18h] BYREF

  Context = 0LL;
  for ( i = wcstok_s(*a2, L"|", &Context); i; i = wcstok_s(0LL, L"|", &Context) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( CompareStringOrdinal(i, -1, L"4GBFeaturesOnSystem", -1, 1) == 2 )
    {
      *(_DWORD *)(v5 + 64) = 1;
    }
    else if ( CompareStringOrdinal(i, -1, L"8GBFeaturesOnSystem", -1, 1) == 2 )
    {
      *(_DWORD *)(v5 + 64) = 2;
    }
    else
    {
      if ( CompareStringOrdinal(i, -1, L"16GBFeaturesOnSystem", -1, 1) != 2 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBC,
          (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\selectiondataparser.cpp",
          (const char *)0xC00CE225LL);
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x72,
          (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\selectiondataparser.cpp",
          (const char *)0xC00CE225LL);
        continue;
      }
      *(_DWORD *)(v5 + 64) = 3;
    }
    *(_BYTE *)(v5 + 5) = 1;
  }
  CoTaskMemFree(*a2);
}
