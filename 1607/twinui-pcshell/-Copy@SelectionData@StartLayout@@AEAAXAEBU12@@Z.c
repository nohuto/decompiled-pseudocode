/*
 * XREFs of ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x180009F48
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18000A1E0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     _lambda_403eb64f09a73babfd6e65f383c20483_::operator() @ 0x18000A894 (_lambda_403eb64f09a73babfd6e65f383c20483_--operator().c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18000C274 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     ??$construct@UParsedTaskbarLayout@@U1@@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@$$QEAU2@@Z @ 0x18000C538 (--$construct@UParsedTaskbarLayout@@U1@@-$_Wrap_alloc@V-$allocator@UParsedTaskbarLayout@@@std@@@s.c)
 * Callees:
 *     ?push_back@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18000B788 (-push_back@-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@st.c)
 *     ?push_back@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z @ 0x18000B988 (-push_back@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z.c)
 */

void __fastcall StartLayout::SelectionData::Copy(
        StartLayout::SelectionData *this,
        const struct StartLayout::SelectionData *a2)
{
  _QWORD *v2; // r15
  __int64 v5; // rdi
  LPVOID *v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // rbp
  const WCHAR **v9; // rbx
  unsigned __int64 v10; // rdi
  const WCHAR *v11; // rcx
  __int64 v12; // rdi
  __int64 i; // rbp
  LPWSTR ppwsz; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 8);
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 1);
  v5 = 0LL;
  *((_BYTE *)this + 2) = *((_BYTE *)a2 + 2);
  *((_BYTE *)this + 3) = *((_BYTE *)a2 + 3);
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_BYTE *)this + 5) = *((_BYTE *)a2 + 5);
  v6 = (LPVOID *)*((_QWORD *)this + 1);
  v7 = (unsigned __int64)(*((_QWORD *)this + 2) - (_QWORD)v6 + 7LL) >> 3;
  if ( (unsigned __int64)v6 > *((_QWORD *)this + 2) )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      CoTaskMemFree(*v6);
      ++v5;
      ++v6;
    }
    while ( v5 != v7 );
  }
  v8 = 0LL;
  v2[1] = *v2;
  v9 = (const WCHAR **)*((_QWORD *)a2 + 1);
  v10 = (unsigned __int64)(*((_QWORD *)a2 + 2) - (_QWORD)v9 + 7LL) >> 3;
  if ( (unsigned __int64)v9 > *((_QWORD *)a2 + 2) )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = *v9;
      ppwsz = 0LL;
      if ( SHStrDupW(v11, &ppwsz) >= 0 )
        std::vector<unsigned short *>::push_back(v2, &ppwsz);
      ++v9;
      ++v8;
    }
    while ( v8 != v10 );
  }
  *((_QWORD *)this + 5) = *((_QWORD *)this + 4);
  v12 = *((_QWORD *)a2 + 5);
  for ( i = *((_QWORD *)a2 + 4); i != v12; i += 4LL )
    std::vector<enum SharedStartModel::LayoutSKU>::push_back((char *)this + 32, i);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_BYTE *)this + 60) = *((_BYTE *)a2 + 60);
  *((_BYTE *)this + 61) = *((_BYTE *)a2 + 61);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
}
