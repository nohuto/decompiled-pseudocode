/*
 * XREFs of ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1401FAD80
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x140123D9C (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     GreExtTextOutW @ 0x14012725C (GreExtTextOutW.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x1401DABA8 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     xxxClientExtTextOutW @ 0x1401FAFD0 (xxxClientExtTextOutW.c)
 *     GetPrefixCount @ 0x1401FB59C (GetPrefixCount.c)
 *     xxxPSMTextOut @ 0x1401FB8A8 (xxxPSMTextOut.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x14028F650 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall xxxDrawMenuItemText(
        __int64 a1,
        __int64 a2,
        HDC a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8)
{
  WCHAR *SourceString; // rbx
  __int64 v13; // rcx
  ULONG_PTR v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v22; // [rsp+30h] [rbp-D0h]
  int PrefixCount; // [rsp+40h] [rbp-C0h]
  struct tagTHREADINFO *v24; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  WCHAR v29[4]; // [rsp+90h] [rbp-70h] BYREF

  v28 = a6;
  v24 = PtiCurrent(a1);
  v27 = *(_QWORD *)(a2 + 88);
  v26 = -1LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  if ( a7 >= 255 )
  {
    v14 = Win32AllocPoolZInit(2LL * (a7 + 1), 1953657685LL);
    SourceString = (WCHAR *)v14;
    if ( !v14 )
      goto LABEL_11;
    Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
      BugCheckParameter2,
      v14,
      (__int64)Win32FreePool);
  }
  else
  {
    SourceString = v29;
  }
  PrefixCount = GetPrefixCount(a6, (unsigned int)a7, SourceString, (unsigned int)a7);
  v22 = a7 - HIWORD(PrefixCount);
  if ( !(unsigned int)CALL_LPK(v24) )
  {
    GreExtTextOutW(a3, a4, a5, 0, 0LL, (__int64)SourceString, v22);
LABEL_8:
    if ( a8
      || (*(_DWORD *)(W32GetUserSessionState(v16, v15) + 66792) & 0x20000) != 0
      || (v20 = *(unsigned int *)(W32GetUserSessionState(v18, v17) + 66796), (v20 & 0x20) != 0)
      || *(int *)(W32GetUserSessionState(v20, v19) + 66796) >= 0
      || (LOBYTE(v14) = GetAppCompatFlags2(1024LL), (v14 & 2) != 0) )
    {
      if ( (unsigned int)CALL_LPK(v24) )
        LOBYTE(v14) = xxxPSMTextOut(a3, a7, 0x200000);
      else
        LOBYTE(v14) = xxxDrawItemUnderline(a1, a2, a3, a4, a5, SourceString, (unsigned __int16)PrefixCount);
    }
    goto LABEL_11;
  }
  xxxClientExtTextOutW(a3, 0LL, SourceString, v22);
  v13 = *(_QWORD *)(a1 + 16);
  if ( !v13 )
    v13 = **(_QWORD **)a1;
  LOBYTE(v14) = MNIspItemValid(v13, a2);
  if ( (_BYTE)v14 )
  {
    LOBYTE(v14) = v27;
    if ( v27 == *(_QWORD *)(a2 + 88) )
      goto LABEL_8;
  }
LABEL_11:
  if ( v26 != -1 )
    LOBYTE(v14) = PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
  return v14;
}
