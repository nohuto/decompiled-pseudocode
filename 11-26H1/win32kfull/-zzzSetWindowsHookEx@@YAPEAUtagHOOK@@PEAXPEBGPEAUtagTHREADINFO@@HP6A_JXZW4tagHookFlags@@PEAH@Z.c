/*
 * XREFs of ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1401E6C74
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x14027A5A0 (NtUserSetWindowsHookEx.c)
 *     ?zzzSetWindowsHookAW@@YAP6A_JXZHP6A_JXZW4tagHookFlags@@@Z @ 0x1402A3014 (-zzzSetWindowsHookAW@@YAP6A_JXZHP6A_JXZW4tagHookFlags@@@Z.c)
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

__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6, _DWORD *a7)
{
  __int64 v7; // r14
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
  __int64 v20; // rcx
  __int64 v21; // rdx
  bool v22; // di
  bool v23; // si
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rdx
  UIPrivilegeIsolation *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  bool v34; // di
  bool v35; // si
  __int64 UserSessionState; // rax
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r14
  __int64 v42; // rdx
  int HmodTableIndex; // eax
  __int64 v44; // rdx
  bool v45; // di
  bool v46; // si
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  char v50; // di
  int v51; // r8d
  __int64 v52; // rcx
  __int64 *v53; // r15
  PRKPROCESS *v54; // rcx
  int v55; // edx
  int v56; // r13d
  _DWORD *v57; // rdx
  __int64 v58; // rcx
  bool v59; // si
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  __int64 v64; // rdx
  char v65; // [rsp+20h] [rbp-168h]
  __int16 v66; // [rsp+30h] [rbp-158h]
  __int16 v67; // [rsp+30h] [rbp-158h]
  char v68; // [rsp+40h] [rbp-148h]
  int v70; // [rsp+64h] [rbp-124h]
  _BYTE v73[48]; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE v74[48]; // [rsp+E0h] [rbp-A8h] BYREF
  _BYTE v75[48]; // [rsp+110h] [rbp-78h] BYREF

  v7 = a4;
  v70 = a4 + 1;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    UserSetLastError(1426);
    v22 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v22 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v26 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v64) + 69152);
    v68 = v7;
    v67 = 22;
    goto LABEL_136;
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
    v66 = 23;
    goto LABEL_84;
  }
  v16 = PtiCurrent(a1);
  v17 = v16;
  if ( a3 )
  {
    v20 = *((unsigned int *)&unk_140362790 + v7 + 1);
    if ( (v20 & 2) != 0 )
    {
      if ( *(_QWORD *)(a3 + 488) == *((_QWORD *)v16 + 61) )
      {
        v19 = (_QWORD *)((char *)v16 + 488);
        if ( *((_QWORD *)v16 + 57) == *(_QWORD *)(a3 + 456) )
          goto LABEL_75;
        if ( a1 || (v20 & 0x20) != 0 )
        {
          if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline(v20)
            || UIPrivilegeIsolation::Enforced(v29)
            || (v30 = *((_QWORD *)v17 + 57),
                v31 = *(_QWORD *)(a3 + 456),
                *(_DWORD *)(v31 + 764) == *(_DWORD *)(v30 + 764))
            && *(_DWORD *)(v31 + 768) == *(_DWORD *)(v30 + 768)
            || (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 520), 0, 0) & 0x400000) != 0 )
          {
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 520), 0, 0) & 0xC) != 0
              && (*((_DWORD *)&unk_140362790 + v7 + 1) & 0x10) == 0 )
            {
              UserSetLastError(1458);
              v34 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
              v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v33);
                LOBYTE(v37) = v35;
                LOBYTE(v38) = v34;
                WPP_RECORDER_AND_TRACE_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v38,
                  v37,
                  *(_QWORD *)(UserSessionState + 69152),
                  3,
                  5,
                  29,
                  (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids,
                  a4);
              }
              return 0LL;
            }
            goto LABEL_75;
          }
          UserSetLastError(5);
          v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return 0LL;
          v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v32) + 69152);
          v66 = 28;
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
          v66 = 27;
        }
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
        v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v27) + 69152);
        v66 = 26;
      }
LABEL_84:
      v65 = 3;
LABEL_94:
      LOBYTE(v14) = v12;
      LOBYTE(v13) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v14,
        v15,
        v65,
        5,
        v66,
        (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
      return 0LL;
    }
    UserSetLastError(1429);
    v22 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v22 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v26 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v21) + 69152);
    v68 = v7;
    v67 = 25;
LABEL_136:
    LOBYTE(v25) = v23;
    LOBYTE(v24) = v22;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v25,
      v26,
      3,
      5,
      v67,
      (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids,
      v68);
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
    v66 = 24;
    goto LABEL_84;
  }
  v19 = (_QWORD *)((char *)v16 + 488);
LABEL_75:
  if ( !RtlAreAllAccessesGranted(*((_DWORD *)v17 + 232), 8u) )
  {
    UserSetLastError(5);
    v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v39) + 69152);
    v66 = 30;
    goto LABEL_84;
  }
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v73);
  LOBYTE(v40) = 5;
  v41 = HMAllocObject(v17, *v19, v40, 104LL);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v73);
  if ( !v41 )
  {
    v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v42) + 69152);
    v66 = 31;
    v65 = 2;
    goto LABEL_94;
  }
  *(_DWORD *)(v41 + 68) = -1;
  if ( a1 )
  {
    HmodTableIndex = GetHmodTableIndex(a2);
    *(_DWORD *)(v41 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126);
      v45 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v45 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v47 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v44);
        LOBYTE(v48) = v46;
        LOBYTE(v49) = v45;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v49,
          v48,
          *(_QWORD *)(v47 + 69152),
          3,
          5,
          32,
          (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
      }
      DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v74);
      HMFreeObject(v41);
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v74);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency(HmodTableIndex);
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>((__int64)v75);
  v50 = 1;
  v51 = 1 << v70;
  v52 = 8LL * v70;
  if ( a3 )
  {
    v53 = (__int64 *)(v52 + a3 + 952);
    *(_DWORD *)(a3 + 712) |= v51;
    if ( *(_QWORD *)(a3 + 512) )
    {
      v54 = *(PRKPROCESS **)(a3 + 456);
      if ( v54 == *((PRKPROCESS **)v17 + 57) )
      {
        v55 = 0;
      }
      else
      {
        KeAttachProcess(*v54);
        v55 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(a3 + 512) + 56LL) = *(_DWORD *)(a3 + 712);
      v56 = a4;
      if ( v55 )
        KeDetachProcess();
    }
    else
    {
      v56 = a4;
    }
    v57 = (_DWORD *)(v41 + 64);
  }
  else
  {
    v53 = (__int64 *)(v52 + 40 + *((_QWORD *)v17 + 62));
    v57 = (_DWORD *)(v41 + 64);
    *(_DWORD *)(v41 + 64) |= 1u;
    *(_DWORD *)(**((_QWORD **)v17 + 62) + 16LL) |= v51;
    a3 = 0LL;
    v56 = a4;
  }
  *(_QWORD *)(v41 + 72) = a3;
  *v57 |= a6 & 0x42;
  *(_DWORD *)(v41 + 48) = v56;
  *(_QWORD *)(v41 + 56) = a5 - a1;
  v58 = *v53;
  *(_QWORD *)(v41 + 40) = *v53;
  if ( a7 )
    *a7 = v58 == 0;
  *v53 = v41;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v50 = 0;
  }
  v59 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v50 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v60 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a7);
    LOBYTE(v61) = v59;
    LOBYTE(v62) = v50;
    WPP_RECORDER_AND_TRACE_SF_qDD(*((_QWORD *)WPP_GLOBAL_Control + 3), v62, v61, *(_QWORD *)(v60 + 69152));
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v75);
  return v41;
}
