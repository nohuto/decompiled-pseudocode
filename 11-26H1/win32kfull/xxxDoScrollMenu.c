/*
 * XREFs of xxxDoScrollMenu @ 0x1402F8250
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     GetWndSBDisableFlags @ 0x14018F5C0 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x14018F8F8 (CalcSBStuff.c)
 *     GetAppCompatFlags @ 0x1401E7A80 (GetAppCompatFlags.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402F43C0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402F454C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dqq @ 0x1402F5B20 (WPP_RECORDER_AND_TRACE_SF_Dqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqldd @ 0x1402F7584 (WPP_RECORDER_AND_TRACE_SF_qqldd.c)
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

_QWORD *__fastcall xxxDoScrollMenu(struct tagWND *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v7; // rdx
  char v8; // di
  char v9; // r15
  char v10; // r12
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  char v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  bool v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  struct tagMENU *ScrollMenu; // rax
  __int64 v23; // rdx
  int v24; // ebx
  int v26; // [rsp+20h] [rbp-99h]
  int v27; // [rsp+28h] [rbp-91h]
  int v28; // [rsp+30h] [rbp-89h]
  int v29; // [rsp+38h] [rbp-81h]
  int v30; // [rsp+40h] [rbp-79h]
  __int64 v31[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v32; // [rsp+80h] [rbp-39h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v34[112]; // [rsp+A0h] [rbp-19h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v31);
  memset_0(v34, 0, 0x40uLL);
  v8 = 1;
  v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v11 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    v30 = v11;
    WPP_RECORDER_AND_TRACE_SF_qqldd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v10,
      *(_QWORD *)(UserSessionState + 69152),
      v26,
      v27,
      v28,
      v29);
  }
  if ( (int)GetAppCompatFlags(0LL) >= 0 )
  {
    CalcSBStuff(a1, (__int64)v34, a3);
    if ( (GetWndSBDisableFlags((__int64 *)a1, a3) & 3) == 3 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v8 = 0;
      }
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = *(_QWORD *)a1;
        v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
        LOBYTE(v20) = v17;
        LOBYTE(v21) = v8;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(v19 + 69152),
          3,
          9,
          67,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v18,
          0);
      }
    }
    else
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      v32 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v31, (__int64)ScrollMenu);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v31) )
      {
        v23 = v32;
        if ( !v32 )
          v23 = *(_QWORD *)v31[0];
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v23);
        v24 = xxxTrackPopupMenuEx((__int64)v31, 0x182u, (__int16)a4, SHIWORD(a4), (__int64)a1, 0LL);
        Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
        if ( v24 )
        {
          if ( (unsigned __int8)v24 == 4 )
          {
            xxxSBTrackInit(a1);
          }
          else
          {
            xxxDoScroll(0LL, a1, (unsigned __int8)v24, 0LL, a3);
            xxxDoScroll(0LL, a1, 8u, 0LL, a3);
          }
        }
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v8 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      WPP_RECORDER_AND_TRACE_SF_Dqq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v14,
        *(_QWORD *)(v15 + 69152),
        v26,
        v27,
        v28,
        v29,
        v30);
    }
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v31);
}
