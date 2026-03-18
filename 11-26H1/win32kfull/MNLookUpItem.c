/*
 * XREFs of MNLookUpItem @ 0x1400344B8
 * Callers:
 *     _CheckMenuItem @ 0x14000ABE4 (_CheckMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x14000E028 (xxxSetMenuItemInfo.c)
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     xxxEnableMenuItem @ 0x14000E684 (xxxEnableMenuItem.c)
 *     _SetMenuDefaultItem @ 0x14000F3B0 (_SetMenuDefaultItem.c)
 *     xxxMNCanClose @ 0x140032C30 (xxxMNCanClose.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x1400A703C (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1401BAD98 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1401BAF24 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     _GetMenuState @ 0x140220F5C (_GetMenuState.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall MNLookUpItem(_QWORD *a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v5; // r15
  _QWORD *v8; // r13
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v10; // rcx
  unsigned int v11; // ecx
  _QWORD *v12; // r14
  int i; // r12d
  int v14; // ecx
  __int64 v15; // rsi
  _QWORD *v17; // rax
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  _QWORD *v20; // [rsp+30h] [rbp-10h]

  v5 = a2;
  v8 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v10 = *CurrentThreadWin32Thread;
  else
    v10 = 0LL;
  v18 = gSmartObjNullRef;
  v19 = *(_QWORD *)(v10 + 1672);
  *(_QWORD *)(v10 + 1672) = &v19;
  v20 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( !a1 )
    goto LABEL_27;
  v11 = *(_DWORD *)(a1[5] + 44LL);
  if ( !v11 || (_DWORD)v5 == -1 )
    goto LABEL_27;
  if ( a3 )
  {
    if ( (unsigned int)v5 < v11 )
    {
      v15 = a1[11] + 96 * v5;
      if ( a4 )
        *a4 = a1;
      goto LABEL_17;
    }
LABEL_27:
    v15 = 0LL;
    goto LABEL_17;
  }
  v12 = (_QWORD *)a1[11];
  for ( i = 0; i < *(_DWORD *)(a1[5] + 44LL); ++i )
  {
    v14 = *(_DWORD *)(*v12 + 8LL);
    if ( v12[2] )
    {
      if ( v14 == (_DWORD)v5 )
      {
        v20 = 0LL;
        if ( a1 != *(_QWORD **)v18 )
        {
          SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v18);
          v18 = a1[19];
          ++*(_DWORD *)(v18 + 8);
        }
        v8 = v12;
      }
      v15 = MNLookUpItem(v12[2], (unsigned int)v5, 0LL, a4);
      if ( v15 )
        goto LABEL_17;
    }
    else if ( v14 == (_DWORD)v5 )
    {
      if ( a4 )
        *a4 = a1;
      v15 = (__int64)v12;
      goto LABEL_17;
    }
    v12 += 12;
  }
  v17 = v20;
  if ( !v20 )
  {
    if ( !*(_QWORD *)v18 )
      goto LABEL_27;
    v17 = v20;
  }
  if ( a4 )
  {
    if ( !v17 )
      v17 = *(_QWORD **)v18;
    *a4 = v17;
  }
  v15 = (__int64)v8;
LABEL_17:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v18);
  return v15;
}
