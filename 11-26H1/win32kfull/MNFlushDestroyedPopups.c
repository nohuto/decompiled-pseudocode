/*
 * XREFs of MNFlushDestroyedPopups @ 0x1402D0840
 * Callers:
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNFreePopup @ 0x14017579C (MNFreePopup.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV?$SmartObjStackRefBase@UtagPOPUPMENU@@@@@Z @ 0x1402D0520 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV-$SmartObjStackRefBase@UtagPO.c)
 */

_QWORD *__fastcall MNFlushDestroyedPopups(_DWORD *a1)
{
  _DWORD *v2; // rdx
  _QWORD v4[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v5[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v6[2]; // [rsp+40h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v4, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v5, 0LL);
  v2 = a1;
LABEL_2:
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v4, (__int64)v2);
  while ( *(_QWORD *)(*(_QWORD *)v4[0] + 72LL) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)v4[0] + 72LL);
    if ( (*v2 & 0x8000) == 0 )
      goto LABEL_2;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v5, (__int64)v2);
    *(_QWORD *)(*(_QWORD *)v4[0] + 72LL) = *(_QWORD *)(*v5[0] + 72);
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v6, *v5[0]);
    MNFreePopup(v6);
    if ( (**(_DWORD **)v5[0] & 0x40000000) != 0 )
      **(_DWORD **)v5[0] &= ~0x20000000u;
    else
      FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU>(v5);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v5);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v4);
}
