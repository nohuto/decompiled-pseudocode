/*
 * XREFs of xxxDrawCaptionTemp @ 0x140123E08
 * Callers:
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1402B1410 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1402B1520 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402F0420 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DrawTextExWorker @ 0x14011FA9C (DrawTextExWorker.c)
 *     GreGetTextAlign @ 0x1401205E8 (GreGetTextAlign.c)
 *     xxxClientGetTextExtentPointW @ 0x140122668 (xxxClientGetTextExtentPointW.c)
 *     _GetTextMetricsW @ 0x140122AE8 (_GetTextMetricsW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x140123D9C (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     GreSetBkMode @ 0x140126104 (GreSetBkMode.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GreGetLayout @ 0x1401264BC (GreGetLayout.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 *     GreExtTextOutW @ 0x14012725C (GreExtTextOutW.c)
 *     GreSetTextAlign @ 0x14012742C (GreSetTextAlign.c)
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x14014D3C8 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 *     _HasCaptionIcon @ 0x14014E1C4 (_HasCaptionIcon.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1401BEFD8 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1401C77D0 (TextCopy.c)
 *     xxxClientExtTextOutW @ 0x1401FAFD0 (xxxClientExtTextOutW.c)
 *     GreGetTextExtentW @ 0x1401FB67C (GreGetTextExtentW.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x14022E134 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x14023C7F8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxGetWindowText @ 0x14023F354 (xxxGetWindowText.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 *     GetDpiServerInfoForCurrentThread @ 0x140302578 (GetDpiServerInfoForCurrentThread.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        struct tagWND *a1,
        Gre::Base *a2,
        struct tagRECT *a3,
        __int64 a4,
        struct tagCURSOR *a5,
        __int64 a6,
        unsigned int a7)
{
  struct tagCURSOR *WindowSmIcon; // r13
  LONG left; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // rdx
  HBRUSH v20; // rax
  __int64 v21; // rcx
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  struct tagTHREADINFO *v25; // rbx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rbx
  WCHAR *v37; // rdx
  int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int WindowText; // eax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  HBRUSH v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned int Layout; // eax
  unsigned int v55; // ebx
  int v56; // r15d
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // ebx
  __int64 v61; // rdx
  __int64 v62; // rcx
  int v63; // ebx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  __int64 UserSessionState; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  int v78; // eax
  const WCHAR *SourceString; // [rsp+28h] [rbp-D8h]
  const WCHAR *SourceStringa; // [rsp+28h] [rbp-D8h]
  char v81; // [rsp+38h] [rbp-C8h]
  HBRUSH v82; // [rsp+48h] [rbp-B8h]
  int v83; // [rsp+50h] [rbp-B0h]
  unsigned int v84; // [rsp+58h] [rbp-A8h]
  _BYTE v85[20]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v86; // [rsp+78h] [rbp-88h]
  int v87; // [rsp+80h] [rbp-80h]
  int v88; // [rsp+84h] [rbp-7Ch]
  int v89; // [rsp+88h] [rbp-78h]
  struct tagSIZE v90; // [rsp+90h] [rbp-70h] BYREF
  __int128 v91; // [rsp+98h] [rbp-68h] BYREF
  struct tagTHREADINFO *v92; // [rsp+A8h] [rbp-58h]
  _OWORD v93[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v94; // [rsp+E0h] [rbp-20h]
  int v95; // [rsp+E8h] [rbp-18h]
  _WORD v96[256]; // [rsp+F0h] [rbp-10h] BYREF

  WindowSmIcon = a5;
  *(_QWORD *)v85 = a6;
  left = a3->left;
  v86 = a4;
  v84 = 1;
  v83 = 0;
  v90 = 0LL;
  if ( a3->right <= left )
    return 0LL;
  if ( a1
    && !a5
    && (unsigned int)HasCaptionIcon(a1)
    && (a7 & 2) == 0
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    WindowSmIcon = GetWindowSmIcon(a1);
  }
  W32GetUserSessionState(a1, a2);
  v13 = a7 & 0x10;
  v87 = a7 & 1;
  if ( (a7 & 1) != 0 )
  {
    if ( (a7 & 0x10) != 0 )
    {
      v58 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904);
      if ( *(_WORD *)(v58 + 6996) >= 8u )
      {
        v59 = *(_QWORD *)(W32GetUserSessionState(v58, v57) + 19904);
        v60 = *(_DWORD *)(v59 + 4648);
        v58 = *(_QWORD *)(W32GetUserSessionState(v59, v61) + 19904);
        if ( v60 == *(_DWORD *)(v58 + 4568) )
        {
          v62 = *(_QWORD *)(W32GetUserSessionState(v58, v57) + 19904);
          v63 = *(_DWORD *)(v62 + 4648);
          v58 = *(_QWORD *)(W32GetUserSessionState(v62, v64) + 19904);
          if ( v63 != *(_DWORD *)(v58 + 4588) )
          {
            v65 = *(_QWORD *)(W32GetUserSessionState(v58, v57) + 19904);
            v15 = *(_DWORD *)(v65 + 4640);
            v67 = *(_QWORD *)(W32GetUserSessionState(v65, v66) + 19904);
            v18 = *(_DWORD *)(v67 + 4648);
            v20 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v67, v68) + 19904) + 4856LL);
            goto LABEL_11;
          }
        }
      }
      v69 = *(_QWORD *)(W32GetUserSessionState(v58, v57) + 19904);
      v15 = *(_DWORD *)(v69 + 4628);
      v71 = *(_QWORD *)(W32GetUserSessionState(v69, v70) + 19904);
      v18 = *(_DWORD *)(v71 + 4648);
      v82 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v71, v72) + 19904) + 4944LL);
LABEL_64:
      GreSetBkMode((HDC)a2);
      goto LABEL_12;
    }
    v44 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904);
    v15 = *(_DWORD *)(v44 + 4604);
    v46 = *(_QWORD *)(W32GetUserSessionState(v44, v45) + 19904);
    v18 = *(_DWORD *)(v46 + 4576);
    v48 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v46, v47) + 19904) + 4712LL);
LABEL_62:
    v82 = v48;
    if ( (a7 & 0x20) == 0 )
      goto LABEL_12;
    v83 = 1;
    goto LABEL_64;
  }
  if ( (a7 & 0x10) == 0 )
  {
    v50 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904);
    v15 = *(_DWORD *)(v50 + 4644);
    v52 = *(_QWORD *)(W32GetUserSessionState(v50, v51) + 19904);
    v18 = *(_DWORD *)(v52 + 4580);
    v48 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v52, v53) + 19904) + 4720LL);
    goto LABEL_62;
  }
  v14 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904);
  v15 = *(_DWORD *)(v14 + 4640);
  v17 = *(_QWORD *)(W32GetUserSessionState(v14, v16) + 19904);
  v18 = *(_DWORD *)(v17 + 4628);
  v20 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v17, v19) + 19904) + 4816LL);
LABEL_11:
  v82 = v20;
LABEL_12:
  v88 = GreSetTextColor((HDC)a2, v15);
  v89 = GreSetBkColor((HDC)a2, v18);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout((HDC)a2);
      v55 = Layout;
      v56 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon((HDC)a2, a3, WindowSmIcon, v82, a7);
      if ( v56 )
        GreSetLayout(a2, 0xFFFFFFFFLL, v55);
    }
    else
    {
      v21 = (unsigned int)(a3->bottom - a3->top);
      a3->left += v21;
    }
  }
  if ( (a7 & 8) == 0 )
    goto LABEL_41;
  v91 = 0LL;
  v22 = PtiCurrent(v21);
  v24 = *(_QWORD *)v85;
  v25 = v22;
  v92 = v22;
  if ( !*(_QWORD *)v85 )
  {
    if ( a1 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(a1, v96);
LABEL_48:
        v26 = (unsigned __int16)WindowText;
        LODWORD(v28) = WindowText;
        LOWORD(v26) = 2 * WindowText;
LABEL_49:
        LOWORD(v91) = v26;
        *((_QWORD *)&v91 + 1) = v96;
        LOWORD(v26) = v26 + 2;
        *(_QWORD *)v85 = &v91;
        WORD1(v91) = v26;
        goto LABEL_18;
      }
      if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) )
      {
        *(_OWORD *)v85 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (struct tagWND *)((char *)a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)v85);
        WindowText = TextCopy(StrName, v96, 255LL);
        goto LABEL_48;
      }
    }
    v96[0] = 0;
    v26 = 0LL;
    LODWORD(v28) = 0;
    goto LABEL_49;
  }
  v26 = (unsigned __int16)**(_WORD **)v85;
  v27 = *(unsigned __int16 *)(*(_QWORD *)v85 + 2LL) - 2LL;
  if ( v27 >= v26 )
    LOWORD(v27) = **(_WORD **)v85;
  **(_WORD **)v85 = v27;
  v28 = (unsigned __int16)v27 >> 1;
  *(_WORD *)(*(_QWORD *)(v24 + 8) + 2 * v28) = 0;
LABEL_18:
  if ( v86 )
  {
    v94 = 0LL;
    v95 = 0;
    memset(v93, 0, sizeof(v93));
    v86 = GreSelectFont(a2, v86);
    if ( !(unsigned int)GetTextMetricsW((HDC)a2, (__int64)v93) )
      GetDpiServerInfoForCurrentThread(v30, v29);
  }
  else
  {
    if ( (a7 & 2) != 0 )
      v49 = *(_QWORD *)(GetDpiMetricsForCurrentThread(v26, 2LL, v23) + 32);
    else
      v49 = *(_QWORD *)(GetDpiServerInfoForCurrentThread(v26, 2LL) + 8);
    v86 = GreSelectFont(a2, v49);
  }
  if ( v83 )
    FillCaptionGradient((HDC)a2, a3, v87);
  else
    FillRect((HDC)a2, a3, v82);
  v34 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 19904);
  if ( v82 == *(HBRUSH *)(v34 + 4944) )
  {
    UserSessionState = W32GetUserSessionState(v34, v33);
    GreSetTextColor((HDC)a2, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4640LL));
    v77 = W32GetUserSessionState(v76, v75);
    GreSetBkColor((HDC)a2, *(_DWORD *)(*(_QWORD *)(v77 + 19904) + 4636LL));
  }
  v35 = CALL_LPK(v25);
  v36 = *(_QWORD *)v85;
  v37 = *(WCHAR **)(*(_QWORD *)v85 + 8LL);
  if ( v35 )
    xxxClientGetTextExtentPointW(a2, v37, v28, &v90);
  else
    GreGetTextExtentW((HDC)a2, v37, v28, &v90);
  if ( a1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x20) != 0 )
  {
    GreGetTextAlign((HDC)a2);
    GreSetTextAlign((HDC)a2);
  }
  if ( (a7 & 0x4000) != 0 )
    goto LABEL_35;
  if ( (_DWORD)v28 && v90.cx > a3->right - a3->left - 2 )
  {
    v36 = *(_QWORD *)v85;
LABEL_35:
    *(_QWORD *)v85 = 20LL;
    *(_QWORD *)&v85[12] = 0LL;
    *(_DWORD *)&v85[8] = 2;
    if ( (a7 & 0x4000) != 0 )
    {
      v39 = 34853;
    }
    else if ( !a1 || (v39 = 34854, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x10) == 0) )
    {
      v39 = 34852;
    }
    DrawTextExWorker((HDC)a2, *(unsigned __int16 **)(v36 + 8), v28, a3, v39, (struct tagDRAWTEXTPARAMS *)v85);
    v84 = 0;
    goto LABEL_38;
  }
  if ( a1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x10) != 0 )
  {
    v78 = CALL_LPK(v92);
    SourceStringa = *(const WCHAR **)(*(_QWORD *)v85 + 8LL);
    if ( v78 )
      xxxClientExtTextOutW((HDC)a2, (__int64)a3, SourceStringa, v28);
    else
      GreExtTextOutW((HDC)a2, (__int64)a3, (__int64)SourceStringa, v28, v81);
LABEL_50:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x20) != 0 )
      GreSetTextAlign((HDC)a2);
    goto LABEL_39;
  }
  v38 = CALL_LPK(v92);
  SourceString = *(const WCHAR **)(*(_QWORD *)v85 + 8LL);
  if ( v38 )
    xxxClientExtTextOutW((HDC)a2, (__int64)a3, SourceString, v28);
  else
    GreExtTextOutW((HDC)a2, (__int64)a3, (__int64)SourceString, v28, v81);
LABEL_38:
  if ( a1 )
    goto LABEL_50;
LABEL_39:
  if ( v86 )
    GreSelectFont(a2, v86);
LABEL_41:
  GreSetTextColor((HDC)a2, v88);
  GreSetBkColor((HDC)a2, v89);
  if ( v82 == *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v41, v40) + 19904) + 4944LL) )
    GreSetBkMode((HDC)a2);
  return v84;
}
