/*
 * XREFs of _GetSubMenu @ 0x1C004EB50
 * Callers:
 *     xxxGetSystemMenu @ 0x1C004EA78 (xxxGetSystemMenu.c)
 *     xxxGetSysMenu @ 0x1C0107D14 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C0107E60 (xxxSetSysMenu.c)
 *     xxxMNKeyDown @ 0x1C0216E44 (xxxMNKeyDown.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0231F9C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubMenu(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( *(_DWORD *)(a1 + 52) )
  {
    v2 = *(_QWORD *)(a1 + 80);
    if ( *(_QWORD *)(v2 + 16) )
      return *(_QWORD *)(v2 + 16);
  }
  return result;
}
