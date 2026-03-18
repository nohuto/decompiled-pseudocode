/*
 * XREFs of LockDesktopMenu @ 0x14022E8F8
 * Callers:
 *     xxxLoadSysDesktopMenu @ 0x14022E810 (xxxLoadSysDesktopMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402F454C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall LockDesktopMenu(__int64 a1, __int64 **a2)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v12);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a2)
    && *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL)
    && *(_QWORD *)(*(_QWORD *)(**a2 + 88) + 16LL) )
  {
    v5 = **a2;
    *(_DWORD *)(*(_QWORD *)(v5 + 40) + 40LL) |= 0x40u;
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v5) + 61) + 40LL) + 24LL) + 16LL);
    v7 = a2[2];
    if ( !v7 )
      v7 = (__int64 *)**a2;
    HMChangeOwnerProcess(v7, v6);
    v8 = *(_QWORD *)(*(_QWORD *)(**a2 + 88) + 16LL);
    v13 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v12, v8);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 40LL) + 40LL) |= 0x40u;
    v9 = v13;
    if ( !v13 )
      v9 = *(_QWORD *)v12[0];
    HMChangeOwnerProcess(v9, v6);
    v10 = a2[2];
    if ( !v10 )
      v10 = (__int64 *)**a2;
    v11[0] = a1;
    v11[1] = v10;
    HMAssignmentLock(v11, 0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v12);
    return 1LL;
  }
  else
  {
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v12);
    return 0LL;
  }
}
