/*
 * XREFs of xxxSetNCFonts @ 0x1401250CC
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1400CDEC0 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x140102238 (GreCreateFontIndirectW.c)
 *     GreMarkDeletableFont @ 0x14010FAD4 (GreMarkDeletableFont.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x140123BA0 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     UserSetAltScaleFont @ 0x14012478C (UserSetAltScaleFont.c)
 *     UserSetFont @ 0x1401249BC (UserSetFont.c)
 *     GetCharDimensions @ 0x140124F40 (GetCharDimensions.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x14021B858 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x140248CB8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     Get96DpiMetrics @ 0x140302300 (Get96DpiMetrics.c)
 *     Get96DpiServerInfo @ 0x140302324 (Get96DpiServerInfo.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 *     GetSessionDpiMetrics @ 0x140302624 (GetSessionDpiMetrics.c)
 *     GetSessionDpiServerInfo @ 0x140302648 (GetSessionDpiServerInfo.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxSetNCFonts(struct _UNICODE_STRING *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  HDC v7; // r15
  __int64 v8; // r13
  __int64 v9; // rcx
  struct HLFONT__ **SessionDpiMetrics; // r14
  _QWORD *v11; // rsi
  _OWORD *v12; // rbx
  _OWORD *v13; // rax
  Gre::Base **v14; // rbx
  _OWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rbx
  __int64 v21; // r8
  _QWORD *DpiMetricsForCurrentThread; // rax
  int CharDimensions; // eax
  LONG lfWeight; // ecx
  int v25; // edx
  int v26; // ebx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct HLFONT__ *v33; // rcx
  int v34; // eax
  struct HLFONT__ *v35; // rcx
  int v36; // eax
  _OWORD *v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  int v41; // ebx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int64 v48; // [rsp+20h] [rbp-E0h]
  __int64 v49; // [rsp+20h] [rbp-E0h]
  Gre::Base **v50; // [rsp+28h] [rbp-D8h]
  _OWORD *v51; // [rsp+28h] [rbp-D8h]
  _OWORD *v52; // [rsp+28h] [rbp-D8h]
  __int128 v53; // [rsp+28h] [rbp-D8h]
  __int128 v54; // [rsp+28h] [rbp-D8h]
  __int64 SessionDpiServerInfo; // [rsp+38h] [rbp-C8h]
  __int128 v56; // [rsp+38h] [rbp-C8h]
  __int128 v57; // [rsp+38h] [rbp-C8h]
  __int128 v58; // [rsp+48h] [rbp-B8h]
  __int128 v59; // [rsp+48h] [rbp-B8h]
  __int128 v60; // [rsp+58h] [rbp-A8h]
  __int128 v61; // [rsp+58h] [rbp-A8h]
  __int128 v62; // [rsp+68h] [rbp-98h]
  __int128 v63; // [rsp+68h] [rbp-98h]
  struct tagLOGFONTW v64; // [rsp+78h] [rbp-88h] BYREF
  __int128 v65; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v66; // [rsp+F0h] [rbp-10h]
  __int128 v67; // [rsp+100h] [rbp+0h]
  __int128 v68; // [rsp+110h] [rbp+10h]
  __int128 v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+30h]
  int v71; // [rsp+138h] [rbp+38h]
  __int16 v72; // [rsp+13Ch] [rbp+3Ch]
  __int128 v73; // [rsp+140h] [rbp+40h] BYREF
  __int128 v74; // [rsp+150h] [rbp+50h]
  __int128 v75; // [rsp+160h] [rbp+60h]
  __int128 v76; // [rsp+170h] [rbp+70h]
  __int128 v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+190h] [rbp+90h]
  int v79; // [rsp+198h] [rbp+98h]

  memset(&v64, 0, 60);
  memset_0(&v73, 0, 0x5CuLL);
  v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 56968);
  v7 = *(HDC *)(v6 + 64);
  SessionDpiServerInfo = GetSessionDpiServerInfo(v6);
  v8 = Get96DpiServerInfo();
  SessionDpiMetrics = (struct HLFONT__ **)GetSessionDpiMetrics(v9);
  v11 = (_QWORD *)Get96DpiMetrics();
  v12 = (_OWORD *)((a2 + 24) & -(__int64)(a2 != 0));
  v50 = (Gre::Base **)(SessionDpiServerInfo + 8);
  if ( !(unsigned int)UserSetFont(a1, v12, 0x8Bu, (struct HLFONT__ **)(SessionDpiServerInfo + 8))
    || !(unsigned int)UserSetAltScaleFont(*v50, (__int64 *)(v8 + 8)) )
  {
    return 0LL;
  }
  v48 = GreSelectFont(v7, *v50);
  *(_DWORD *)(SessionDpiServerInfo + 16) = GetCharDimensions(v7, 0LL, (_DWORD *)(SessionDpiServerInfo + 20));
  GreSelectFont(v7, *(_QWORD *)(v8 + 8));
  *(_DWORD *)(v8 + 16) = GetCharDimensions(v7, 0LL, (_DWORD *)(v8 + 20));
  v13 = (_OWORD *)(a2 + 124);
  if ( !a2 )
    v13 = v12;
  v14 = SessionDpiMetrics + 4;
  v51 = v13;
  if ( !(unsigned int)UserSetFont(a1, v13, 0x8Eu, SessionDpiMetrics + 4)
    || !(unsigned int)UserSetAltScaleFont(*v14, v11 + 4) )
  {
    return 0LL;
  }
  GreSelectFont(v7, *v14);
  *((_DWORD *)SessionDpiMetrics + 10) = GetCharDimensions(v7, 0LL, (_DWORD *)SessionDpiMetrics + 11);
  GreSelectFont(v7, v11[4]);
  *((_DWORD *)v11 + 10) = GetCharDimensions(v7, 0LL, (_DWORD *)v11 + 11);
  v15 = (_OWORD *)(a2 + 224);
  if ( !a2 )
    v15 = v51;
  v52 = v15;
  if ( !(unsigned int)UserSetFont(a1, v15, 0x91u, SessionDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont(*SessionDpiMetrics, v11) )
  {
    return 0LL;
  }
  UserSessionState = W32GetUserSessionState(v17, v16);
  if ( *(_QWORD *)(UserSessionState + 66016) )
  {
    DpiMetricsForCurrentThread = (_QWORD *)GetDpiMetricsForCurrentThread(v19, v18, v21);
    GreSelectFont(*(_QWORD *)(UserSessionState + 66016), *DpiMetricsForCurrentThread);
  }
  GreSelectFont(v7, *SessionDpiMetrics);
  CharDimensions = GetCharDimensions(v7, (__int64)&v64, (_DWORD *)SessionDpiMetrics + 3);
  lfWeight = v64.lfWeight;
  v25 = *((_DWORD *)SessionDpiMetrics + 3);
  *((_DWORD *)SessionDpiMetrics + 2) = CharDimensions;
  *((_DWORD *)SessionDpiMetrics + 4) = *(_DWORD *)&v64.lfFaceName[2];
  *((_DWORD *)SessionDpiMetrics + 5) = lfWeight;
  v26 = ((_WORD)v25 + (_WORD)lfWeight + 1) & 0xFFFE;
  *((_DWORD *)SessionDpiMetrics + 7) = v25 + lfWeight + 2;
  *((_DWORD *)SessionDpiMetrics + 6) = v64.lfWidth;
  SetDpiDepSysMet(27LL, (unsigned int)(v26 - 1));
  SetDpiDepSysMet(28LL, (unsigned int)(v26 - 1));
  GreSelectFont(v7, *v11);
  v27 = GetCharDimensions(v7, (__int64)&v64, (_DWORD *)v11 + 3);
  v28 = (unsigned int)v64.lfWeight;
  v29 = *((unsigned int *)v11 + 3);
  *((_DWORD *)v11 + 2) = v27;
  *((_DWORD *)v11 + 4) = *(_DWORD *)&v64.lfFaceName[2];
  *((_DWORD *)v11 + 5) = v28;
  v30 = (((_WORD)v29 + (_WORD)v28 + 1) & 0xFFFE) - 1;
  *((_DWORD *)v11 + 7) = v29 + v28 + 2;
  *((_DWORD *)v11 + 6) = v64.lfWidth;
  v31 = *(_QWORD *)(W32GetUserSessionState(v28, v29) + 19904);
  *(_DWORD *)(v31 + 2512) = v30;
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v32, v31) + 19904) + 2516LL) = v30;
  GreSelectFont(v7, v48);
  ++*((_DWORD *)SessionDpiMetrics + 6);
  ++*((_DWORD *)v11 + 6);
  v33 = SessionDpiMetrics[6];
  if ( v33 && v33 != *(struct HLFONT__ **)(SessionDpiServerInfo + 24) )
  {
    GreMarkDeletableFont(v33);
    GreDeleteObject(SessionDpiMetrics[6]);
    SessionDpiMetrics[6] = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*SessionDpiMetrics, 92, &v73) )
    return 0LL;
  v34 = v74;
  v65 = v73;
  if ( (int)v74 <= 700 )
    v34 = 700;
  v67 = v75;
  LODWORD(v74) = v34;
  v66 = v74;
  v68 = v76;
  v70 = v78;
  v69 = v77;
  v71 = v79;
  v72 = 257;
  SessionDpiMetrics[6] = (struct HLFONT__ *)GreCreateFontIndirectW(&v65);
  v35 = (struct HLFONT__ *)v11[6];
  if ( v35 && v35 != *(struct HLFONT__ **)(v8 + 24) )
  {
    GreMarkDeletableFont(v35);
    GreDeleteObject(v11[6]);
    v11[6] = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW((Gre::Base *)*v11, 96, &v65) )
    return 0LL;
  v36 = v66;
  if ( (int)v66 <= 700 )
    v36 = 700;
  LODWORD(v66) = v36;
  v11[6] = GreCreateFontIndirectW(&v65);
  v37 = (_OWORD *)(a2 + 316);
  if ( !a2 )
    v37 = v52;
  if ( !(unsigned int)UserSetFont(a1, v37, 0x9Cu, SessionDpiMetrics + 7)
    || !(unsigned int)UserSetAltScaleFont(SessionDpiMetrics[7], v11 + 7) )
  {
    return 0LL;
  }
  if ( a2 )
  {
    v41 = *(_DWORD *)(a2 + 496);
    v54 = *(_OWORD *)(a2 + 408);
    v57 = *(_OWORD *)(a2 + 424);
    v59 = *(_OWORD *)(a2 + 440);
    v61 = *(_OWORD *)(a2 + 456);
    v63 = *(_OWORD *)(a2 + 472);
    v49 = *(_QWORD *)(a2 + 488);
    v44 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 19904);
    *(_OWORD *)(v44 + 5004) = v54;
    *(_OWORD *)(v44 + 5020) = v57;
    v45 = v61;
    *(_OWORD *)(v44 + 5036) = v59;
    v46 = v63;
  }
  else
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v64, a1, 0x9Du);
    v41 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v62 = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    v60 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v58 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v53 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v56 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v49 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    v44 = *(_QWORD *)(W32GetUserSessionState(v43, v42) + 19904);
    *(_OWORD *)(v44 + 5004) = v62;
    *(_OWORD *)(v44 + 5020) = v60;
    v45 = v53;
    *(_OWORD *)(v44 + 5036) = v58;
    v46 = v56;
  }
  *(_OWORD *)(v44 + 5052) = v45;
  *(_OWORD *)(v44 + 5068) = v46;
  *(_QWORD *)(v44 + 5084) = v49;
  *(_DWORD *)(v44 + 5092) = v41;
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  UpdateDpiMetricsCacheDPISERVERINFO();
  return 1LL;
}
