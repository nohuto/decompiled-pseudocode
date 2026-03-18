/*
 * XREFs of ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C013C724
 * Callers:
 *     xxxMNButtonUp @ 0x1C013ECEC (xxxMNButtonUp.c)
 *     xxxMNDoubleClick @ 0x1C020F63C (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C020F844 (xxxMNKeyDown.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C013CA74 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     zzzStartFade @ 0x1C013F924 (zzzStartFade.c)
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
  int v10; // r8d

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
    zzzStartFade();
  v10 = -3;
  if ( v8 == 274 )
    v10 = -1;
  xxxWindowEvent(0x8013u, *((__int64 **)a2 + 2), v10, a4, 0);
  xxxMNCancel(a1, v8, a4, v9);
}
