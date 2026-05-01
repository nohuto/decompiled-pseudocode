/*
 * XREFs of _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::catch$0 @ 0x180027293
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800079B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180007A28 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::catch_0(
        wil *a1,
        __int64 a2)
{
  unsigned int v3; // eax

  v3 = wil::ResultFromCaughtException(a1);
  *(_DWORD *)(a2 + 96) = v3;
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x71,
    (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\findalloperation.cpp",
    (const char *)v3);
  return &loc_18000221A;
}
