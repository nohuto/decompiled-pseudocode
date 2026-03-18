/*
 * XREFs of _HasCaptionIcon @ 0x14014E1C4
 * Callers:
 *     xxxGetMenuBarInfo @ 0x14000D8F8 (xxxGetMenuBarInfo.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     FindNCHit @ 0x14008AB60 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x14008B6DC (xxxMNFindWindowFromPoint.c)
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     SendDwmIconChange @ 0x14014DA14 (SendDwmIconChange.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x14014DE9C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rsi
  char v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  bool v13; // zf
  __int64 *v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v3 = a1;
  v4 = *(_BYTE *)(v1 + 24);
  if ( v4 < 0 )
    return 0LL;
  if ( (*(_BYTE *)(v1 + 30) & 0xC0) != 0x40 && (v4 & 1) == 0 )
    return 1LL;
  v5 = *(_QWORD *)(v1 + 264);
  if ( v5 )
  {
    v13 = v5 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, v1) + 19904) + 6968LL);
    goto LABEL_10;
  }
  v6 = *(_QWORD *)(v1 + 272);
  if ( !v6 || (a1 = *(_QWORD *)(W32GetUserSessionState(a1, v1) + 19904), v6 == *(_QWORD *)(a1 + 6976)) )
  {
    v7 = *(_QWORD *)(v3 + 136);
    v8 = PtiCurrent(a1);
    v15 = (__int64 *)gSmartObjNullRef;
    if ( v7 )
    {
      v15 = *(__int64 **)(v7 + 128);
      ++*(_DWORD *)(*(_QWORD *)(v7 + 128) + 8LL);
    }
    v16 = *((_QWORD *)v8 + 209);
    *((_QWORD *)v8 + 209) = &v16;
    v9 = *v15;
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v15);
    if ( *(_QWORD *)(v9 + 112) )
    {
      UserSessionState = W32GetUserSessionState(v11, v10);
      v13 = *(_QWORD *)(v9 + 112) == _HMObjectFromHandle(*(_QWORD *)(*(_QWORD *)(UserSessionState + 19904) + 6968LL));
LABEL_10:
      LOBYTE(v2) = !v13;
      return v2;
    }
    return 0LL;
  }
  return 1LL;
}
