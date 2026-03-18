/*
 * XREFs of ?vFree@ENTRYOBJ@@QEAAXI@Z @ 0x1C0038660
 * Callers:
 *     HmgShareUnlockRemoveObject @ 0x1C00122D0 (HmgShareUnlockRemoveObject.c)
 *     HmgFree @ 0x1C0035650 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C00386E0 (HmgDecProcessHandleCount.c)
 */

void __fastcall ENTRYOBJ::vFree(ENTRYOBJ *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rsi

  v3 = a2;
  v4 = 3LL * a2;
  v5 = *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 8 * v4 + 8);
  v6 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 8 * v4;
  HmgDecProcessHandleCount(v5 & 0xFFFFFFFE);
  *(_QWORD *)v6 = ghFreeHmgr;
  *((_WORD *)this + 6) += 256;
  --gcCurHmgr;
  *((_BYTE *)this + 14) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *(_DWORD *)(v6 + 8) = v5 & 1;
  ghFreeHmgr = v3;
}
