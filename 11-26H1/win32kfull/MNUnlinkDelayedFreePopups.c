/*
 * XREFs of MNUnlinkDelayedFreePopups @ 0x1402D0930
 * Callers:
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 */

_QWORD *__fastcall MNUnlinkDelayedFreePopups(__int64 a1)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v4[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v4, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v3, a1);
  while ( *(_QWORD *)v3[0] )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v4, *(_QWORD *)(*(_QWORD *)v3[0] + 72LL));
    **(_DWORD **)v3[0] &= ~0x10000u;
    if ( *(_QWORD *)v3[0] != a1 )
      **(_DWORD **)v3[0] &= ~0x20000000u;
    *(_QWORD *)(*(_QWORD *)v3[0] + 72LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v3[0] + 64LL) = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v3, *(_QWORD *)v4[0]);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v3);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v4);
}
