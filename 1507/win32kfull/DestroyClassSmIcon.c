/*
 * XREFs of DestroyClassSmIcon @ 0x1C00D91CC
 * Callers:
 *     DestroyClass @ 0x1C00D8FFC (DestroyClass.c)
 *     xxxSetClassIcon @ 0x1C0154854 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C022A194 (xxxRecreateSmallIcons.c)
 * Callees:
 *     _DestroyCursor @ 0x1C00D9340 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyClassSmIcon(__int64 a1)
{
  struct tagCURSOR *v3; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0x20) == 0 )
    return 0LL;
  v3 = (struct tagCURSOR *)HMAssignmentUnlock(a1 + 152);
  if ( v3 )
    DestroyCursor(v3);
  *(_WORD *)(a1 + 34) &= ~0x20u;
  return 1LL;
}
