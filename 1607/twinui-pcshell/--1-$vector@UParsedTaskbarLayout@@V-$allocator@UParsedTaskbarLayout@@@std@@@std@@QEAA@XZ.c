/*
 * XREFs of ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18000B590
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18000A1E0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$2 @ 0x180030B47 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$2.c)
 * Callees:
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x180009C8C (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>(LPVOID **a1)
{
  LPVOID *v2; // rbx
  LPVOID *v3; // rbp
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // r8
  signed __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8

  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v2 != v3 )
    {
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(v2 + 4));
      if ( *v2 )
      {
        v4 = 0LL;
        if ( v2[1] )
        {
          do
          {
            v5 = *((_QWORD *)*v2 + v4);
            if ( v5 )
            {
              *((_QWORD *)*v2 + v4) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
            }
            ++v4;
          }
          while ( v4 < (unsigned __int64)v2[1] );
        }
        CoTaskMemFree(*v2);
        *v2 = 0LL;
      }
      v2[1] = 0LL;
      v2[3] = 0LL;
      v2 += 13;
    }
    v6 = *a1;
    v7 = (char *)a1[2] - (char *)*a1;
    v8 = v7 / 104;
    if ( (unsigned __int64)(v7 / 104) > 0x276276276276276LL )
      _o__invalid_parameter_noinfo_noreturn(v7);
    if ( (unsigned __int64)(104 * v8) >= 0x1000 )
    {
      if ( ((unsigned __int8)v6 & 0x1F) != 0 )
        _o__invalid_parameter_noinfo_noreturn(v7);
      v9 = *(v6 - 1);
      if ( v9 >= (unsigned __int64)v6 )
        v9 = _o__invalid_parameter_noinfo_noreturn(v7);
      v10 = (unsigned __int64)v6 - v9;
      if ( v10 < 8 )
        v9 = _o__invalid_parameter_noinfo_noreturn(v7);
      if ( v10 > 0x27 )
        v9 = _o__invalid_parameter_noinfo_noreturn(v7);
      v6 = (_QWORD *)v9;
    }
    operator delete(v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
