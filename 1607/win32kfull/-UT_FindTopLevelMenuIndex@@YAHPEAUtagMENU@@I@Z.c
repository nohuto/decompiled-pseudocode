/*
 * XREFs of ?UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z @ 0x1C0150DC8
 * Callers:
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C0150D68 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C023A75C (xxxHiliteMenuItem.c)
 * Callees:
 *     MNLookUpItem @ 0x1C006F45C (MNLookUpItem.c)
 *     ?ItemContainingSubMenu@@YAHPEAUtagMENU@@_K@Z @ 0x1C023A6E4 (-ItemContainingSubMenu@@YAHPEAUtagMENU@@_K@Z.c)
 */

__int64 __fastcall UT_FindTopLevelMenuIndex(struct tagMENU *a1, unsigned int a2)
{
  __int64 v2; // rax
  struct tagMENU *v3; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v6; // rdx
  struct tagMENU *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = MNLookUpItem((__int64)a1, a2, 0, &v7);
  if ( !v2 || *(_QWORD *)(v2 + 16) )
    return 0xFFFFFFFFLL;
  v6 = (unsigned __int64)v7;
  if ( v7 == v3 )
    v6 = v4;
  return ItemContainingSubMenu(v3, v6);
}
