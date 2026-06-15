/*
 * XREFs of ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800196B0
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018CB0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x18000BA58 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18000BAA4 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x18000E720 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z @ 0x180010AF0 (-GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z.c)
 *     ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180010C20 (-QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x1800179D0 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180030D2C (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18006AC58 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x18007E86C (WPP_SF_SS.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionManager::OnStateChanged(
        CAudioSessionManager *this,
        __int64 (__fastcall ***a2)(CAudioSession *this, const struct _GUID *a2, void **a3),
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  enum _AudioSessionState v4; // r12d
  __int64 (__fastcall *v6)(CAudioSession *, const struct _GUID *, void **); // rdi
  int Interface; // eax
  __int64 (__fastcall *v8)(CAudioSession *, struct CAudioSession **); // rdi
  int Implementation; // eax
  struct CAudioSession *v10; // rsi
  char *v11; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v12)(ATL::CAtlStringMgr *); // r14
  struct ATL::IAtlStringMgr *v13; // rax
  char *v14; // rbx
  char *v15; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v16)(ATL::CAtlStringMgr *); // r14
  struct ATL::IAtlStringMgr *v17; // rax
  char *v18; // rbx
  char *v19; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v20)(ATL::CAtlStringMgr *); // r14
  struct ATL::IAtlStringMgr *v21; // rax
  char *v22; // rbx
  char *v23; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v24)(ATL::CAtlStringMgr *); // r14
  struct ATL::IAtlStringMgr *v25; // rax
  char *v26; // rbx
  char *v27; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v28)(ATL::CAtlStringMgr *); // rsi
  struct ATL::IAtlStringMgr *v29; // rax
  char *v30; // rbx
  struct ISessionInternalEvents *v31; // r14
  struct CAudioSession *v32; // r12
  unsigned int v33; // edi
  struct ISessionInternalEvents *v34; // r15
  int v35; // ecx
  unsigned int v36; // r14d
  unsigned int v37; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v39; // rax
  unsigned int *v40; // rbx
  _WORD *v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r9
  __int64 v44; // r8
  __int16 v45; // ax
  _WORD *v46; // rcx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r10
  __int64 v49; // r8
  __int16 v50; // ax
  HANDLE v51; // rax
  __int64 (__fastcall *v52)(CAudioSession *); // rdi
  __int64 v53; // r14
  char *v54; // r14
  char *v55; // r14
  char *v56; // r14
  char *v57; // r14
  CAudioSession *v58; // rbx
  struct _RTL_CRITICAL_SECTION *v60; // rdi
  __int64 (__fastcall *v61)(CAudioSession *, struct ISessionInternalEvents *); // rsi
  __int64 (__fastcall *v62)(CAudioSession *, struct ISessionInternalEvents *); // r14
  __int64 (__fastcall *v63)(CAudioSession *); // r14
  ATL::CAtlException *v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  rsize_t v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  rsize_t v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  rsize_t v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  rsize_t v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  rsize_t v94; // rdx
  bool v95; // sf
  struct CAudioSession *v96; // [rsp+30h] [rbp-F8h] BYREF
  struct ISessionInternalEvents *v97; // [rsp+38h] [rbp-F0h]
  CAudioSession *v98; // [rsp+40h] [rbp-E8h] BYREF
  enum _AudioSessionState v99; // [rsp+48h] [rbp-E0h]
  struct ISessionInternalEvents *v100; // [rsp+58h] [rbp-D0h]
  char **v101; // [rsp+60h] [rbp-C8h]
  void **v102; // [rsp+68h] [rbp-C0h]
  unsigned int *v103; // [rsp+70h] [rbp-B8h]
  struct CAudioSession *v104; // [rsp+78h] [rbp-B0h]
  __int64 v105; // [rsp+80h] [rbp-A8h]
  ATL::CAtlException *v106; // [rsp+88h] [rbp-A0h] BYREF
  char *v107; // [rsp+90h] [rbp-98h] BYREF
  char *v108; // [rsp+98h] [rbp-90h] BYREF
  char *v109; // [rsp+A0h] [rbp-88h]
  __int128 v110; // [rsp+A8h] [rbp-80h]
  char *v111; // [rsp+B8h] [rbp-70h]
  int v112; // [rsp+C0h] [rbp-68h]
  __int64 v113; // [rsp+C8h] [rbp-60h]
  int v114; // [rsp+D0h] [rbp-58h]
  char *v115; // [rsp+D8h] [rbp-50h]

  v105 = -2LL;
  v4 = a4;
  v97 = this;
  v100 = this;
  v99 = a4;
  v98 = 0LL;
  v96 = 0LL;
  v6 = **a2;
  if ( v6 == CAudioSession::QueryInterface )
    Interface = CAudioSession::QueryInterface(
                  (CAudioSession *)a2,
                  &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a,
                  (void **)&v98);
  else
    Interface = v6((CAudioSession *)a2, &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a, (void **)&v98);
  if ( Interface < 0
    || ((v8 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioSession **))(*(_QWORD *)v98 + 24LL),
         v8 != CAudioSession::GetImplementation)
      ? (Implementation = v8(v98, &v96))
      : (Implementation = CAudioSession::GetImplementation(v98, &v96)),
        Implementation < 0) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x22u,
        (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
    }
    v58 = v98;
    if ( v98 )
      goto LABEL_79;
    return 0LL;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      35,
      (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      0,
      v4);
  }
  v10 = v96;
  v11 = (char *)*((_QWORD *)v96 + 79);
  v12 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *))(**((_QWORD **)v11 - 3) + 32LL);
  if ( v12 == ATL::CAtlStringMgr::Clone )
    v13 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v11 - 3));
  else
    v13 = v12(*((ATL::CAtlStringMgr **)v11 - 3));
  if ( *((int *)v11 - 2) >= 0 && v13 == *((struct ATL::IAtlStringMgr **)v11 - 3) )
  {
    v14 = v11 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v11 - 2);
  }
  else
  {
    v65 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v13)(
            v13,
            *((unsigned int *)v11 - 4),
            2LL);
    v14 = (char *)v65;
    if ( !v65 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v67, v66, v68, v69);
    *(_DWORD *)(v65 + 8) = *((_DWORD *)v11 - 4);
    v70 = 2LL * (*((_DWORD *)v11 - 4) + 1);
    memcpy_s((void *const)(v65 + 24), v70, v11, v70);
  }
  v107 = v14 + 24;
  v101 = &v108;
  v15 = (char *)*((_QWORD *)v10 + 80);
  v16 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *))(**((_QWORD **)v15 - 3) + 32LL);
  if ( v16 == ATL::CAtlStringMgr::Clone )
    v17 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v15 - 3));
  else
    v17 = v16(*((ATL::CAtlStringMgr **)v15 - 3));
  if ( *((int *)v15 - 2) >= 0 && v17 == *((struct ATL::IAtlStringMgr **)v15 - 3) )
  {
    v18 = v15 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v15 - 2);
  }
  else
  {
    v71 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v17)(
            v17,
            *((unsigned int *)v15 - 4),
            2LL);
    v18 = (char *)v71;
    if ( !v71 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v73, v72, v74, v75);
    *(_DWORD *)(v71 + 8) = *((_DWORD *)v15 - 4);
    v76 = 2LL * (*((_DWORD *)v15 - 4) + 1);
    memcpy_s((void *const)(v71 + 24), v76, v15, v76);
  }
  v108 = v18 + 24;
  v19 = (char *)*((_QWORD *)v10 + 81);
  v20 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *))(**((_QWORD **)v19 - 3) + 32LL);
  if ( v20 == ATL::CAtlStringMgr::Clone )
    v21 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v19 - 3));
  else
    v21 = v20(*((ATL::CAtlStringMgr **)v19 - 3));
  if ( *((int *)v19 - 2) >= 0 && v21 == *((struct ATL::IAtlStringMgr **)v19 - 3) )
  {
    v22 = v19 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v19 - 2);
  }
  else
  {
    v77 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v21)(
            v21,
            *((unsigned int *)v19 - 4),
            2LL);
    v22 = (char *)v77;
    if ( !v77 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v79, v78, v80, v81);
    *(_DWORD *)(v77 + 8) = *((_DWORD *)v19 - 4);
    v82 = 2LL * (*((_DWORD *)v19 - 4) + 1);
    memcpy_s((void *const)(v77 + 24), v82, v19, v82);
  }
  v109 = v22 + 24;
  v110 = *((_OWORD *)v10 + 41);
  v23 = (char *)*((_QWORD *)v10 + 84);
  v24 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *))(**((_QWORD **)v23 - 3) + 32LL);
  if ( v24 == ATL::CAtlStringMgr::Clone )
    v25 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v23 - 3));
  else
    v25 = v24(*((ATL::CAtlStringMgr **)v23 - 3));
  if ( *((int *)v23 - 2) >= 0 && v25 == *((struct ATL::IAtlStringMgr **)v23 - 3) )
  {
    v26 = v23 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v23 - 2);
  }
  else
  {
    v83 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v25)(
            v25,
            *((unsigned int *)v23 - 4),
            2LL);
    v26 = (char *)v83;
    if ( !v83 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v85, v84, v86, v87);
    *(_DWORD *)(v83 + 8) = *((_DWORD *)v23 - 4);
    v88 = 2LL * (*((_DWORD *)v23 - 4) + 1);
    memcpy_s((void *const)(v83 + 24), v88, v23, v88);
  }
  v111 = v26 + 24;
  v112 = *((_DWORD *)v10 + 170);
  v113 = *((_QWORD *)v10 + 86);
  v114 = *((_DWORD *)v10 + 174);
  v27 = (char *)*((_QWORD *)v10 + 88);
  v28 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *))(**((_QWORD **)v27 - 3) + 32LL);
  if ( v28 == ATL::CAtlStringMgr::Clone )
    v29 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v27 - 3));
  else
    v29 = v28(*((ATL::CAtlStringMgr **)v27 - 3));
  if ( *((int *)v27 - 2) >= 0 && v29 == *((struct ATL::IAtlStringMgr **)v27 - 3) )
  {
    v30 = v27 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v27 - 2);
  }
  else
  {
    v89 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v29)(
            v29,
            *((unsigned int *)v27 - 4),
            2LL);
    v30 = (char *)v89;
    if ( !v89 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v91, v90, v92, v93);
    *(_DWORD *)(v89 + 8) = *((_DWORD *)v27 - 4);
    v94 = 2LL * (*((_DWORD *)v27 - 4) + 1);
    memcpy_s((void *const)(v89 + 24), v94, v27, v94);
  }
  v115 = v30 + 24;
  if ( a3 != AudioSessionStateExpired )
  {
    v31 = v97;
    goto LABEL_38;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      36LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      (unsigned int)v4);
  }
  v31 = v97;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v97 + 24));
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      37,
      (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      0,
      (__int64)v115);
  }
  try
  {
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
      (__int64)v31 + 64,
      (const struct CAudioSessionInstanceId *)&v107,
      &v96);
  }
  catch ( ATL::CAtlException *v106 )
  {
    v64 = v106;
    if ( *(_DWORD *)v106 == -1073741571 )
      _resetstkoflw();
    LODWORD(v97) = *(_DWORD *)v64;
    v31 = v100;
    v4 = v99;
    v95 = (int)v97 < 0;
    v97 = v100;
    if ( v95 )
      goto LABEL_137;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      38LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      v31,
      v96);
  }
  (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v96 + 8LL))(v96);
LABEL_137:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v31 + 24));
LABEL_38:
  if ( v4 == AudioSessionStateActive )
  {
    v32 = v96;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        50LL,
        &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        0LL);
    }
    v33 = 2 * *(_DWORD *)(*((_QWORD *)v32 + 88) - 16LL) + 2;
    v34 = v97;
    v35 = *(_DWORD *)(*((_QWORD *)v97 + 30) - 16LL);
    v36 = 2 * v35 + 2;
    v37 = v33 + 2 * v35 + 66;
    ProcessHeap = GetProcessHeap();
    v39 = HeapAlloc(ProcessHeap, 0, v37);
    v40 = v39;
    if ( !v39 )
      goto LABEL_63;
    *v39 = v37;
    v39[1] = 64;
    v39[6] = v33;
    v39[12] = v36;
    v39[13] = v33 + 64;
    v41 = v39 + 16;
    v42 = (unsigned __int64)v33 >> 1;
    if ( v42 - 1 > 0x7FFFFFFE )
    {
      if ( !v42 )
      {
LABEL_54:
        v46 = (_WORD *)((char *)v40 + v40[13]);
        v47 = (unsigned __int64)v36 >> 1;
        if ( v47 - 1 > 0x7FFFFFFE )
        {
          if ( !v47 )
            goto LABEL_62;
        }
        else
        {
          v48 = 2147483646 - v47;
          v49 = *((_QWORD *)v34 + 30) - (_QWORD)v46;
          while ( v47 + v48 )
          {
            v50 = *(_WORD *)((char *)v46 + v49);
            if ( !v50 )
              break;
            *v46++ = v50;
            if ( !--v47 )
              goto LABEL_141;
          }
          if ( v47 )
            goto LABEL_61;
LABEL_141:
          --v46;
        }
LABEL_61:
        *v46 = 0;
LABEL_62:
        v102 = &CAudioSessionManagerNotification::`vftable';
        v103 = v40;
        v104 = v32;
        CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v34 + 136));
LABEL_63:
        v51 = GetProcessHeap();
        HeapFree(v51, 0, v40);
        goto LABEL_64;
      }
    }
    else
    {
      v43 = 2147483646 - v42;
      v44 = *((_QWORD *)v32 + 88) - (_QWORD)v41;
      while ( v42 + v43 )
      {
        v45 = *(_WORD *)((char *)v41 + v44);
        if ( !v45 )
          break;
        *v41++ = v45;
        if ( !--v42 )
          goto LABEL_138;
      }
      if ( v42 )
        goto LABEL_53;
LABEL_138:
      --v41;
    }
LABEL_53:
    *v41 = 0;
    goto LABEL_54;
  }
  if ( v4 == AudioSessionStateExpired )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        39LL,
        &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        0LL);
    }
    v60 = (struct _RTL_CRITICAL_SECTION *)((char *)v31 + 24);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v31 + 24));
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_SS(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        43,
        (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        0,
        (__int64)v115);
    }
    if ( ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
           (__int64)v31 + 64,
           (__int64)&v107) )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x2Cu,
          (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
      }
      v61 = *(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v96 + 184LL);
      if ( v61 == CAudioSession::DeleteSessionNotification )
        CAudioSession::DeleteSessionNotification(v96, v31);
      else
        v61(v96, v31);
      v62 = *(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v96 + 184LL);
      if ( v62 == CAudioSession::DeleteSessionNotification )
        CAudioSession::DeleteSessionNotification(v96, g_PolicyEventsHandler);
      else
        v62(v96, g_PolicyEventsHandler);
      v63 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v96 + 16LL);
      if ( v63 == CAudioSession::Release )
        CAudioSession::Release(v96);
      else
        v63(v96);
    }
    else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
           && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        45LL,
        &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        v115);
    }
    LeaveCriticalSection(v60);
  }
LABEL_64:
  if ( v96 )
  {
    v52 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v96 + 16LL);
    if ( v52 == CAudioSession::Release )
      CAudioSession::Release(v96);
    else
      v52(v96);
    v96 = 0LL;
  }
  v53 = (__int64)v115;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v115 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v53 - 24) + 8LL))(*(_QWORD *)(v53 - 24), v53 - 24);
  v54 = v111;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v111 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v54 - 3) + 8LL))(*((_QWORD *)v54 - 3), v54 - 24);
  v55 = v109;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v109 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v55 - 3) + 8LL))(*((_QWORD *)v55 - 3), v55 - 24);
  v56 = v108;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v108 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v56 - 3) + 8LL))(*((_QWORD *)v56 - 3), v56 - 24);
  v57 = v107;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v107 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v57 - 3) + 8LL))(*((_QWORD *)v57 - 3), v57 - 24);
  v58 = v98;
  if ( v98 )
LABEL_79:
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v58 + 16LL))(v58);
  return 0LL;
}
