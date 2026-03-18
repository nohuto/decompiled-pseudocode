/*
 * XREFs of ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C0138524
 * Callers:
 *     xxxMNButtonUp @ 0x1C013849C (xxxMNButtonUp.c)
 *     xxxMNDoubleClick @ 0x1C0216AA0 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0139638 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     zzzStartFade @ 0x1C01397A8 (zzzStartFade.c)
 */

void __fastcall xxxMNDismissWithNotify(
        struct tagMENUSTATE *a1,
        struct tagPOPUPMENU *a2,
        struct tagITEM *a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r8d

  if ( (**(_DWORD **)a1 & 4) != 0 )
  {
    v9 = a5;
    v8 = 274;
    goto LABEL_4;
  }
  if ( (*((_DWORD *)a1 + 2) & 0x20000) == 0 )
  {
    v8 = 273;
    v9 = 0LL;
LABEL_4:
    a4 = *((_DWORD *)a3 + 2);
    goto LABEL_5;
  }
  v8 = 294;
  v9 = **((_QWORD **)a2 + 5);
LABEL_5:
  if ( (unsigned int)zzzMNFadeSelection(*((struct tagMENU **)a2 + 5), a3) )
    zzzStartFade(v11, v10, v12);
  v13 = -3;
  if ( v8 == 274 )
    v13 = -1;
  xxxWindowEvent(0x8013u, *((__int64 **)a2 + 2), v13, a4, 0);
  xxxMNCancel(a1, v8, a4, v9);
}
