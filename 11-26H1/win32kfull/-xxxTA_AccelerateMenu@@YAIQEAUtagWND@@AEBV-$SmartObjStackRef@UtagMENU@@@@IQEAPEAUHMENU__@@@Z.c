/*
 * XREFs of ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1401BAD98
 * Callers:
 *     xxxTranslateAccelerator @ 0x1401BA998 (xxxTranslateAccelerator.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1401BAF24 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

__int64 __fastcall xxxTA_AccelerateMenu(struct tagWND *a1, _QWORD **a2, unsigned int a3, _QWORD *a4)
{
  __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int TopLevelMenuIndex; // edi
  __int64 v12; // r14
  _QWORD *v13; // r8
  int v14; // edi
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v19);
  v18 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) )
    goto LABEL_2;
  TopLevelMenuIndex = UT_FindTopLevelMenuIndex(v8, a3);
  if ( TopLevelMenuIndex == -1 )
    goto LABEL_2;
  v9 = 2;
  xxxSendMessage(a1, 0x116u);
  if ( TopLevelMenuIndex >= *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 44LL) )
    goto LABEL_2;
  v12 = *(_QWORD *)(**a2 + 88LL);
  v13 = *(_QWORD **)(v12 + 96LL * (int)TopLevelMenuIndex + 16);
  if ( v13 )
  {
    *a4 = *v13;
    xxxSendMessage(a1, 0x117u);
    if ( TopLevelMenuIndex < *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 44LL) )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(v12 + 96LL * (int)TopLevelMenuIndex) + 4LL) & 3;
      goto LABEL_10;
    }
LABEL_2:
    *a4 = 0LL;
    v9 = 0;
    goto LABEL_3;
  }
  v14 = 0;
LABEL_10:
  v15 = v20;
  if ( !v20 )
    v15 = *(_QWORD *)v19[0];
  v16 = a2[2];
  v18 = v15;
  if ( !v16 )
    v16 = (_QWORD *)**a2;
  v17 = MNLookUpItem(v16, a3, 0, &v18);
  v20 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v19, v18);
  if ( !v17 )
    goto LABEL_2;
  if ( (*(_DWORD *)(*(_QWORD *)v17 + 4LL) & 3) != 0 || v14 )
    v9 = 3;
LABEL_3:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v19);
  return v9;
}
