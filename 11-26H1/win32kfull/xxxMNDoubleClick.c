/*
 * XREFs of xxxMNDoubleClick @ 0x1402D9948
 * Callers:
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 * Callees:
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1402376D0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402D91A0 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     _GetMenuDefaultItem @ 0x140302918 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall xxxMNDoubleClick(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdx
  _QWORD *v8; // r10
  __int64 v9; // rdx
  int MenuDefaultItem; // eax
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r10
  unsigned __int64 v15; // [rsp+20h] [rbp-60h]
  unsigned __int64 v16; // [rsp+20h] [rbp-60h]
  __int64 v17[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h]
  _OWORD v19[3]; // [rsp+48h] [rbp-38h] BYREF

  v4 = a3;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v17);
  LODWORD(v15) = 2;
  memset(v19, 0, sizeof(v19));
  v6 = 1;
  if ( (unsigned int)xxxInternalGetMessage((__int64)v19, 0, 0, 0, v15, 0)
    && (DWORD2(v19[0]) == 514 || DWORD2(v19[0]) == 162) )
  {
    LODWORD(v16) = 1;
    xxxInternalGetMessage((__int64)v19, 0, SDWORD2(v19[0]), SDWORD2(v19[0]), v16, 0);
  }
  v7 = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  v18 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v17, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v17)
    || (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 40LL) + 44LL) )
  {
    xxxMNDoScroll(a2, *(_DWORD *)(**(_QWORD **)a2 + 80LL), 0);
LABEL_17:
    v6 = 0;
    goto LABEL_18;
  }
  v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 88LL) + 96 * v4);
  if ( (*(_DWORD *)(*v8 + 4LL) & 3) != 0 )
    goto LABEL_17;
  while ( 1 )
  {
    v9 = v8[2];
    if ( !v9 )
      break;
    v18 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v17, v9);
    MenuDefaultItem = GetMenuDefaultItem();
    LODWORD(v4) = MenuDefaultItem;
    if ( MenuDefaultItem == -1 )
      goto LABEL_17;
    v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 88LL) + 96LL * MenuDefaultItem);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v17) )
    goto LABEL_17;
  v12 = v18;
  if ( !v18 )
    v12 = *(_QWORD *)v17[0];
  if ( !MNIspItemValid(v12, v11) )
    goto LABEL_17;
  xxxMNDismissWithNotify(a1, a2, v13, v4, 0LL);
LABEL_18:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v17);
  return v6;
}
