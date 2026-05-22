/*
 * XREFs of ?OnClear@ViewHeirarchy@@UEAAJPEAUIMessageList@@@Z @ 0x18006DD00
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$_Hash@V?$_Umap_traits@IUViewHeirarchyEntry@ViewHeirarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18006E358 (-clear@-$_Hash@V-$_Umap_traits@IUViewHeirarchyEntry@ViewHeirarchy@@V-$_Uhash_compare@IU-$hash@I@.c)
 */

__int64 __fastcall ViewHeirarchy::OnClear(ViewHeirarchy *this, struct IMessageList *a2)
{
  std::_Hash<std::_Umap_traits<unsigned int,ViewHeirarchy::ViewHeirarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHeirarchy::ViewHeirarchyEntry>>,0>>::clear((char *)this + 72);
  return 0LL;
}
