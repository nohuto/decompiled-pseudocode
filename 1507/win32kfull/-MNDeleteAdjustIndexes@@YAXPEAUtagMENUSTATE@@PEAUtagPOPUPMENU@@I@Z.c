/*
 * XREFs of ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z @ 0x1C023C2E4
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0054D4C (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     xxxInsertMenuItem @ 0x1C00551A4 (xxxInsertMenuItem.c)
 * Callees:
 *     ?NNDeleteAdjustIndex@@YAXPEAII@Z @ 0x1C023C340 (-NNDeleteAdjustIndex@@YAXPEAII@Z.c)
 */

void __fastcall MNDeleteAdjustIndexes(struct tagMENUSTATE *a1, struct tagPOPUPMENU *a2, unsigned int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // r11

  NNDeleteAdjustIndex((unsigned int *)a2 + 20, a3);
  if ( (*(_DWORD *)v6 & 0x20) != 0 )
    NNDeleteAdjustIndex((unsigned int *)(v6 + 84), v3);
  if ( *(_QWORD *)(v5 + 64) == *(_QWORD *)(v6 + 16) )
    NNDeleteAdjustIndex((unsigned int *)(v5 + 72), v4);
  if ( *(_QWORD *)(v5 + 80) == *(_QWORD *)(v6 + 16) )
    NNDeleteAdjustIndex((unsigned int *)(v5 + 88), v4);
}
