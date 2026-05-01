/*
 * XREFs of ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180007A88
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180005D20 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180006188 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 * Callees:
 *     ?push_back@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBGPEBG@2@@Z @ 0x180008220 (-push_back@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEA.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180008368 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@IEAAXXZ @ 0x180008414 (-_Tidy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@IEAAXXZ.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180019188 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  const char *v3; // r9
  __int64 v4; // rax
  unsigned int v5; // ebx
  const wchar_t *v7; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int16 *v8; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v12; // [rsp+70h] [rbp+8h]

  v9 = 0LL;
  v10 = 0LL;
  try
  {
    v7 = L"http://schemas.microsoft.com/Start/2014/StartLayout";
    v8 = StartLayout::Schemas::StartLayoutSchema;
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::push_back(&v9, &v7);
    v7 = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
    v8 = StartLayout::Schemas::TaskbarLayoutSchema;
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::push_back(&v9, &v7);
    v7 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
    v8 = StartLayout::Schemas::FullDefaultLayoutSchema;
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::push_back(&v9, &v7);
    v7 = L"http://schemas.microsoft.com/Start/2014/LayoutModification";
    v8 = StartLayout::Schemas::LayoutModificationSchema;
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::push_back(&v9, &v7);
  }
  catch ( ... )
  {
    v12 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1F9,
            (unsigned int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            v3);
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(&v9);
    return v12;
  }
  v4 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v7,
         &v9);
  v5 = StartLayout::ValidateLayoutFile(v4, a2);
  std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(&v9);
  return v5;
}
