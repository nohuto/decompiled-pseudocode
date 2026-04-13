/*
 * XREFs of ??$make_shared@VSettingsContainer@CommonHelper@CreativeFramework@@AEAPEAUIApplicationDataContainer@Storage@Windows@@@std@@YA?AV?$shared_ptr@VSettingsContainer@CommonHelper@CreativeFramework@@@0@AEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180069E28
 * Callers:
 *     ?MakeSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180069ABC (-MakeSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer@Com.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@XZ @ 0x180069CFC (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBV-$basic_string@_WU_ea_180069CFC.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall std::make_shared<CreativeFramework::CommonHelper::SettingsContainer,Windows::Storage::IApplicationDataContainer * &>(
        _QWORD *a1,
        __int64 *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  __int64 v6; // rcx

  v4 = operator new(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<CreativeFramework::CommonHelper::SettingsContainer>::`vftable';
    if ( v4 != (_DWORD *)-16LL )
    {
      v6 = *a2;
      *((_QWORD *)v4 + 2) = &CreativeFramework::CommonHelper::SettingsContainer::`vftable';
      *((_QWORD *)v4 + 3) = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *((_QWORD *)v5 + 4) = 0LL;
      *((_QWORD *)v5 + 5) = 0LL;
      *((_QWORD *)v5 + 4) = std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>>::_Buyheadnode();
      *((_BYTE *)v5 + 48) = 1;
    }
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 4;
  return a1;
}
