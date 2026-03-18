/*
 * XREFs of ?zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1402A3124
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x14027A5A0 (NtUserSetWindowsHookEx.c)
 *     ?zzzSetWindowsHookAW_New@@YAPEAUHHOOK__@@HP6A_JXZW4tagHookFlags@@@Z @ 0x1402A309C (-zzzSetWindowsHookAW_New@@YAPEAUHHOOK__@@HP6A_JXZW4tagHookFlags@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetHmodTableIndex @ 0x140026E70 (GetHmodTableIndex.c)
 *     AddHmodDependency @ 0x140027098 (AddHmodDependency.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400272EC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140029760 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1401D6C2C (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1401E6C4C (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetWindowsHookEx_New(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6, _DWORD *a7)
{
  __int64 v7; // r12
  __int64 v10; // rdx
  bool v11; // di
  bool v12; // si
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r9
  struct tagTHREADINFO *v16; // rax
  struct tagTHREADINFO *v17; // r13
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rdx
  bool v23; // di
  bool v24; // si
  int v25; // edx
  int v26; // r8d
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rdx
  UIPrivilegeIsolation *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  bool v34; // r14
  __int64 v35; // rdx
  bool v36; // di
  bool v37; // si
  __int64 UserSessionState; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // r8
  __int64 v42; // r15
  __int64 v43; // rdx
  bool v44; // di
  bool v45; // si
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  int HmodTableIndex; // eax
  __int64 v50; // rdx
  bool v51; // di
  bool v52; // si
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  char v56; // di
  int v57; // r8d
  __int64 v58; // rcx
  __int64 *v59; // r12
  PRKPROCESS *v60; // rcx
  int v61; // edx
  int v62; // r13d
  _DWORD *v63; // rdx
  __int64 v64; // rcx
  bool v65; // si
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __int64 v69; // rbx
  __int64 v71; // rdx
  __int16 v72; // [rsp+30h] [rbp-158h]
  __int16 v73; // [rsp+30h] [rbp-158h]
  char v74; // [rsp+40h] [rbp-148h]
  int v75; // [rsp+60h] [rbp-128h]
  _BYTE v79[48]; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE v80[48]; // [rsp+E0h] [rbp-A8h] BYREF
  _BYTE v81[48]; // [rsp+110h] [rbp-78h] BYREF

  v7 = a4;
  v75 = a4 + 1;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    UserSetLastError(1426);
    v23 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v23 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v27 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v71) + 69152);
    v74 = v7;
    v73 = 10;
    goto LABEL_137;
  }
  if ( !a5 )
  {
    UserSetLastError(1427);
    v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v10) + 69152);
    v72 = 11;
    goto LABEL_84;
  }
  v16 = PtiCurrent(15LL);
  v17 = v16;
  if ( a3 )
  {
    v21 = *((_DWORD *)&unk_140362790 + v7 + 1);
    if ( (v21 & 2) != 0 )
    {
      if ( *(_QWORD *)(a3 + 488) == *((_QWORD *)v16 + 61) )
      {
        v19 = (_QWORD *)((char *)v16 + 488);
        if ( *((_QWORD *)v16 + 57) == *(_QWORD *)(a3 + 456) )
          goto LABEL_23;
        if ( a1 || (v21 & 0x20) != 0 )
        {
          if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline()
            && !UIPrivilegeIsolation::Enforced(v30) )
          {
            v31 = *((_QWORD *)v17 + 57);
            v32 = *(_QWORD *)(a3 + 456);
            if ( (*(_DWORD *)(v32 + 764) != *(_DWORD *)(v31 + 764) || *(_DWORD *)(v32 + 768) != *(_DWORD *)(v31 + 768))
              && (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 520), 0, 0) & 0x400000) == 0 )
            {
              UserSetLastError(5);
              v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
              v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                return 0LL;
              v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v33) + 69152);
              v72 = 16;
              LOBYTE(v14) = v34;
              goto LABEL_85;
            }
          }
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 520), 0, 0) & 0xC) != 0
            && (*((_DWORD *)&unk_140362790 + v7 + 1) & 0x10) == 0 )
          {
            UserSetLastError(1458);
            v36 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
            v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v36 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v35);
              LOBYTE(v39) = v37;
              LOBYTE(v40) = v36;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v40,
                v39,
                *(_QWORD *)(UserSessionState + 69152),
                3,
                5,
                17,
                (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids,
                v7);
            }
            return 0LL;
          }
          goto LABEL_23;
        }
        UserSetLastError(5);
        v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v29) + 69152);
        v72 = 15;
      }
      else
      {
        UserSetLastError(5);
        v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v28) + 69152);
        v72 = 14;
      }
LABEL_84:
      LOBYTE(v14) = v12;
LABEL_85:
      LOBYTE(v13) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v14,
        v15,
        3,
        5,
        v72,
        (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
      return 0LL;
    }
    UserSetLastError(1429);
    v23 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v23 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v27 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v22) + 69152);
    v74 = v7;
    v73 = 13;
LABEL_137:
    LOBYTE(v26) = v24;
    LOBYTE(v25) = v23;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v26,
      v27,
      3,
      5,
      v73,
      (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids,
      v74);
    return 0LL;
  }
  if ( !a1 && (*((_DWORD *)&unk_140362790 + v7 + 1) & 0x20) == 0 )
  {
    UserSetLastError(1428);
    v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v18) + 69152);
    v72 = 12;
    goto LABEL_84;
  }
  v19 = (_QWORD *)((char *)v16 + 488);
LABEL_23:
  if ( !RtlAreAllAccessesGranted(*((_DWORD *)v17 + 232), 8u) )
  {
    UserSetLastError(5);
    v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v20) + 69152);
    v72 = 18;
    goto LABEL_84;
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>((__int64)v79);
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v80);
  LOBYTE(v41) = 5;
  v42 = HMAllocObject(v17, *v19, v41, 104LL);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v80);
  if ( !v42 )
  {
    v44 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v45 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v44 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v46 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v43);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = v44;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v47,
        *(_QWORD *)(v46 + 69152),
        2,
        5,
        19,
        (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
    }
LABEL_95:
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v79);
    return 0LL;
  }
  *(_DWORD *)(v42 + 68) = -1;
  if ( a1 )
  {
    HmodTableIndex = GetHmodTableIndex(a2);
    *(_DWORD *)(v42 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126);
      v51 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v51 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v53 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v50);
        LOBYTE(v54) = v52;
        LOBYTE(v55) = v51;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v55,
          v54,
          *(_QWORD *)(v53 + 69152),
          3,
          5,
          20,
          (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
      }
      DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v81);
      HMFreeObject(v42);
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v81);
      goto LABEL_95;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency(HmodTableIndex);
  }
  v56 = 1;
  v57 = 1 << v75;
  v58 = 8LL * v75;
  if ( a3 )
  {
    v59 = (__int64 *)(v58 + a3 + 952);
    *(_DWORD *)(a3 + 712) |= v57;
    if ( *(_QWORD *)(a3 + 512) )
    {
      v60 = *(PRKPROCESS **)(a3 + 456);
      if ( v60 == *((PRKPROCESS **)v17 + 57) )
      {
        v61 = 0;
      }
      else
      {
        KeAttachProcess(*v60);
        v61 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(a3 + 512) + 56LL) = *(_DWORD *)(a3 + 712);
      v62 = a4;
      if ( v61 )
        KeDetachProcess();
    }
    else
    {
      v62 = a4;
    }
    v63 = (_DWORD *)(v42 + 64);
  }
  else
  {
    v59 = (__int64 *)(v58 + 40 + *((_QWORD *)v17 + 62));
    v63 = (_DWORD *)(v42 + 64);
    *(_DWORD *)(v42 + 64) |= 1u;
    *(_DWORD *)(**((_QWORD **)v17 + 62) + 16LL) |= v57;
    a3 = 0LL;
    v62 = a4;
  }
  *(_QWORD *)(v42 + 72) = a3;
  *v63 |= a6 & 0x42;
  *(_DWORD *)(v42 + 48) = v62;
  *(_QWORD *)(v42 + 56) = a5 - a1;
  v64 = *v59;
  *(_QWORD *)(v42 + 40) = *v59;
  if ( a7 )
    *a7 = v64 == 0;
  *v59 = v42;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v56 = 0;
  }
  v65 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v56 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v66 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a7);
    LOBYTE(v67) = v65;
    LOBYTE(v68) = v56;
    WPP_RECORDER_AND_TRACE_SF_qDD(*((_QWORD *)WPP_GLOBAL_Control + 3), v68, v67, *(_QWORD *)(v66 + 69152));
  }
  v69 = *(_QWORD *)v42;
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v79);
  return v69;
}
