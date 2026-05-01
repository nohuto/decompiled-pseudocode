/*
 * XREFs of ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18000A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x180008070 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x180009C8C (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x180009F48 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18000A9AC (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18000ABFC (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 *     ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18000B590 (--1-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ.c)
 *     ?_Reserve@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX_K@Z @ 0x18000BB8C (-_Reserve@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX_K@.c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18000C274 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     ??$construct@UParsedTaskbarLayout@@U1@@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@$$QEAU2@@Z @ 0x18000C538 (--$construct@UParsedTaskbarLayout@@U1@@-$_Wrap_alloc@V-$allocator@UParsedTaskbarLayout@@@std@@@s.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode(
        TaskbarLayoutParser *this,
        _QWORD *a2,
        _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct IXMLDOMNode *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r10
  char *v16; // rcx
  __int64 v17; // rbx
  const char *v18; // r9
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 i; // rax
  __int64 v22; // rdx
  struct IXMLDOMNode *v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rbx
  unsigned __int64 j; // rax
  __int64 v28; // rdx
  int Selected; // eax
  unsigned int v30; // esi
  _QWORD *v31; // rcx
  unsigned __int64 v32; // rbx
  unsigned __int64 m; // rax
  __int64 v34; // rdx
  struct IXMLDOMNode *v35; // rcx
  __int64 v36; // rcx
  char *v37; // rsi
  char *v38; // r15
  _QWORD *v39; // rbx
  __int64 v40; // rdx
  _QWORD *v41; // rdx
  _QWORD *v42; // rcx
  unsigned __int64 v43; // rbx
  unsigned __int64 k; // rax
  __int64 v45; // rdx
  struct IXMLDOMNode *v46; // rcx
  __int64 v47; // rcx
  struct IXMLDOMNode *v48; // [rsp+20h] [rbp-178h] BYREF
  __int64 v49; // [rsp+28h] [rbp-170h] BYREF
  __int128 v50; // [rsp+30h] [rbp-168h] BYREF
  __int64 v51; // [rsp+40h] [rbp-158h]
  LPVOID pv; // [rsp+50h] [rbp-148h] BYREF
  __int128 v53; // [rsp+58h] [rbp-140h]
  __int64 v54; // [rsp+68h] [rbp-130h]
  __int128 v55; // [rsp+70h] [rbp-128h] BYREF
  __int128 v56; // [rsp+80h] [rbp-118h]
  __int128 v57; // [rsp+90h] [rbp-108h]
  __int64 v58; // [rsp+A0h] [rbp-F8h]
  int v59; // [rsp+A8h] [rbp-F0h]
  __int16 v60; // [rsp+ACh] [rbp-ECh]
  int v61; // [rsp+B0h] [rbp-E8h]
  LPVOID v62; // [rsp+C0h] [rbp-D8h] BYREF
  unsigned __int64 v63; // [rsp+C8h] [rbp-D0h]
  __int64 v64; // [rsp+D0h] [rbp-C8h]
  __int64 v65; // [rsp+D8h] [rbp-C0h]
  int v66; // [rsp+E0h] [rbp-B8h] BYREF
  __int16 v67; // [rsp+E4h] [rbp-B4h]
  __int64 v68; // [rsp+E8h] [rbp-B0h]
  __int128 v69; // [rsp+F0h] [rbp-A8h]
  __int128 v70; // [rsp+100h] [rbp-98h]
  __int64 v71; // [rsp+110h] [rbp-88h]
  int v72; // [rsp+118h] [rbp-80h]
  __int16 v73; // [rsp+11Ch] [rbp-7Ch]
  int v74; // [rsp+120h] [rbp-78h]
  __int64 v75; // [rsp+130h] [rbp-68h]
  LPVOID *p_pv; // [rsp+138h] [rbp-60h]
  _QWORD v77[8]; // [rsp+140h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]
  _QWORD *v79; // [rsp+1B8h] [rbp+20h] BYREF

  v75 = -2LL;
  v6 = TaskbarLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v49 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 96LL))(*a2, &v49);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v9);
    v10 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v7;
  }
  v11 = 0LL;
  v48 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  while ( 1 )
  {
    v12 = v49;
    if ( v11 )
    {
      v48 = 0LL;
      ((void (__fastcall *)(struct IXMLDOMNode *))v11->lpVtbl->Release)(v11);
    }
    if ( (*(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v12 + 72LL))(v12, &v48) < 0 || !v48 )
      break;
    pv = 0LL;
    v53 = 0uLL;
    v54 = 0LL;
    LODWORD(v55) = 0;
    WORD2(v55) = 0;
    *((_QWORD *)&v55 + 1) = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    if ( (int)TaskbarLayoutParser::ParseTaskbarLayoutNode(this, v48, (struct ParsedTaskbarLayout *)&pv) >= 0 )
    {
      try
      {
        v14 = *((_QWORD *)&v50 + 1);
        if ( (unsigned __int64)&pv >= *((_QWORD *)&v50 + 1)
          || (v15 = v50, (unsigned __int64)v50 > (unsigned __int64)&pv) )
        {
          if ( *((_QWORD *)&v50 + 1) == v51 )
          {
            std::vector<ParsedTaskbarLayout>::_Reserve(&v50);
            v14 = *((_QWORD *)&v50 + 1);
          }
          std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::construct<ParsedTaskbarLayout,ParsedTaskbarLayout>(
            v13,
            v14,
            &pv);
        }
        else
        {
          v16 = (char *)&pv - v50;
          v17 = (__int64)((__int64)&pv - v50) / 104;
          if ( *((_QWORD *)&v50 + 1) == v51 )
          {
            std::vector<ParsedTaskbarLayout>::_Reserve(&v50);
            v14 = *((_QWORD *)&v50 + 1);
            v15 = v50;
          }
          std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::construct<ParsedTaskbarLayout,ParsedTaskbarLayout>(
            v16,
            v14,
            v15 + 104 * v17);
        }
        *((_QWORD *)&v50 + 1) += 104LL;
      }
      catch ( ... )
      {
        LODWORD(v79) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x6A,
                         (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                         v18);
        StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v55);
        v19 = pv;
        if ( pv )
        {
          v20 = 0LL;
          for ( i = v53; v20 < i; ++v20 )
          {
            v22 = v19[v20];
            if ( v22 )
            {
              v19[v20] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
              i = v53;
              v19 = pv;
            }
          }
          CoTaskMemFree(v19);
          pv = 0LL;
        }
        *(_QWORD *)&v53 = 0LL;
        v54 = 0LL;
        std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>(&v50);
        v23 = v48;
        if ( v48 )
        {
          v48 = 0LL;
          ((void (__fastcall *)(struct IXMLDOMNode *))v23->lpVtbl->Release)(v23);
        }
        v24 = v49;
        if ( v49 )
        {
          v49 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        return (unsigned int)v79;
      }
    }
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v55);
    v25 = pv;
    if ( pv )
    {
      v26 = 0LL;
      for ( j = v53; v26 < j; ++v26 )
      {
        v28 = v25[v26];
        if ( v28 )
        {
          v25[v26] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          j = v53;
          v25 = pv;
        }
      }
      CoTaskMemFree(v25);
    }
    v11 = v48;
  }
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0;
  v67 = 0;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v79 = v77;
  p_pv = &pv;
  v77[0] = &std::_Func_impl<_lambda_403eb64f09a73babfd6e65f383c20483_,std::allocator<int>,StartLayout::SelectionData,ParsedTaskbarLayout const &>::`vftable';
  v77[7] = v77;
  LODWORD(pv) = 0;
  WORD2(pv) = 0;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  *(_QWORD *)&v56 = 0LL;
  DWORD2(v56) = 0;
  WORD6(v56) = 0;
  LODWORD(v57) = 0;
  StartLayout::SelectionData::Copy((StartLayout::SelectionData *)&pv, (TaskbarLayoutParser *)((char *)this + 40));
  Selected = StartLayout::GetSelectedItem<ParsedTaskbarLayout>(&v50, &pv, v77, &v62);
  v30 = Selected;
  if ( Selected >= 0 )
  {
    v37 = (char *)v62;
    v38 = (char *)v62 + 8 * v63;
    while ( v37 != v38 )
    {
      v39 = *(_QWORD **)v37;
      v79 = v39;
      if ( v39 )
        (*(void (__fastcall **)(_QWORD *))(*v39 + 8LL))(v39);
      v40 = a3[1];
      if ( v40 != a3[3]
        || (int)CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                  (__int64)a3,
                  v40 + 1) >= 0 )
      {
        v41 = (_QWORD *)(*a3 + 8 * a3[1]++);
        if ( v41 )
        {
          *v41 = 0LL;
          if ( v41 != &v79 )
          {
            *v41 = v39;
            v39 = 0LL;
          }
        }
      }
      if ( v39 )
        (*(void (__fastcall **)(_QWORD *))(*v39 + 16LL))(v39);
      v37 += 8;
    }
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v66);
    v42 = v62;
    if ( v62 )
    {
      v43 = 0LL;
      for ( k = v63; v43 < k; ++v43 )
      {
        v45 = v42[v43];
        if ( v45 )
        {
          v42[v43] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
          k = v63;
          v42 = v62;
        }
      }
      CoTaskMemFree(v42);
      v62 = 0LL;
    }
    v63 = 0LL;
    v65 = 0LL;
    std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>(&v50);
    v46 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      ((void (__fastcall *)(struct IXMLDOMNode *))v46->lpVtbl->Release)(v46);
    }
    v47 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)Selected);
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v66);
    v31 = v62;
    if ( v62 )
    {
      v32 = 0LL;
      for ( m = v63; v32 < m; ++v32 )
      {
        v34 = v31[v32];
        if ( v34 )
        {
          v31[v32] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          m = v63;
          v31 = v62;
        }
      }
      CoTaskMemFree(v31);
      v62 = 0LL;
    }
    v63 = 0LL;
    v65 = 0LL;
    std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>(&v50);
    v35 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      ((void (__fastcall *)(struct IXMLDOMNode *))v35->lpVtbl->Release)(v35);
    }
    v36 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    return v30;
  }
}
