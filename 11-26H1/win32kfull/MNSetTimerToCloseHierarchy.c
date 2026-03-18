/*
 * XREFs of MNSetTimerToCloseHierarchy @ 0x1402D938C
 * Callers:
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall MNSetTimerToCloseHierarchy(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v8, 0LL);
  v2 = 0;
  if ( (***(_DWORD ***)a1 & 0x20) != 0 )
  {
    if ( (***(_DWORD ***)a1 & 0x4000) != 0 )
      goto LABEL_8;
    v3 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**(_QWORD **)a1 + 24LL));
    if ( v3 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v8, *(_QWORD *)(v3 + 8));
      if ( *(_QWORD *)v8[0] )
      {
        UserSessionState = W32GetUserSessionState(v5, v4);
        if ( !InternalSetTimer(
                *(_QWORD *)(**(_QWORD **)a1 + 16LL),
                0xFFFFLL,
                *(_DWORD *)(UserSessionState + 66024),
                0LL,
                0,
                16) )
        {
          v2 = -1;
          goto LABEL_9;
        }
        ***(_DWORD ***)a1 |= 0x4000u;
        **(_DWORD **)v8[0] |= 0x1000u;
LABEL_8:
        v2 = 1;
      }
    }
  }
LABEL_9:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v8);
  return v2;
}
