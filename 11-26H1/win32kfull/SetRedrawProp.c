/*
 * XREFs of SetRedrawProp @ 0x14000FC8C
 * Callers:
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x14000FBF8 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UserGetGlobalAtomTableOfWindow @ 0x14000FCE0 (UserGetGlobalAtomTableOfWindow.c)
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 */

__int64 __fastcall SetRedrawProp(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int16 AtomFromAtomTable; // ax

  v2 = a2;
  result = UserGetGlobalAtomTableOfWindow();
  if ( result )
  {
    AtomFromAtomTable = UserFindAtomFromAtomTable(result, L"SysSetRedraw");
    return InternalSetProp(a1, AtomFromAtomTable, v2, 0LL);
  }
  return result;
}
