/*
 * XREFs of ?GetAllAncestors@ViewHeirarchy@@UEBA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x18006DF50
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAXAEBI@Z @ 0x18006C988 (--$emplace_back@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAXAEBI@Z.c)
 *     ?at@?$unordered_map@IUViewHeirarchyEntry@ViewHeirarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@4@@std@@QEBAAEBUViewHeirarchyEntry@ViewHeirarchy@@AEBI@Z @ 0x18006E3EC (-at@-$unordered_map@IUViewHeirarchyEntry@ViewHeirarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ViewHeirarchy::GetAllAncestors(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rdi
  __int64 i; // rax
  const char *v7; // [rsp+20h] [rbp-48h]
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+80h] [rbp+18h]

  v12 = a3;
  v8 = 0LL;
  v9 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  else
  {
    try
    {
      v11 = a3;
      v5 = a1 + 64;
      for ( i = std::unordered_map<unsigned int,ViewHeirarchy::ViewHeirarchyEntry>::at(a1 + 64, &v11);
            ;
            i = std::unordered_map<unsigned int,ViewHeirarchy::ViewHeirarchyEntry>::at(v5, &v11) )
      {
        v11 = *(_DWORD *)(i + 8);
        if ( !v11 )
          break;
        std::vector<unsigned int>::emplace_back<unsigned int const &>((__int64)&v8, &v11);
      }
    }
    catch ( ... )
    {
      LODWORD(v7) = v12;
      wil::details::in1diag3::FailFast_CaughtExceptionMsg(
        retaddr,
        (void *)0x117,
        (unsigned int)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
        "ViewHeirarchy encountered an unknown view instance id in the parent chain of 0x%08X.",
        v7);
      ViewHeirarchy::FindView_::_1_::dtor_0();
      __eh34_caught_ellipsis(0);
    }
    *(_OWORD *)a2 = v8;
    a2[2] = v9;
  }
  return a2;
}
