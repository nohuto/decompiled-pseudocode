/*
 * XREFs of ??1?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1800081B4
 * Callers:
 *     _TaskbarLayoutPolicyManager::IsOverrideLayout_::_1_::dtor$1 @ 0x180030924 (_TaskbarLayoutPolicyManager--IsOverrideLayout_--_1_--dtor$1.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$3 @ 0x180030CA4 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$3.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$4 @ 0x180030CB0 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$4.c)
 *     _StartLayout::SelectionDataParser::ParseSelectionAttributes_::_1_::dtor$1 @ 0x180031571 (_StartLayout--SelectionDataParser--ParseSelectionAttributes_--_1_--dtor$1.c)
 *     _StartLayout::SelectionDataParser::ParseSelectionAttributes_::_1_::dtor$2 @ 0x18003157D (_StartLayout--SelectionDataParser--ParseSelectionAttributes_--_1_--dtor$2.c)
 *     _StartLayout::SelectionDataParser::ParseSelectionAttributes_::_1_::dtor$3 @ 0x180031589 (_StartLayout--SelectionDataParser--ParseSelectionAttributes_--_1_--dtor$3.c)
 * Callees:
 *     ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x18001A1A4 (-_Tidy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<std::wstring>::~shared_ptr<std::wstring>(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 result; // rax

  v2 = *(volatile signed __int32 **)(a1 + 8);
  if ( v2 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      LOBYTE(a2) = 1;
      std::wstring::_Tidy(v2 + 4, a2, 0LL);
      result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 16LL))(v2, 1LL);
    }
  }
  return result;
}
