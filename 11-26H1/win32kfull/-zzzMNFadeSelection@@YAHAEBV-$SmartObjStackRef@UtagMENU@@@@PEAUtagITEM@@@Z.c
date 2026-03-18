/*
 * XREFs of ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402377E4
 * Callers:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1402376D0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x14000EA1C (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x14009AEF8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     zzzShowFade @ 0x14021B0B4 (zzzShowFade.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzMNFadeSelection(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // r9
  Gre::Base *v18; // rsi
  __int64 DCEx; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // [rsp+60h] [rbp+17h] BYREF
  __int64 v24; // [rsp+68h] [rbp+1Fh] BYREF
  struct tagRECT v25; // [rsp+70h] [rbp+27h] BYREF

  v4 = PtiCurrent(a1);
  v23 = gSmartObjNullRef;
  v24 = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = &v24;
  if ( *(_DWORD *)(W32GetUserSessionState(&v24, v5) + 43264) )
    goto LABEL_11;
  v9 = *(_DWORD *)(W32GetUserSessionState(v7, v6) + 66796) & 0x80000400;
  if ( (_DWORD)v9 != -2147482624 )
    goto LABEL_11;
  UserSessionState = W32GetUserSessionState(v9, v8);
  if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(UserSessionState + 3056)) == 1 )
    goto LABEL_11;
  v13 = W32GetUserSessionState(v12, v11);
  if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(v13 + 3056)) == 4 )
    goto LABEL_11;
  v14 = *(_QWORD *)(a1 + 16);
  if ( !v14 )
    v14 = **(_QWORD **)a1;
  v15 = MNGetPopupFromMenu(v14, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v23, v15);
  if ( !*(_QWORD *)v23 )
    goto LABEL_11;
  v16 = *(_QWORD *)(*(_QWORD *)v23 + 16LL);
  if ( v16
    && (v17 = *(_DWORD **)a2,
        v25.left = *(_DWORD *)(*(_QWORD *)(v16 + 40) + 104LL) + *(_DWORD *)(*(_QWORD *)a2 + 64LL),
        v25.top = *(_DWORD *)(*(_QWORD *)(v16 + 40) + 108LL) + v17[17],
        v25.right = v25.left + v17[18],
        v25.bottom = v25.top + v17[19],
        (v18 = (Gre::Base *)CreateFadeInternal(
                              0LL,
                              &v25,
                              350,
                              (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 288LL) & 0xF) == 0 ? 0x100 : 0,
                              *(_DWORD *)(*(_QWORD *)(v16 + 40) + 288LL))) != 0LL) )
  {
    DCEx = _GetDCEx(v16, 0LL, 1073807360LL);
    GreBitBltInternal(
      v18,
      0,
      0,
      *(_DWORD *)(*(_QWORD *)a2 + 72LL),
      *(_DWORD *)(*(_QWORD *)a2 + 76LL),
      DCEx,
      *(_DWORD *)(*(_QWORD *)a2 + 64LL),
      *(_DWORD *)(*(_QWORD *)a2 + 68LL),
      0xCC0020u,
      0,
      0);
    _ReleaseDC(DCEx);
    zzzShowFade(v21, v20);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v23);
    return 1LL;
  }
  else
  {
LABEL_11:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v23);
    return 0LL;
  }
}
