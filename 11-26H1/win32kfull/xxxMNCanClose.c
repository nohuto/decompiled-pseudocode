/*
 * XREFs of xxxMNCanClose @ 0x140032C30
 * Callers:
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     ?xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z @ 0x14014AF64 (-xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z.c)
 *     xxxCalcCaptionButton @ 0x14014AFF8 (xxxCalcCaptionButton.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x14014DE9C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 * Callees:
 *     xxxGetSysMenuPtr @ 0x14000EF90 (xxxGetSysMenuPtr.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1401F3E20 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 */

__int64 __fastcall xxxMNCanClose(_QWORD *a1)
{
  char v2; // di
  __int64 SysMenuPtr; // rax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdi
  struct tagTHREADINFO *v7; // rax
  struct tagTHREADINFO *v8; // rdx
  __int64 v9; // rdi
  char v10; // si
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int64 *v18; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF

  v2 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v16);
  if ( (*(_BYTE *)(*(_QWORD *)(a1[17] + 8LL) + 9LL) & 2) != 0 )
    goto LABEL_29;
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v4 = 1;
  v17 = 0LL;
  v5 = SysMenuPtr;
  if ( SysMenuPtr == *(_QWORD *)v16[0]
    || ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v16), !v5)
      ? (v16[0] = gSmartObjNullRef)
      : (v16[0] = *(_QWORD *)(v5 + 152), ++*(_DWORD *)(v16[0] + 8LL)),
        !v17) )
  {
    if ( !*(_QWORD *)v16[0] )
      goto LABEL_22;
  }
  v6 = *(_QWORD *)v16[0];
  v7 = PtiCurrent();
  v8 = v7;
  v18 = (__int64 *)gSmartObjNullRef;
  if ( v6 )
  {
    v18 = *(__int64 **)(v6 + 152);
    ++*(_DWORD *)(*(_QWORD *)(v6 + 152) + 8LL);
  }
  v19[0] = *((_QWORD *)v7 + 209);
  *((_QWORD *)v7 + 209) = v19;
  v19[1] = v17;
  v9 = *v18;
  if ( *v18 != *(_QWORD *)v16[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v16);
    if ( v9 )
    {
      v16[0] = *(_QWORD *)(v9 + 152);
      ++*(_DWORD *)(v16[0] + 8LL);
    }
    else
    {
      v16[0] = gSmartObjNullRef;
    }
  }
  v2 = 1;
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v16, v8) )
    v10 = 0;
  else
LABEL_22:
    v10 = 1;
  if ( (v2 & 1) != 0 )
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v18);
  if ( v10 )
    goto LABEL_29;
  v11 = v17;
  if ( !v17 )
    v11 = *(_QWORD *)v16[0];
  v12 = MNLookUpItem(v11, 61536LL, 0LL, 0LL);
  if ( !v12 )
  {
    v14 = v17;
    if ( !v17 )
      v14 = *(_QWORD *)v16[0];
    v12 = MNLookUpItem(v14, 32864LL, 0LL, 0LL);
    if ( !v12 )
    {
      v15 = v17;
      if ( !v17 )
        v15 = *(_QWORD *)v16[0];
      v12 = MNLookUpItem(v15, 49264LL, 0LL, 0LL);
      if ( !v12 )
        goto LABEL_29;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)v12 + 4LL) & 3) != 0 )
LABEL_29:
    v4 = 0;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v16);
  return v4;
}
