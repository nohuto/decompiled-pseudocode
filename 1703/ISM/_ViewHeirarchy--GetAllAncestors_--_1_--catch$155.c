/*
 * XREFs of _ViewHeirarchy::GetAllAncestors_::_1_::catch$155 @ 0x1800A2B0C
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtExceptionMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18006EE58 (-FailFast_CaughtExceptionMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall ViewHeirarchy::GetAllAncestors_::_1_::catch_155(__int64 a1, __int64 a2)
{
  char *v3; // [rsp+20h] [rbp-18h]

  LODWORD(v3) = *(_DWORD *)(a2 + 128);
  wil::details::in1diag3::FailFast_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0x117,
    (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
    "ViewHeirarchy encountered an unknown view instance id in the parent chain of 0x%08X.",
    v3);
  return ViewHeirarchy::FindView_::_1_::dtor_0();
}
