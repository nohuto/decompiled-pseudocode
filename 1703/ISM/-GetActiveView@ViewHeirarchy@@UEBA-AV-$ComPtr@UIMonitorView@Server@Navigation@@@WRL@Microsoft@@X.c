/*
 * XREFs of ?GetActiveView@ViewHeirarchy@@UEBA?AV?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@XZ @ 0x18006DEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ViewHeirarchy::GetActiveView(__int64 a1, __int64 *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 32) )
  {
    *a2 = 0LL;
  }
  else
  {
    v7 = 0LL;
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48), &v7);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xFD,
        (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
    *a2 = 0LL;
    if ( a2 == &v7 )
    {
      v4 = v7;
    }
    else
    {
      *a2 = v7;
      v4 = 0LL;
    }
    if ( v4 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  return a2;
}
