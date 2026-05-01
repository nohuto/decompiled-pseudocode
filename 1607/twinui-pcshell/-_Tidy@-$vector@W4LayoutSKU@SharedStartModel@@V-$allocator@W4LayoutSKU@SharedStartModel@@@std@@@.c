/*
 * XREFs of ?_Tidy@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@IEAAXXZ @ 0x18000BC3C
 * Callers:
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x180009C8C (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x180009D14 (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 *     ??1?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@XZ @ 0x18000B8C4 (--1-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@.c)
 *     _std::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU___::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU____::_1_::catch$0 @ 0x180030D50 (_std--vector_enum_SharedStartModel--LayoutSKU_std--allocator_enum_SharedStartModel--LayoutSKU___.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<enum SharedStartModel::LayoutSKU>::_Tidy(__int64 a1)
{
  char *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rax
  unsigned __int64 v5; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 2;
    if ( v3 > 0x3FFFFFFFFFFFFFFFLL )
    {
      _o__invalid_parameter_noinfo_noreturn(v2);
      __debugbreak();
    }
    if ( 4 * v3 >= 0x1000 )
    {
      if ( ((unsigned __int8)v2 & 0x1F) != 0 )
      {
        _o__invalid_parameter_noinfo_noreturn(v2);
        __debugbreak();
      }
      v4 = (char *)*((_QWORD *)v2 - 1);
      if ( v4 >= v2 )
      {
        _o__invalid_parameter_noinfo_noreturn(v2);
        __debugbreak();
      }
      v5 = v2 - v4;
      if ( v5 < 8 )
      {
        _o__invalid_parameter_noinfo_noreturn(v5);
        __debugbreak();
      }
      if ( v5 > 0x27 )
      {
        _o__invalid_parameter_noinfo_noreturn(v5);
        __debugbreak();
      }
      v2 = v4;
    }
    operator delete(v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
