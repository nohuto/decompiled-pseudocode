/*
 * XREFs of ??$make_shared@VPropertySetHelper@Triggers@CreativeFramework@@PEAUIPropertySet@Collections@Foundation@Windows@@@std@@YA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@0@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180069D50
 * Callers:
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x180069330 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 * Callees:
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004C1A0 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<CreativeFramework::Triggers::PropertySetHelper,Windows::Foundation::Collections::IPropertySet *>(
        _QWORD *a1,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x28uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<CreativeFramework::Triggers::PropertySetHelper>::`vftable';
    if ( v4 != (_DWORD *)-16LL )
      CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
        (CreativeFramework::Triggers::PropertySetHelper *)(v4 + 4),
        *a2);
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 4;
  return a1;
}
