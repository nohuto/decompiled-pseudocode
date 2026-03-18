/*
 * XREFs of ?MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z @ 0x1C01081B0
 * Callers:
 *     xxxEnableMenuItem @ 0x1C0108034 (xxxEnableMenuItem.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00942A8 (MNLookUpItem.c)
 */

__int64 __fastcall MenuItemState(struct tagMENU *a1, unsigned int a2, int a3, __int64 a4, struct tagMENU **a5)
{
  __int64 v6; // rax
  unsigned int v7; // r11d
  __int64 v8; // r10
  __int64 result; // rax

  v6 = MNLookUpItem((__int64)a1, a2, a3 & 0x400, a5);
  v8 = v6;
  if ( !v6 )
    return 0xFFFFFFFFLL;
  result = v7 & *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v8 + 4) ^= v7 & (a3 ^ result);
  return result;
}
