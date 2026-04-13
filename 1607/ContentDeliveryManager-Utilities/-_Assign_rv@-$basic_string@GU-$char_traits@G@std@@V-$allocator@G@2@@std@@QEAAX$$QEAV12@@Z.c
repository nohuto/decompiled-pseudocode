/*
 * XREFs of ?_Assign_rv@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX$$QEAV12@@Z @ 0x1800273A0
 * Callers:
 *     ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180023580 (-push_back@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V.c)
 *     ??$_Uninit_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18002E2C4 (--$_Uninit_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAV12@V-$alloc.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180032BB4 (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180037BC8 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 *     ??$make_pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@0@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x180038734 (--$make_pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@YA-AU-$pair.c)
 *     ??$_Buynode@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@@Z @ 0x180038BB8 (--$_Buynode@U-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@@-$_.c)
 *     ??$_Buynode@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@PEAX@1@PEAU21@0$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@1@@Z @ 0x180039ED0 (--$_Buynode@U-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@.c)
 *     ?Rot13DecodeString@Obfuscation@ContentManagement@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180048CA8 (-Rot13DecodeString@Obfuscation@ContentManagement@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::_Assign_rv(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a2[3] >= 8uLL )
  {
    if ( a1 )
      *a1 = *a2;
    *a2 = 0LL;
  }
  else if ( a2[2] != -1LL )
  {
    memmove(a1, a2, 2 * (a2[2] + 1LL));
  }
  a1[2] = a2[2];
  result = a2[3];
  a1[3] = result;
  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  return result;
}
