/*
 * XREFs of ??$construct@UParsedTaskbarLayout@@U1@@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@$$QEAU2@@Z @ 0x18000C538
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18000A1E0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ??$_Uninit_move@PEAUParsedTaskbarLayout@@PEAU1@V?$allocator@UParsedTaskbarLayout@@@std@@U1@@std@@YAPEAUParsedTaskbarLayout@@PEAU1@00AEAU?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18000C7AC (--$_Uninit_move@PEAUParsedTaskbarLayout@@PEAU1@V-$allocator@UParsedTaskbarLayout@@@std@@U1@@std@.c)
 * Callees:
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x180009F48 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::construct<ParsedTaskbarLayout,ParsedTaskbarLayout>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int64 i; // rsi
  __int64 v8; // rcx

  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    v5 = *a3;
    v6 = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[3] = 0LL;
    if ( *(_QWORD *)a2 )
    {
      for ( i = 0LL; i < *(_QWORD *)(a2 + 8); ++i )
      {
        v8 = *(_QWORD *)(*(_QWORD *)a2 + 8 * i);
        if ( v8 )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 8 * i) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      CoTaskMemFree(*(LPVOID *)a2);
      *(_QWORD *)a2 = 0LL;
    }
    *(_QWORD *)a2 = v5;
    *(_QWORD *)(a2 + 8) = v6;
    *(_QWORD *)(a2 + 24) = v6;
    *(_DWORD *)(a2 + 32) = 0;
    *(_WORD *)(a2 + 36) = 0;
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_QWORD *)(a2 + 72) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    *(_DWORD *)(a2 + 88) = 0;
    *(_WORD *)(a2 + 92) = 0;
    *(_DWORD *)(a2 + 96) = 0;
    StartLayout::SelectionData::Copy(
      (StartLayout::SelectionData *)(a2 + 32),
      (const struct StartLayout::SelectionData *)(a3 + 4));
  }
}
