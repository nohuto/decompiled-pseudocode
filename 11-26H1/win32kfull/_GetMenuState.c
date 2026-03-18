/*
 * XREFs of _GetMenuState @ 0x140220F5C
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140012F10 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x140220B3C (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxHandleNCMouseGuys @ 0x140220C94 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 */

__int64 __fastcall GetMenuState(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // rax
  unsigned int v4; // r8d
  __int64 v5; // rax

  v2 = (_QWORD *)MNLookUpItem(a1, a2, 0, 0LL);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v4 = *(_DWORD *)*v2 | *(_DWORD *)(*v2 + 4LL);
  v5 = v2[2];
  if ( v5 )
    return (*(_DWORD *)(*(_QWORD *)(v5 + 40) + 44LL) << 8) + (v4 & 0xEF | 0x10);
  return v4;
}
