/*
 * XREFs of xxxMNChar @ 0x1402D9470
 * Callers:
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNKeyFilter @ 0x1402FC2DC (xxxMNKeyFilter.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     xxxMessageBeep @ 0x1401B1154 (xxxMessageBeep.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402DA6FC (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1402FC18C (xxxMNFindChar.c)
 */

_QWORD *__fastcall xxxMNChar(__int64 **a1, __int64 a2, unsigned int a3)
{
  __int64 *v6; // rax
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  char v21; // si
  __int64 v22; // rcx
  ULONG_PTR v24[2]; // [rsp+20h] [rbp-50h] BYREF
  ULONG_PTR v25[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v28; // [rsp+68h] [rbp-8h]
  int v29; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+58h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v27);
  v6 = *a1;
  v7 = 0;
  v8 = 0;
  v30 = 0LL;
  v29 = 0;
  v9 = *(_QWORD *)(*v6 + 40);
  v28 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v27, v9);
  if ( (*(_DWORD *)**a1 & 0x8000) == 0 )
  {
    v10 = v28;
    if ( !v28 )
      v10 = *(_QWORD *)v27[0];
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v25, v10);
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v24, *(_QWORD *)(**a1 + 48));
    v11 = xxxMNFindChar(v27, a3, *(unsigned int *)(**a1 + 80), &v29);
    v12 = v11;
    if ( v11 != -1 )
    {
      v13 = v11;
      while ( 1 )
      {
        v14 = v28;
        if ( !v28 )
          v14 = *(_QWORD *)v27[0];
        v15 = MNGetpItemFromIndex(v14, v12);
        if ( !v15 || (*(_DWORD *)(*(_QWORD *)v15 + 4LL) & 3) == 0 )
          break;
        v12 = xxxMNFindChar(v27, a3, v12, &v29);
        if ( v12 == v13 )
          goto LABEL_52;
      }
      v16 = v12;
      do
      {
        v17 = xxxMNFindChar(v27, a3, v12, &v29);
        v18 = v28;
        v12 = v17;
        if ( !v28 )
          v18 = *(_QWORD *)v27[0];
        v19 = MNGetpItemFromIndex(v18, v17);
      }
      while ( v19 && (*(_DWORD *)(*(_QWORD *)v19 + 4LL) & 3) != 0 && v12 != v13 );
      if ( v13 == v12 || v12 == v16 )
        v8 = 1;
      v12 = v16;
      if ( v16 != -1 )
        goto LABEL_46;
      v7 = v30;
    }
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      if ( a3 == 32 )
      {
        if ( (*(_DWORD *)**a1 & 4) != 0 )
        {
          v12 = 0;
          v8 = 1;
          goto LABEL_46;
        }
        if ( *(_QWORD *)(**a1 + 48) )
        {
LABEL_32:
          if ( (unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
            xxxMNChar(a1, a2, a3);
          goto LABEL_53;
        }
      }
      if ( v12 != -1 )
      {
LABEL_46:
        xxxMNSelectItem(a1, a2, v12);
        if ( v8 )
          xxxMNKeyDown(a1, a2, 13LL);
        goto LABEL_53;
      }
    }
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      if ( *(_QWORD *)(**a1 + 48) )
      {
        Win32HM_ExchangeThreadLock<1>(*(_QWORD *)(**a1 + 48), (__int64)v24);
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(BugCheckParameter3, *(_QWORD *)(**a1 + 48));
        v12 = xxxMNFindChar(BugCheckParameter3, a3, 0LL, &v29);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)BugCheckParameter3);
        if ( v12 != -1 )
          goto LABEL_32;
      }
    }
    v20 = (*(_DWORD *)**a1 & 4) << 11;
    v21 = v20 | 0x10;
    if ( (*(_BYTE *)**a1 & 1) != 0 )
      v21 = v20;
    if ( *(_QWORD *)(**a1 + 8) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *(_QWORD *)(**a1 + 8));
      v7 = xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x120u);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
    if ( HIWORD(v7) )
    {
      if ( HIWORD(v7) != 1 )
      {
        if ( HIWORD(v7) == 2 )
        {
          v8 = 1;
        }
        else if ( HIWORD(v7) != 3 )
        {
LABEL_45:
          if ( v12 != -1 )
            goto LABEL_46;
LABEL_53:
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v24);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v25);
          return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v27);
        }
        v12 = (__int16)v7;
        if ( (unsigned int)(unsigned __int16)v7 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
          goto LABEL_53;
        goto LABEL_45;
      }
    }
    else
    {
      v22 = **a1;
      if ( !*(_QWORD *)(v22 + 8) || *((_QWORD *)PtiCurrent(v22) + 198) != *(_QWORD *)(**a1 + 8) )
        xxxMessageBeep(0LL);
      if ( (v21 & 0x10) != 0 )
        goto LABEL_53;
    }
LABEL_52:
    xxxMNCancel(a2, 0, 0, 0LL);
    goto LABEL_53;
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v27);
}
