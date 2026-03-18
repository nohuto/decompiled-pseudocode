/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402F0420
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1402F0AF8 (xxxDrawAnimatedRects.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     GetWindowBorders @ 0x140123A0C (GetWindowBorders.c)
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _WindowFromDC @ 0x1401A7A68 (_WindowFromDC.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1402F0338 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxAnimateCaption(struct tagWND *a1, Gre::Base *a2, struct tagRECT *a3, struct tagRECT *a4)
{
  unsigned int DpiForSystem; // eax
  LONG v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 UserSessionState; // rax
  Gre::Base *CompatibleDC; // rdi
  LONG left; // eax
  LONG top; // r15d
  LONG v19; // ebp
  LONG v20; // r14d
  int v21; // esi
  int v22; // r12d
  int WindowBorders; // r15d
  unsigned int v24; // eax
  int DpiDependentMetric; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  LONG v28; // eax
  __int64 v29; // rax
  struct tagWND *v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  int v42; // r15d
  int v43; // r12d
  __int64 i; // rax
  unsigned __int16 v45; // cx
  __int64 v46; // rcx
  int v47; // [rsp+60h] [rbp-C8h]
  int v48; // [rsp+60h] [rbp-C8h]
  _BYTE v49[4]; // [rsp+64h] [rbp-C4h] BYREF
  int v50; // [rsp+68h] [rbp-C0h]
  int v51; // [rsp+6Ch] [rbp-BCh]
  int v52; // [rsp+70h] [rbp-B8h]
  LONG v53; // [rsp+74h] [rbp-B4h]
  int v54; // [rsp+78h] [rbp-B0h]
  int v55[2]; // [rsp+80h] [rbp-A8h]
  struct tagWND *v56; // [rsp+88h] [rbp-A0h]
  struct tagWND *v57; // [rsp+90h] [rbp-98h]
  struct tagRECT *v58; // [rsp+98h] [rbp-90h]
  __int64 v59; // [rsp+A0h] [rbp-88h]
  HBITMAP CompatibleBitmap; // [rsp+A8h] [rbp-80h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B0h] [rbp-78h] BYREF
  RECT v62; // [rsp+C0h] [rbp-68h] BYREF

  v56 = a1;
  *(_QWORD *)v55 = a4;
  v58 = a3;
  v57 = (struct tagWND *)WindowFromDC((__int64)a2, (__int64)a2, (__int64)a3, (__int64)a4);
  if ( v57 )
  {
    DpiForSystem = GetDpiForSystem();
    v8 = GetDpiDependentMetric(2, DpiForSystem) - 1;
    if ( !IsRemoteConnection(v10, v9) )
    {
      v13 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19904);
      v14 = *(unsigned int *)(v13 + 2236);
      if ( (v14 & 2) == 0 )
      {
        UserSessionState = W32GetUserSessionState(v13, v14);
        CompatibleDC = (Gre::Base *)GreCreateCompatibleDC(*(_QWORD *)(UserSessionState + 43248));
        if ( CompatibleDC )
        {
          left = a4->left;
          top = a4->top;
          v19 = a3->top;
          v20 = a3->left;
          v21 = a3->right - a3->left;
          v22 = a4->right - a4->left;
          v53 = left;
          v47 = top;
          WindowBorders = GetWindowBorders(
                            *(_DWORD *)(*((_QWORD *)v56 + 5) + 28LL),
                            *(_DWORD *)(*((_QWORD *)v56 + 5) + 24LL));
          v24 = GetDpiForSystem();
          DpiDependentMetric = GetDpiDependentMetric(2, v24);
          v26 = (unsigned int)(2 * WindowBorders);
          if ( v58->bottom - v19 > DpiDependentMetric )
          {
            v20 += WindowBorders;
            v19 += WindowBorders;
            v21 -= v26;
          }
          v27 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v55 + 12LL) - v47);
          if ( (int)v27 > DpiDependentMetric )
          {
            v53 += WindowBorders;
            v47 += WindowBorders;
            v22 -= v26;
          }
          v52 = v20;
          v28 = v22;
          v51 = v19;
          v50 = v21;
          v62.left = 0;
          if ( v21 > v22 )
            v28 = v21;
          v62.top = v8;
          v62.right = v28;
          v62.bottom = 2 * v8;
          v29 = W32GetUserSessionState(v27, v26);
          CompatibleBitmap = GreCreateCompatibleBitmapEx(
                               *(Gre::Base **)(*(_QWORD *)(v29 + 56968) + 56LL),
                               v62.right,
                               2 * v8,
                               0,
                               0LL,
                               0LL);
          v30 = v57;
          v59 = GreSelectBitmap(CompatibleDC, CompatibleBitmap);
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v57);
          if ( *(_DWORD *)(W32GetUserSessionState(v32, v31) + 43264)
            || (v35 = *(_DWORD *)(W32GetUserSessionState(v34, v33) + 66796) & 0x80000010, v36 = 45, v35 != -2147483632) )
          {
            v36 = 13;
          }
          xxxDrawCaptionTemp(v56, CompatibleDC, &v62, 0LL, 0LL, 0LL, v36);
          LOBYTE(v37) = 1;
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v49, v37);
          EnterSharedCrit(0LL, 1LL);
          EnterSharedRenderCrit(v38);
          v56 = (struct tagWND *)SaveScreen(v30, 0, 0LL, v20, v19, v21, v8);
          if ( v56
            || (v39 = GreBitBltInternal(CompatibleDC, 0, 0, v21, v8, (__int64)a2, v20, v19, 0xCC0020u, 0, 0),
                v41 = 0LL,
                v39) )
          {
            v53 -= v20;
            v42 = v47 - v19;
            v43 = v22 - v21;
            v58 = (struct tagRECT *)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            GreBitBltInternal(a2, v20, v19, v21, v8, (__int64)CompatibleDC, 0, v8, 0xCC0020u, 0, 0);
            for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
            {
              v45 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - (_WORD)v58;
              if ( v45 > 0xFAu )
                break;
              v54 = v20 + (v53 * v45 + 125) / 250;
              v55[0] = v19 + (v42 * v45 + 125) / 250;
              v48 = v21 + (v43 * v45 + 125) / 250;
              UserSleep(1LL);
              if ( v56 )
              {
                SaveScreen(v57, 1u, (__int64)v56, v52, v51, v50, v8);
                v56 = (struct tagWND *)SaveScreen(v57, 0, 0LL, v54, v55[0], v48, v8);
              }
              else
              {
                GreBitBltInternal(a2, v52, v51, v50, v8, (__int64)CompatibleDC, 0, 0, 0xCC0020u, 0, 0);
                GreBitBltInternal(CompatibleDC, 0, 0, v48, v8, (__int64)a2, v54, v55[0], 0xCC0020u, 0, 0);
              }
              v50 = v48;
              v51 = v55[0];
              v52 = v54;
              GreBitBltInternal(a2, v54, v55[0], v48, v8, (__int64)CompatibleDC, 0, v8, 0xCC0020u, 0, 0);
            }
            if ( v56 )
              SaveScreen(v57, 1u, (__int64)v56, v52, v51, v50, v8);
            else
              GreBitBltInternal(a2, v52, v51, v50, v8, (__int64)CompatibleDC, 0, 0, 0xCC0020u, 0, 0);
          }
          LeaveRenderCrit(v40, v41);
          UserSessionSwitchLeaveCrit(v46);
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v49);
          GreSelectBitmap(CompatibleDC, v59);
          GreDeleteObject(CompatibleBitmap);
          GreDeleteDC(CompatibleDC);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
        }
      }
    }
  }
}
