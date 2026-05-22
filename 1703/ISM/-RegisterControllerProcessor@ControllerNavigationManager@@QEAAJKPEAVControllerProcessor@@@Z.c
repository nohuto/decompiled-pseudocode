/*
 * XREFs of ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180030938
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180031DA8 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRect@@UControllerNavigationPoint@@@Z @ 0x180031010 (-NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRe.c)
 *     ?NavigationPause@ControllerNavigationManager@@UEAAJXZ @ 0x1800311A0 (-NavigationPause@ControllerNavigationManager@@UEAAJXZ.c)
 *     ??$_Insert@AEAU?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKPEAVControllerProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@1@@Z @ 0x1800314D4 (--$_Insert@AEAU-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$_List_unchecked_iterator@V-$_List_v.c)
 *     ??$_Buynode@AEAKAEAPEAVControllerProcessor@@@?$_List_buy@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@1@PEAU21@0AEAKAEAPEAVControllerProcessor@@@Z @ 0x180031764 (--$_Buynode@AEAKAEAPEAVControllerProcessor@@@-$_List_buy@U-$pair@$$CBKPEAVControllerProcessor@@@.c)
 */

__int64 __fastcall ControllerNavigationManager::RegisterControllerProcessor(
        ControllerNavigationManager *this,
        int a2,
        struct ControllerProcessor *a3)
{
  unsigned int v3; // edi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int128 v14; // xmm0
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v17[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+98h] [rbp+28h] BYREF
  struct ControllerProcessor *v20; // [rsp+A0h] [rbp+30h] BYREF

  v20 = a3;
  v19 = a2;
  v3 = 0;
  *((_BYTE *)this + 90) = *((_QWORD *)this + 5) == 0LL;
  v5 = **((_QWORD **)this + 4);
  v6 = std::_List_buy<std::pair<unsigned long const,ControllerProcessor *>>::_Buynode<unsigned long &,ControllerProcessor * &>(
         (_DWORD)this,
         v5,
         *(_QWORD *)(v5 + 8),
         (unsigned int)&v19,
         (__int64)&v20);
  v7 = *((_QWORD *)this + 5);
  if ( v7 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  *((_QWORD *)this + 5) = v7 + 1;
  *(_QWORD *)(v5 + 8) = v6;
  **(_QWORD **)(v6 + 8) = v6;
  std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Insert<std::pair<unsigned long const,ControllerProcessor *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>(
    (char *)this + 24,
    &v16,
    **((_QWORD **)this + 4) + 16LL);
  if ( *((_BYTE *)this + 89)
    && (v8 = ControllerNavigationManager::NavigationPause((ControllerNavigationManager *)((char *)this + 16)),
        v3 = v8,
        v8 < 0) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 75;
LABEL_11:
      Template_qqq(v9, &MinInput_Warning_CheckResult, 0, v10, v8);
    }
  }
  else if ( *((_BYTE *)this + 88) )
  {
    v11 = *((_QWORD *)this + 14);
    v12 = *(_OWORD *)((char *)this + 248);
    v13 = *((unsigned int *)this + 23);
    v16 = *((_OWORD *)this + 6);
    v14 = *(_OWORD *)((char *)this + 232);
    v17[1] = v12;
    v17[0] = v14;
    v18 = *((_QWORD *)this + 33);
    v8 = ControllerNavigationManager::NavigationEnable((char *)this + 16, v17, v13, &v16, v11);
    v3 = v8;
    if ( v8 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 85;
      goto LABEL_11;
    }
  }
  return v3;
}
