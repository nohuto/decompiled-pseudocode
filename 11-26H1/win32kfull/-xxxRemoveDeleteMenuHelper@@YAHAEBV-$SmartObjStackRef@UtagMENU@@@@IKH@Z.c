/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8
 * Callers:
 *     NtUserDeleteMenu @ 0x14000D4A0 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x14004A3E0 (NtUserRemoveMenu.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x14000EA1C (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x14000EC1C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     MNFreeItem @ 0x140034288 (MNFreeItem.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x1400A703C (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1401203C8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x14012CF58 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     MNGetpItemIndex @ 0x1401DADAC (MNGetpItemIndex.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1402F2FEC (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1402F3090 (xxxMNUpdateShownMenu.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(__int64 a1, unsigned int a2, __int16 a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  unsigned int v10; // r12d
  __int64 v11; // rsi
  _QWORD *v12; // rcx
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rsi
  int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // r15d
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rcx
  __int64 v34; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v35; // [rsp+28h] [rbp-58h] BYREF
  __int64 v36; // [rsp+30h] [rbp-50h] BYREF
  __int64 v37; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v38[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v39[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v40; // [rsp+60h] [rbp-20h]
  __int64 v41[2]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD *v42; // [rsp+78h] [rbp-8h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v39, a1);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v41);
  v7 = 0;
  v35 = 0LL;
  v9 = PtiCurrent(v8);
  v10 = 0;
  v36 = gSmartObjNullRef;
  v37 = *((_QWORD *)v9 + 209);
  *((_QWORD *)v9 + 209) = &v37;
  v42 = v40;
  v11 = *(_QWORD *)v39[0];
  if ( *(_QWORD *)v39[0] != *(_QWORD *)v41[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v41);
    if ( v11 )
    {
      v41[0] = *(_QWORD *)(v11 + 152);
      ++*(_DWORD *)(v41[0] + 8);
    }
    else
    {
      v41[0] = gSmartObjNullRef;
    }
  }
  v12 = v40;
  if ( v40 )
  {
    v13 = (__int64)v40;
  }
  else
  {
    v12 = 0LL;
    v13 = *(_QWORD *)v39[0];
  }
  v34 = v13;
  if ( !v12 )
    v12 = *(_QWORD **)v39[0];
  v14 = a3 & 0x400;
  v15 = MNLookUpItem(v12, a2, v14, &v34);
  v16 = v34;
  v17 = v15;
  v40 = 0LL;
  if ( v34 != *(_QWORD *)v39[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v39);
    if ( v16 )
    {
      v39[0] = *(_QWORD *)(v16 + 152);
      ++*(_DWORD *)(v39[0] + 8);
    }
    else
    {
      v39[0] = gSmartObjNullRef;
    }
  }
  if ( v17 )
    goto LABEL_59;
  if ( a2 >= 0xFFFFF000 && !v14 )
  {
    v40 = v42;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v39, *(_QWORD *)v41[0]);
    v30 = v40;
    if ( v40 )
    {
      v31 = (__int64)v40;
    }
    else
    {
      v30 = 0LL;
      v31 = *(_QWORD *)v39[0];
    }
    v34 = v31;
    if ( !v30 )
      v30 = *(_QWORD **)v39[0];
    v17 = MNLookUpItem(v30, (unsigned __int16)a2, 0, &v34);
    v40 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v39, v34);
    if ( v17 )
    {
LABEL_59:
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 40LL) + 40LL) & 0x100) == 0
        || (v18 = 1, *(_DWORD *)(*(_QWORD *)v17 + 8LL) != 61536) )
      {
        v18 = 0;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v17 + 4LL) & 0x1000) != 0 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 40LL) + 40LL) &= ~0x400u;
      v19 = (__int64)v40;
      if ( !v40 )
        v19 = *(_QWORD *)v39[0];
      v20 = MNGetPopupFromMenu(v19, &v35);
      if ( v20 != *(_QWORD *)v36 )
      {
        SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v36);
        if ( v20 )
        {
          v36 = *(_QWORD *)(v20 + 88);
          ++*(_DWORD *)(v36 + 8);
        }
        else
        {
          v36 = gSmartObjNullRef;
        }
      }
      if ( *(_QWORD *)v36 )
      {
        v33 = v40;
        if ( !v40 )
          v33 = *(_QWORD **)v39[0];
        v10 = MNGetpItemIndex(v33, v17, v21, v22);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v38, *(_QWORD *)v36);
        MNDeleteAdjustIndexes(v35, v38, v10);
      }
      v23 = (__int64)v40;
      if ( !v40 )
        v23 = *(_QWORD *)v39[0];
      MNFreeItem(v23, (_QWORD *)v17, a4);
      *(_DWORD *)(*(_QWORD *)v39[0] + 64LL) = 0;
      *(_DWORD *)(*(_QWORD *)v39[0] + 68LL) = 0;
      v25 = *(_QWORD *)v39[0];
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 40LL) + 44LL) == 1 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*(_QWORD *)v39[0] + 24LL) + 136LL), 0, *(PVOID *)(v25 + 96));
        Win32FreePool(*(void **)(*(_QWORD *)v39[0] + 88LL));
        *(_DWORD *)(*(_QWORD *)v39[0] + 60LL) = 0;
        v32 = *(_QWORD *)v39[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 40LL) + 32LL) = 0LL;
        *(_QWORD *)(v32 + 88) = 0LL;
      }
      else
      {
        v26 = 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 40LL) + 44LL) - v17 + *(_QWORD *)(v25 + 88) - 96;
        if ( v26 )
        {
          memmove(
            *(void **)v17,
            *(const void **)(v17 + 96),
            (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 40LL) + 44LL)
                         + **(_DWORD **)(*(_QWORD *)v39[0] + 88LL)
                         - *(_DWORD *)(v17 + 96)));
          memmove((void *)v17, (const void *)(v17 + 96), v26);
          v27 = 0xAAAAAAAAAAAAAAABuLL * ((v17 - *(_QWORD *)(*(_QWORD *)v39[0] + 88LL)) >> 5);
          while ( (unsigned int)v27 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 40LL) + 44LL) - 1 )
          {
            v24 = 96LL * (int)v27;
            *(_QWORD *)(v24 + *(_QWORD *)(*(_QWORD *)v39[0] + 88LL)) = 112LL * (unsigned int)v27
                                                                     + *(_QWORD *)(*(_QWORD *)v39[0] + 96LL);
            LODWORD(v27) = v27 + 1;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 88LL) + v24 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v39[0]
                                                                                                 + 88LL)
                                                                                     + v24)
                                                                         - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v39[0]
                                                                                                 + 24LL)
                                                                                     + 16LL);
          }
        }
        v28 = *(_QWORD *)v39[0];
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v39[0] + 60LL)
                          - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 40LL) + 44LL)) >= 9 )
        {
          LOBYTE(v28) = 1;
          MNAllocMenuItems(v39, v28, v24);
        }
      }
      --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 40LL) + 44LL);
      if ( v18 && *(_QWORD *)(*(_QWORD *)v39[0] + 80LL) )
        DwmUpdateCloseButton(*(struct tagWND **)(*(_QWORD *)v39[0] + 80LL), 1);
      if ( *(_QWORD *)v36 )
        xxxMNUpdateShownMenu(&v36, *(_QWORD *)(*(_QWORD *)v39[0] + 88LL) + 96LL * v10, 2LL);
      v7 = 1;
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v36);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v41);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v39);
  return v7;
}
