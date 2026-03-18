/*
 * XREFs of MNGetPopupFromMenu @ 0x14000EA1C
 * Callers:
 *     xxxSetMenuInfo @ 0x14000CF70 (xxxSetMenuInfo.c)
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     xxxEnableMenuItem @ 0x14000E684 (xxxEnableMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14000E8C4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14020D7E4 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402377E4 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x14000EC1C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     MNAnimate @ 0x14000ED10 (MNAnimate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall MNGetPopupFromMenu(__int64 a1, __int64 **a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  struct tagTHREADINFO *v10; // rbx
  _QWORD *v11; // rcx
  __int64 v13; // rbx
  _DWORD *v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  v14 = (_DWORD *)gSmartObjNullRef;
  v15 = *(_QWORD *)(v5 + 1672);
  *(_QWORD *)(v5 + 1672) = &v15;
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 && (v7 = *(__int64 **)(*(_QWORD *)(v6 + 16) + 640LL)) != 0LL && (v7[1] & 4) != 0 )
  {
    if ( a2 )
      *a2 = v7;
    v8 = *v7;
    if ( *v7 != *(_QWORD *)v14 )
    {
      SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v14);
      if ( v8 )
      {
        v14 = *(_DWORD **)(v8 + 88);
        ++v14[2];
      }
      else
      {
        v14 = (_DWORD *)gSmartObjNullRef;
      }
    }
    while ( 1 )
    {
      if ( !*(_QWORD *)v14 )
      {
LABEL_13:
        v10 = PtiCurrent();
        SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v14);
        v11 = (_QWORD *)*((_QWORD *)v10 + 209);
        if ( v11 )
          *((_QWORD *)v10 + 209) = *v11;
        return 0LL;
      }
      if ( *(_QWORD *)(*(_QWORD *)v14 + 40LL) == a1 )
        break;
      if ( !*(_QWORD *)(*(_QWORD *)v14 + 24LL) )
        goto LABEL_17;
      v9 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v14 + 24LL));
      if ( !v9 )
        goto LABEL_13;
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v14, *(_QWORD *)(v9 + 8));
    }
    if ( (**(_DWORD **)v14 & 1) != 0 )
      goto LABEL_17;
    MNAnimate(v7, 0LL);
    v13 = *(_QWORD *)v14;
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v14);
    return v13;
  }
  else
  {
LABEL_17:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v14);
    return 0LL;
  }
}
