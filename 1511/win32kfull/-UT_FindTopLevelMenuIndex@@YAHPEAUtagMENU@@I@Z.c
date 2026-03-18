/*
 * XREFs of ?UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z @ 0x1C014BF48
 * Callers:
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C014BEE8 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C0244814 (xxxHiliteMenuItem.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00710A8 (MNLookUpItem.c)
 *     ?ItemContainingSubMenu@@YAHPEAUtagMENU@@_K@Z @ 0x1C024479C (-ItemContainingSubMenu@@YAHPEAUtagMENU@@_K@Z.c)
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
