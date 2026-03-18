/*
 * XREFs of _GetSubMenu @ 0x1C00CA2E4
 * Callers:
 *     xxxSetSysMenu @ 0x1C0072F20 (xxxSetSysMenu.c)
 *     xxxGetSysMenu @ 0x1C00C67E0 (xxxGetSysMenu.c)
 *     xxxGetSystemMenu @ 0x1C00CA20C (xxxGetSystemMenu.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02323CC (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
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
