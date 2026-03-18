/*
 * XREFs of xxxHiliteMenuItem @ 0x1402F2B8C
 * Callers:
 *     NtUserHiliteMenuItem @ 0x1402B6200 (NtUserHiliteMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1401BAF24 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x14020D8E4 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHiliteMenuItem(struct tagWND *a1, __int64 **a2, unsigned int a3, __int64 a4)
{
  char v4; // si
  int TopLevelMenuIndex; // edi
  __int64 v8; // r8
  __int64 *v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a4;
  TopLevelMenuIndex = a3;
  if ( (a4 & 0x400) == 0 )
    TopLevelMenuIndex = UT_FindTopLevelMenuIndex((__int64)a2, a3);
  v8 = **a2;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 40LL) & 1) == 0 )
    xxxMNRecomputeBarIfNeeded((__int64)a1, (__int64)a2, v8, a4);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v10, 0LL);
  xxxMNInvertItem(v10, a2, TopLevelMenuIndex, a1, v4 & 0x80);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v10);
  return 1LL;
}
