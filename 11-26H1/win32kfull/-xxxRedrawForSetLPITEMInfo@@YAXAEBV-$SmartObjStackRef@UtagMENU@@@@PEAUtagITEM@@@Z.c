/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14000E8C4
 * Callers:
 *     xxxSetMenuItemInfo @ 0x14000E028 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 * Callees:
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     MNGetPopupFromMenu @ 0x14000EA1C (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x14000EC1C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x1400A703C (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1402F3090 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRedrawForSetLPITEMInfo(__int64 **a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rdi
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF

  v4 = PtiCurrent();
  v9 = gSmartObjNullRef;
  v10 = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = &v10;
  v5 = a1[2];
  if ( !v5 )
    v5 = (__int64 *)**a1;
  v6 = MNGetPopupFromMenu(v5, 0LL);
  if ( v6 != *(_QWORD *)v9 )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v9);
    if ( v6 )
    {
      v9 = *(_QWORD *)(v6 + 88);
      ++*(_DWORD *)(v9 + 8);
    }
    else
    {
      v9 = gSmartObjNullRef;
    }
  }
  if ( !*(_QWORD *)v9 )
    goto LABEL_19;
  xxxMNUpdateShownMenu(&v9, a2, 1LL);
  v8 = (__int64)a1[2];
  if ( !v8 )
    v8 = **a1;
  if ( MNIspItemValid(v8, a2) )
  {
LABEL_19:
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x100) != 0
      && *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 61536
      && *(_QWORD *)(**a1 + 80) )
    {
      DwmUpdateCloseButton(*(struct tagWND **)(**a1 + 80), 1);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v9);
}
