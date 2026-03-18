/*
 * XREFs of xxxPSMGetTextExtent @ 0x1401FB45C
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14000C0D0 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     xxxClientGetTextExtentPointW @ 0x140122668 (xxxClientGetTextExtentPointW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x140123D9C (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x1401DABA8 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     GetPrefixCount @ 0x1401FB59C (GetPrefixCount.c)
 *     GreGetTextExtentW @ 0x1401FB67C (GreGetTextExtentW.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(Gre::Base *a1, WCHAR *a2, unsigned int a3, struct tagSIZE *a4)
{
  struct tagTHREADINFO *v8; // r15
  WCHAR *p_SourceString; // rdi
  unsigned __int64 v10; // rax
  int v11; // edi
  ULONG_PTR v13; // rax
  bool v14; // zf
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-278h] BYREF
  __int64 v16; // [rsp+40h] [rbp-268h]
  WCHAR SourceString; // [rsp+60h] [rbp-248h] BYREF

  v16 = -1LL;
  v8 = PtiCurrent((__int64)a1);
  *(_OWORD *)BugCheckParameter2 = 0LL;
  if ( a3 < 0xFF )
  {
    p_SourceString = &SourceString;
LABEL_3:
    v10 = (unsigned __int64)GetPrefixCount(a2, a3, p_SourceString, a3) >> 16;
    if ( (_WORD)v10 )
      a2 = p_SourceString;
    v11 = a3 - (unsigned __int16)v10;
    if ( !(_WORD)v10 )
      v11 = a3;
    if ( (unsigned int)CALL_LPK(v8) )
      xxxClientGetTextExtentPointW(a1, a2, v11, a4);
    else
      GreGetTextExtentW((HDC)a1, a2, v11, a4);
    if ( v16 != -1 )
      PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
    return 1LL;
  }
  v13 = Win32AllocPoolZInit(2LL * (int)(a3 + 1), 1953657685LL);
  p_SourceString = (WCHAR *)v13;
  if ( v13 )
  {
    Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
      BugCheckParameter2,
      v13,
      (__int64)Win32FreePool);
    goto LABEL_3;
  }
  v14 = v16 == -1;
  *a4 = 0LL;
  if ( !v14 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
  return 0LL;
}
