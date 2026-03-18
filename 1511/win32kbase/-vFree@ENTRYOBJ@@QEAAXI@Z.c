/*
 * XREFs of ?vFree@ENTRYOBJ@@QEAAXI@Z @ 0x1C0034380
 * Callers:
 *     HmgShareUnlockRemoveObject @ 0x1C00759C0 (HmgShareUnlockRemoveObject.c)
 *     HmgFree @ 0x1C00B5EB0 (HmgFree.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C002522C (HmgDecProcessHandleCount.c)
 */

void __fastcall ENTRYOBJ::vFree(ENTRYOBJ *this, __int64 a2, int a3)
{
  _QWORD *SystemArgument2; // rsi
  __int64 v5; // rdi
  __int64 v6; // r14
  int v7; // ebx

  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v5 = (unsigned int)a2;
  v6 = 3LL * (unsigned int)a2;
  v7 = *((_DWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 6 * (unsigned int)a2 + 2);
  HmgDecProcessHandleCount(v7 & 0xFFFFFFFE, a2, a3);
  SystemArgument2[v6] = ghFreeHmgr;
  *((_WORD *)this + 6) += 256;
  *((_QWORD *)this + 2) = 0LL;
  --gcCurHmgr;
  *((_BYTE *)this + 14) = 0;
  LODWORD(SystemArgument2[v6 + 1]) = v7 & 1;
  ghFreeHmgr = v5;
}
