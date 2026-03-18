/*
 * XREFs of xxxGetSystemMenu @ 0x140121614
 * Callers:
 *     NtUserGetSystemMenu @ 0x140121570 (NtUserGetSystemMenu.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxLoadSysMenu @ 0x14000BE58 (xxxLoadSysMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _GetSubMenu @ 0x14000F1E0 (_GetSubMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14004B768 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x1400A703C (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     GetpwndNotifypMenuState @ 0x140122DB8 (GetpwndNotifypMenuState.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x14021CB3C (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct _HEAD *__fastcall xxxGetSystemMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  struct _HEAD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct tagTHREADINFO *v9; // rax
  unsigned __int8 *SysMenu; // rax
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 SubMenu; // rax
  struct _HEAD *v15; // rcx
  struct tagWND *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  struct tagWND *v21; // [rsp+38h] [rbp-28h]
  _QWORD *v22[2]; // [rsp+40h] [rbp-20h] BYREF
  struct _HEAD *v23; // [rsp+50h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v22);
  v4 = *((_QWORD *)a1 + 20);
  v5 = 0LL;
  v23 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v22, v4);
  if ( a2 )
  {
    if ( (v23 || *v22[0]) && (*(_DWORD *)(*(_QWORD *)(*v22[0] + 40LL) + 40LL) & 0x80u) == 0 )
    {
      if ( UnlockWndMenuWorker(a1, 1) )
      {
        v15 = v23;
        if ( !v23 )
          v15 = (struct _HEAD *)*v22[0];
        DestroyMenu(v15);
      }
      DwmUpdateCloseButton(a1, 1);
    }
  }
  else if ( !v23 && !*v22[0] || (v6 = *(unsigned int *)(*(_QWORD *)(*v22[0] + 40LL) + 40LL), (v6 & 0x80u) != 0LL) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
    {
      v9 = PtiCurrent(v6);
      v18 = gSmartObjNullRef;
      v19 = *((_QWORD *)v9 + 209);
      *((_QWORD *)v9 + 209) = &v19;
      SysMenu = xxxLoadSysMenu(*((_QWORD *)a1 + 20) != 0LL ? 48 : 16);
      v23 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v22, (__int64)SysMenu);
      if ( !v23 && !*v22[0] )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v18);
        goto LABEL_6;
      }
      if ( (unsigned int)IsWindowBeingDestroyed(a1) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 454LL);
      LockWndMenuWorker(a1, 1u, v22);
      v11 = *((_QWORD *)a1 + 20);
      v23 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v22, v11);
      v12 = (__int64 *)GetpwndNotifypMenuState(a1);
      if ( v12 )
        v13 = *v12;
      else
        v13 = 0LL;
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v18, v13);
      if ( *(_QWORD *)v18 && (**(_DWORD **)v18 & 8) == 0 && *(struct tagWND **)(*(_QWORD *)v18 + 16LL) == a1 )
      {
        v16 = v23;
        if ( (**(_DWORD **)v18 & 4) != 0 )
        {
          if ( !v23 )
            v16 = (struct tagWND *)*v22[0];
          v17 = *(_QWORD *)v18 + 40LL;
        }
        else
        {
          if ( !v23 )
            v16 = (struct tagWND *)*v22[0];
          v17 = *(_QWORD *)v18 + 48LL;
        }
        v21 = v16;
        v20 = v17;
        HMAssignmentLock(&v20, 0LL);
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v18);
    }
  }
  v7 = *((_QWORD *)a1 + 20);
  if ( v7 )
  {
    SubMenu = GetSubMenu(v7);
    v23 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v22, SubMenu);
    if ( (v23 || *v22[0])
      && (v21 = a1,
          *(_DWORD *)(*(_QWORD *)(*v22[0] + 40LL) + 40LL) |= 0x100u,
          v20 = *v22[0] + 80LL,
          HMAssignmentLock(&v20, 0LL),
          v23) )
    {
      v5 = v23;
    }
    else
    {
      v5 = (struct _HEAD *)*v22[0];
    }
  }
LABEL_6:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v22);
  return v5;
}
