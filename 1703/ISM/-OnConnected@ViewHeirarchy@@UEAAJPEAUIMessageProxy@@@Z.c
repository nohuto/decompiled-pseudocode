/*
 * XREFs of ?OnConnected@ViewHeirarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18006D550
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHeirarchy::OnConnected(ViewHeirarchy *this, struct IMessageProxy *a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((struct IMessageProxy **)this + 7) == a2 )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = (_QWORD *)((char *)this + 72);
    v5 = *((_QWORD *)this + 9);
    if ( v5 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 40LL))(v3, v4);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    if ( *v4 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v4 + 64LL))(*v4, (char *)this + 8);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x64,
          (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
          (const char *)(unsigned int)v7);
        JUMPOUT(0x18006D602LL);
      }
    }
  }
  return 0LL;
}
