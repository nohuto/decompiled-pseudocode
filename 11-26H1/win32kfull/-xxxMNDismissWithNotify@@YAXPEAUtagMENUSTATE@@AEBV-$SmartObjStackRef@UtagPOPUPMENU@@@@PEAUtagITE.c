/*
 * XREFs of ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1402376D0
 * Callers:
 *     xxxMNButtonUp @ 0x1402375A8 (xxxMNButtonUp.c)
 *     xxxMNDoubleClick @ 0x1402D9948 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     zzzStartFade @ 0x14021AFA8 (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402377E4 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 */

_QWORD *__fastcall xxxMNDismissWithNotify(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v10; // edi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v16[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( (**(_DWORD **)a1 & 4) != 0 )
  {
    v10 = 274;
LABEL_3:
    a4 = *(_DWORD *)(*(_QWORD *)a3 + 8LL);
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
  {
    v10 = 273;
    a5 = 0LL;
    goto LABEL_3;
  }
  v10 = 294;
  a5 = **(_QWORD **)(**(_QWORD **)a2 + 40LL);
LABEL_4:
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v16, *(_QWORD *)(**(_QWORD **)a2 + 40LL));
  v11 = zzzMNFadeSelection(v16, a3);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v16);
  if ( v11 )
    zzzStartFade(v13, v12);
  v14 = -1;
  if ( v10 != 274 )
    v14 = -3;
  xxxWindowEvent(0x8013u, *(struct tagWND **)(**(_QWORD **)a2 + 16LL), v14, a4, 0);
  return xxxMNCancel(a1, v10, a4, a5);
}
