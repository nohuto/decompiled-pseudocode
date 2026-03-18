/*
 * XREFs of EditionCreateWindowStationEntryPoint @ 0x1402AEA80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x140022FA8 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x140131830 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x14018BC44 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x140200920 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@X$0A@$00$00$00@@QEAAXPEAXP6AX0@Z@Z @ 0x14023B150 (--$ManualLock@X@-$Win32RawLockedItemBase@X$0A@$00$00$00@@QEAAXPEAXP6AX0@Z@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

HANDLE __fastcall EditionCreateWindowStationEntryPoint(
        struct _OBJECT_ATTRIBUTES *a1,
        ACCESS_MASK a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        void *Src,
        __int64 a7,
        int a8,
        char a9)
{
  unsigned __int64 ULong64FromUser; // r8
  ULONG64 v11; // rcx
  _DWORD *v12; // rsi
  ULONG_PTR v13; // rcx
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _OWORD *v18; // rcx
  _OWORD *v19; // rax
  int v20; // eax
  NTSTATUS v21; // ecx
  __int64 v22; // rdx
  char v23; // r14
  unsigned int *v24; // rcx
  bool v25; // r12
  char CurrentWin32kSessionId; // bl
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  ULONG_PTR v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // ebx
  ULONG v36; // eax
  __int64 v37; // rdx
  HANDLE v38; // rbx
  HANDLE v41; // [rsp+68h] [rbp-9B0h] BYREF
  ACCESS_MASK v42; // [rsp+70h] [rbp-9A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-9A0h] BYREF
  int v44; // [rsp+80h] [rbp-998h]
  ACCESS_MASK v45; // [rsp+88h] [rbp-990h]
  unsigned int v46; // [rsp+90h] [rbp-988h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+A0h] [rbp-978h] BYREF
  _DWORD *v48; // [rsp+C0h] [rbp-958h]
  ULONG_PTR v49; // [rsp+C8h] [rbp-950h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-948h]
  __int64 v51; // [rsp+D8h] [rbp-940h]
  ULONG_PTR v52[2]; // [rsp+E0h] [rbp-938h] BYREF
  struct _UNICODE_STRING v53; // [rsp+108h] [rbp-910h] BYREF
  struct _OBJECT_ATTRIBUTES v54; // [rsp+118h] [rbp-900h] BYREF
  _QWORD v55[3]; // [rsp+148h] [rbp-8D0h] BYREF
  _BYTE v56[800]; // [rsp+160h] [rbp-8B8h] BYREF
  _BYTE v57[800]; // [rsp+480h] [rbp-598h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v58; // [rsp+7A0h] [rbp-278h] BYREF
  unsigned __int16 v59[272]; // [rsp+7B0h] [rbp-268h] BYREF

  v50 = a3;
  v42 = a2;
  v45 = a2;
  v51 = a3;
  v46 = a4;
  memset(&v54, 0, sizeof(v54));
  *(_QWORD *)&v58.Length = 0LL;
  *(_DWORD *)&v58.ContextTrackingMode = 0;
  BugCheckParameter3 = 0LL;
  v53 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v41 = 0LL;
  EnterCrit(0LL, 0LL);
  HIDWORD(BugCheckParameter2[0]) = 0;
  LODWORD(BugCheckParameter2[0]) = RtlReadULongFromUser(a7);
  ULong64FromUser = RtlReadULong64FromUser(a7 + 8);
  BugCheckParameter2[1] = ULong64FromUser;
  *(_OWORD *)v52 = *(_OWORD *)BugCheckParameter2;
  if ( (ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = ULong64FromUser + LOWORD(BugCheckParameter2[0]) + 2LL;
  if ( v11 <= ULong64FromUser || v11 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( LOWORD(BugCheckParameter2[0]) > WORD1(BugCheckParameter2[0]) )
  {
    if ( (BugCheckParameter2[0] & 1) == 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( (BugCheckParameter2[0] & 1) != 0 )
  {
LABEL_17:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 708);
LABEL_18:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyNW((char *)v59, 9LL, (char *)ULong64FromUser, (unsigned __int64)LOWORD(BugCheckParameter2[0]) >> 1);
  v12 = (_DWORD *)Win32AllocPoolWithQuotaZInit(792LL, 1702064981LL);
  v48 = v12;
  if ( !v12 )
  {
    v41 = 0LL;
    UserSetLastError(8);
    goto LABEL_43;
  }
  memset_0(v56, 0, 0x318uLL);
  RtlCopyFromUser(v56, Src, 0x318uLL);
  v14 = v57;
  v15 = v56;
  v16 = 6LL;
  v17 = 6LL;
  do
  {
    *v14 = *v15;
    v14[1] = v15[1];
    v14[2] = v15[2];
    v14[3] = v15[3];
    v14[4] = v15[4];
    v14[5] = v15[5];
    v14[6] = v15[6];
    v14 += 8;
    *(v14 - 1) = v15[7];
    v15 += 8;
    --v17;
  }
  while ( v17 );
  *v14 = *v15;
  *((_QWORD *)v14 + 2) = *((_QWORD *)v15 + 2);
  v18 = v12;
  v19 = v57;
  do
  {
    *v18 = *v19;
    v18[1] = v19[1];
    v18[2] = v19[2];
    v18[3] = v19[3];
    v18[4] = v19[4];
    v18[5] = v19[5];
    v18[6] = v19[6];
    v18 += 8;
    *(v18 - 1) = v19[7];
    v19 += 8;
    --v16;
  }
  while ( v16 );
  *v18 = *v19;
  *((_QWORD *)v18 + 2) = *((_QWORD *)v19 + 2);
  if ( *v12 < 8u )
  {
    v20 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
            1,
            a1,
            (unsigned __int16 (*)[256])&v59[16],
            &v54,
            &v58,
            (void **)&BugCheckParameter3,
            &v53,
            (unsigned __int16 **)&v49);
    v44 = v20;
    if ( v20 >= 0 )
    {
      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
      if ( BugCheckParameter3 )
        Win32RawLockedItemBase<void,0,1,1,1>::ManualLock<void>(
          BugCheckParameter2,
          BugCheckParameter3,
          (__int64)CleanupSecurityDescriptor);
      Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
        v55,
        (__int64)v12,
        (__int64)Win32FreePool);
      if ( (a9 & 2) != 0 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
          || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v23 = 0;
        }
        v24 = &WPP_RECORDER_INITIALIZED;
        v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          CurrentWin32kSessionId = W32GetCurrentWin32kSessionId((__int64)&WPP_RECORDER_INITIALIZED);
          UserSessionState = W32GetUserSessionState(v28, v27);
          LOBYTE(v30) = v25;
          LOBYTE(v31) = v23;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v31,
            v30,
            *(_QWORD *)(UserSessionState + 69152),
            4,
            20,
            10,
            (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
            CurrentWin32kSessionId);
        }
        *(_DWORD *)(W32GetUserSessionState(v24, v22) + 356) = 1;
      }
      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)v52);
      v32 = v49;
      if ( v49 )
        Win32RawLockedItemBase<void,0,1,1,1>::ManualLock<void>(v52, v49, (__int64)Win32FreePool);
      LOBYTE(v32) = 0;
      v35 = xxxCreateWindowStation((__int64)&v54, v32, v42, v50, a4, a5, (__int64)v12, (__int64 *)v59, a8, 0, -1, &v41);
      BugCheckParameter3 = 0LL;
      if ( v35 < 0 && (a9 & 2) != 0 )
        *(_DWORD *)(W32GetUserSessionState(v34, v33) + 356) = 0;
      Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v52);
      Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v55);
      Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
      if ( v35 >= 0 )
        goto LABEL_41;
      v21 = v35;
    }
    else
    {
      v21 = v20;
    }
    v41 = 0LL;
    v36 = RtlNtStatusToDosError(v21);
    UserSetLastError(v36);
  }
  else
  {
    v41 = 0LL;
    UserSetLastError(87);
  }
LABEL_41:
  Win32FreePool(v12);
  v13 = BugCheckParameter3;
  if ( BugCheckParameter3 )
  {
    LOBYTE(v37) = 1;
    SeReleaseSecurityDescriptor(BugCheckParameter3, v37, 0LL);
    BugCheckParameter3 = 0LL;
  }
LABEL_43:
  v38 = v41;
  UserSessionSwitchLeaveCrit(v13);
  return v38;
}
