/*
 * XREFs of ??1?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ @ 0x180012ADC
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18000FBE4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$0 @ 0x180028D11 (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$0.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall wistd::function<long (CreativeFramework::Triggers::ValueSetHelper &)>::~function<long (CreativeFramework::Triggers::ValueSetHelper &)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  __int64 v5; // r14

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    LOBYTE(a2) = v2 != a1;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 96), a2);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v5 + 24LL))(*(_QWORD *)(a1 + 96), a2);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  return result;
}
