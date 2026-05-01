/*
 * XREFs of ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18000C274
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18000A1E0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x180008070 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x180009C8C (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x180009D14 (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x180009F48 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     ??R?$_Func_class@USelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@std@@QEBA?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z @ 0x18000C634 (--R-$_Func_class@USelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@std@@QEBA-AUSelectionData.c)
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall StartLayout::GetSelectedItem<ParsedTaskbarLayout>(
        __int64 *a1,
        StartLayout::SelectionData *a2,
        _QWORD *a3,
        __int64 a4)
{
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 i; // rbx
  __int64 v11; // rcx
  __int64 *v12; // r15
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v19; // rcx
  _BYTE v20[136]; // [rsp+30h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  int SelectionScore; // [rsp+C0h] [rbp+8h]

  v7 = -1;
  v8 = *a1;
  v9 = a1[1];
  while ( v8 != v9 )
  {
    std::_Func_class<StartLayout::SelectionData,ParsedTaskbarLayout const &>::operator()(a3, v20, v8);
    SelectionScore = StartLayout::SelectionData::GetSelectionScore(a2, (const struct StartLayout::SelectionData *)v20);
    if ( SelectionScore > v7 )
    {
      if ( *(_QWORD *)a4 )
      {
        for ( i = 0LL; i < *(_QWORD *)(a4 + 8); ++i )
        {
          v11 = *(_QWORD *)(*(_QWORD *)a4 + 8 * i);
          if ( v11 )
          {
            *(_QWORD *)(*(_QWORD *)a4 + 8 * i) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
        CoTaskMemFree(*(LPVOID *)a4);
        *(_QWORD *)a4 = 0LL;
      }
      *(_QWORD *)(a4 + 8) = 0LL;
      *(_QWORD *)(a4 + 24) = 0LL;
      v12 = *(__int64 **)v8;
      v13 = *(_QWORD *)v8 + 8LL * *(_QWORD *)(v8 + 8);
      while ( v12 != (__int64 *)v13 )
      {
        v14 = *v12;
        if ( *v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v15 = *(_QWORD *)(a4 + 8);
        if ( v15 != *(_QWORD *)(a4 + 24)
          || (int)CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                    a4,
                    v15 + 1) >= 0 )
        {
          v16 = (_QWORD *)(*(_QWORD *)a4 + 8 * (*(_QWORD *)(a4 + 8))++);
          if ( v16 )
          {
            *v16 = v14;
            if ( v14 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          }
        }
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        ++v12;
      }
      StartLayout::SelectionData::Copy(
        (StartLayout::SelectionData *)(a4 + 32),
        (const struct StartLayout::SelectionData *)(v8 + 32));
      v7 = SelectionScore;
    }
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)v20);
    v8 += 104LL;
  }
  if ( v7 == -1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (__int64)"internal\\shellcommonshell\\inc\\startlayoutselectiondata.h",
      (const char *)0x80070490LL);
    StartLayout::SelectionData::~SelectionData(a2);
    v17 = (_QWORD *)a3[7];
    if ( v17 )
    {
      *v17 = &std::_Func_base<StartLayout::SelectionData,ParsedTaskbarLayout const &>::`vftable';
      if ( v17 != a3 )
        operator delete(v17);
      a3[7] = 0LL;
    }
    return 2147943568LL;
  }
  else
  {
    StartLayout::SelectionData::~SelectionData(a2);
    v19 = (_QWORD *)a3[7];
    if ( v19 )
    {
      *v19 = &std::_Func_base<StartLayout::SelectionData,ParsedTaskbarLayout const &>::`vftable';
      if ( v19 != a3 )
        operator delete(v19);
      a3[7] = 0LL;
    }
    return 0LL;
  }
}
