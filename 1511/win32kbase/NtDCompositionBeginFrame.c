/*
 * XREFs of NtDCompositionBeginFrame @ 0x1C003AE80
 * Callers:
 *     <none>
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BE8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BF0 (Win32AllocPoolImpl_0.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ??0CCompositionFrame@DirectComposition@@IEAA@AEBUCOMPOSITION_FRAME_INFO@@@Z @ 0x1C003BAE8 (--0CCompositionFrame@DirectComposition@@IEAA@AEBUCOMPOSITION_FRAME_INFO@@@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C003BB68 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C003CA28 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C00A8E7C (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     Template_qpqxxq @ 0x1C00AE2E8 (Template_qpqxxq.c)
 *     Template_xq @ 0x1C00AF7E8 (Template_xq.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  DirectComposition::CConnection *v5; // rsi
  ULONG64 v6; // rcx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _ERESOURCE *v13; // rbx
  volatile signed __int32 *v14; // rax
  __int64 v15; // rcx
  BOOL v16; // r12d
  struct _ERESOURCE *v17; // rbx
  __int64 v18; // r13
  DirectComposition::CCompositionFrame *v19; // rax
  DirectComposition::CCompositionFrame *v20; // rax
  DirectComposition::CConnection *v21; // r15
  PSLIST_ENTRY v22; // rcx
  PSLIST_ENTRY v23; // rbx
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  PSLIST_ENTRY *v26; // r12
  CTokenManager *v27; // rbx
  char v28; // r15
  __int64 v29; // rcx
  ULONG v30; // esi
  __int64 *ElementGenericTable; // r12
  unsigned __int8 (__fastcall ***v32)(__int64); // rdx
  DirectComposition::CCompositionFrame *v33; // rcx
  char v34; // al
  _QWORD *v35; // rax
  _QWORD *v36; // rdx
  _QWORD *v37; // r8
  bool v38; // dl
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  char v42; // r12
  __int64 *v43; // rsi
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 *v46; // rax
  char *v47; // r15
  DirectComposition::CCompositionFrame *v48; // rsi
  char *v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  DirectComposition::CCompositionFrame *v53; // rax
  DirectComposition::CCompositionFrame **v54; // r8
  _QWORD *v55; // rax
  _QWORD *v56; // r8
  DirectComposition::CCompositionFrame *v57; // rdx
  PVOID v58; // r13
  PRKEVENT *v59; // r9
  __int64 v60; // r8
  __int64 v61; // rdx
  struct _SLIST_ENTRY *v62; // rax
  struct _SLIST_ENTRY *Next; // rdx
  __int64 v64; // rax
  _QWORD *p_Next; // r8
  _QWORD *v66; // rcx
  __int64 v67; // rax
  _QWORD *v68; // r8
  DirectComposition::CCompositionFrame *v69; // rcx
  DirectComposition::CCompositionFrame **v70; // rdx
  _QWORD *v71; // rcx
  DirectComposition::CCompositionFrame **v72; // rax
  __int64 *v73; // rcx
  __int64 **v74; // rcx
  __int64 v75; // rcx
  PSLIST_ENTRY *v76; // r8
  struct _SLIST_ENTRY *v77; // rax
  char v78; // r11
  BOOL v79; // [rsp+50h] [rbp-F8h]
  DirectComposition::CCompositionFrame *v80; // [rsp+50h] [rbp-F8h]
  int v81; // [rsp+58h] [rbp-F0h]
  char v82; // [rsp+5Ch] [rbp-ECh] BYREF
  char v83[3]; // [rsp+5Dh] [rbp-EBh] BYREF
  DirectComposition::CConnection *v84; // [rsp+60h] [rbp-E8h]
  _QWORD *v85; // [rsp+68h] [rbp-E0h]
  DirectComposition::CCompositionFrame *v86; // [rsp+70h] [rbp-D8h]
  __int64 v87; // [rsp+78h] [rbp-D0h]
  __int64 *v88; // [rsp+80h] [rbp-C8h] BYREF
  DirectComposition::CCompositionFrame **v89; // [rsp+88h] [rbp-C0h]
  struct _SLIST_ENTRY *v90; // [rsp+90h] [rbp-B8h] BYREF
  unsigned __int64 v91; // [rsp+98h] [rbp-B0h]
  __int64 v92; // [rsp+A0h] [rbp-A8h]
  PERESOURCE *v93; // [rsp+A8h] [rbp-A0h]
  __int128 v94; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v95; // [rsp+C0h] [rbp-88h]
  __int64 v96; // [rsp+D0h] [rbp-78h]
  PSLIST_ENTRY *v97; // [rsp+D8h] [rbp-70h]
  struct _SLIST_ENTRY *v98; // [rsp+E0h] [rbp-68h]
  __int128 v99; // [rsp+E8h] [rbp-60h]
  __int128 v100; // [rsp+F8h] [rbp-50h]
  __int64 v101; // [rsp+108h] [rbp-40h]
  PVOID Object; // [rsp+158h] [rbp+10h]
  unsigned __int8 (__fastcall ***Objecta)(__int64); // [rsp+158h] [rbp+10h]
  char Objectb; // [rsp+158h] [rbp+10h]
  int Objectc; // [rsp+158h] [rbp+10h]
  __int64 *Objecte; // [rsp+158h] [rbp+10h]
  char Objectd; // [rsp+158h] [rbp+10h]
  char v109; // [rsp+168h] [rbp+20h]

  v5 = 0LL;
  v84 = 0LL;
  v91 = 0LL;
  if ( a2 )
  {
    v6 = a2;
    if ( a2 + 40 < a2 || a2 + 40 > MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    v99 = *(_OWORD *)v6;
    v100 = *(_OWORD *)(v6 + 16);
    v101 = *(_QWORD *)(v6 + 32);
    v94 = v99;
    v95 = v100;
    v96 = v101;
    v7 = 0;
    v81 = 0;
  }
  else
  {
    v7 = -1073741811;
    v81 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v7 >= 0 )
  {
    v9 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
      v9 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v9 )
    {
      v13 = *(struct _ERESOURCE **)(v9 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v13, 1u);
      v14 = *(volatile signed __int32 **)(v9 + 24);
      if ( v14 && a1 == *(_QWORD *)(v9 + 16) )
      {
        _InterlockedIncrement(v14);
        v5 = *(DirectComposition::CConnection **)(v9 + 24);
        v84 = v5;
        v7 = 0;
      }
      else
      {
        v7 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v9 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v7 = -1073741823;
    }
    v81 = v7;
    if ( v7 >= 0 )
    {
      v15 = *(unsigned int *)(a2 + 16);
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        Template_xq(v15, &DCompBeginFrameEvent, v12, a1, *(_DWORD *)(a2 + 16));
      v16 = PsGetCurrentProcess(v15, v11) == (_QWORD)g_pepDwm;
      v79 = v16;
      v91 = 0LL;
      DirectComposition::CConnection::s_minSafeFeatureLevel = HIDWORD(v95);
      DirectComposition::CConnection::s_maxHardwareFeatureLevel = v96;
      v93 = (PERESOURCE *)((char *)v5 + 8);
      v17 = (struct _ERESOURCE *)*((_QWORD *)v5 + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v17, 1u);
      if ( v16 && !DirectComposition::CConnection::s_pDwmRenderThread )
      {
        DirectComposition::CConnection::s_pDwmRenderThread = KeGetCurrentThread();
        v5 = v84;
      }
      if ( *((_DWORD *)v5 + 37) )
      {
        v7 = -1073741801;
        v18 = 0LL;
        v87 = 0LL;
        v86 = 0LL;
        if ( (int)IsWin32AllocPoolImplSupported_0() >= 0 )
        {
          v19 = (DirectComposition::CCompositionFrame *)Win32AllocPoolImpl_0();
          if ( v19 )
          {
            v20 = (DirectComposition::CCompositionFrame *)DirectComposition::CCompositionFrame::CCompositionFrame(
                                                            v19,
                                                            (const struct COMPOSITION_FRAME_INFO *)&v94);
            if ( v20 )
            {
              v18 = (__int64)v20;
              v87 = (__int64)v20;
              v86 = v20;
              v7 = 0;
            }
          }
        }
        if ( v7 >= 0 )
        {
          *((_QWORD *)v5 + 20) = v94;
          Object = *(PVOID *)(v18 + 64);
          v7 = 0;
          v90 = 0LL;
          v21 = v84;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v5 + 36, 2, 0) )
          {
            v7 = -1073740024;
LABEL_112:
            v23 = v90;
            goto LABEL_31;
          }
          v22 = ExpInterlockedFlushSList((PSLIST_HEADER)v84 + 6);
          v23 = 0LL;
          if ( v22 )
          {
            do
            {
              Next = v22->Next;
              v64 = *((_QWORD *)&v22[1].Next + 1);
              if ( v64 )
              {
                p_Next = *(_QWORD **)(v64 + 24);
                *(_QWORD *)(v64 + 24) = 0LL;
                v22->Next = (struct _SLIST_ENTRY *)*((_QWORD *)&v22[1].Next + 1);
                *((_QWORD *)&v22[1].Next + 1) = 0LL;
              }
              else
              {
                p_Next = &v22->Next;
              }
              *p_Next = v23;
              v23 = v22;
              v22 = Next;
            }
            while ( Next );
          }
          v90 = v23;
          v24 = (_QWORD *)((char *)v21 + 136);
          v85 = (_QWORD *)((char *)v21 + 136);
          v25 = (_QWORD *)*((_QWORD *)v21 + 17);
          if ( v25 )
          {
            do
            {
              *(_BYTE *)(v25[1] + 49LL) = 0;
              v76 = (PSLIST_ENTRY *)v25;
              v25 = (_QWORD *)*v25;
            }
            while ( v25 );
            v98 = (struct _SLIST_ENTRY *)*v24;
            v77 = v98;
            v97 = v76;
            *v24 = 0LL;
            *v76 = v23;
            v23 = v77;
            v90 = v77;
          }
          v26 = &v90;
          if ( !v23 )
          {
            v16 = v79;
LABEL_31:
            if ( v7 < 0 )
            {
              v48 = v86;
            }
            else
            {
              *((_QWORD *)v21 + 21) = *((_QWORD *)&v94 + 1);
              *((_QWORD *)v21 + 22) = *(_QWORD *)((char *)&v95 + 4);
              v80 = v86;
              if ( v23 )
                *((_QWORD *)v86 + 10) = v23;
              if ( v16 )
              {
                v27 = g_pTokenManager;
                if ( g_pTokenManager )
                {
                  v28 = 0;
                  ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 64, 0LL);
                  *(_QWORD *)v27 = KeGetCurrentThread();
                  v29 = *((_QWORD *)v27 + 15);
                  if ( v29 && (*(_QWORD *)(v29 + 2088) != v29 + 16 || *(_DWORD *)(v29 + 32)) )
                  {
                    v57 = v86;
                    v80 = v86;
                    *((_QWORD *)v86 + 11) = v29;
                    *(_BYTE *)(v29 + 2108) = 1;
                    *(_QWORD *)(v29 + 2088) = v29 + 16;
                    *((_DWORD *)v57 + 24) = 1;
                    *((_QWORD *)v27 + 15) = 0LL;
                  }
                  else
                  {
                    v80 = v86;
                  }
                  if ( !*((_DWORD *)v27 + 20) )
                  {
                    v28 = 1;
                    goto LABEL_66;
                  }
                  v30 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)v27 + 128)) - 1;
                  ElementGenericTable = (__int64 *)RtlGetElementGenericTable(
                                                     (PRTL_GENERIC_TABLE)((char *)v27 + 128),
                                                     v30);
                  if ( ElementGenericTable )
                  {
                    while ( 1 )
                    {
                      Objecta = (unsigned __int8 (__fastcall ***)(__int64))*ElementGenericTable;
                      if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(*ElementGenericTable + 32))(*ElementGenericTable + 32) )
                        goto LABEL_153;
                      KeEnterCriticalRegion();
                      ExAcquirePushLockSharedEx(Objecta + 5, 0LL);
                      if ( !(*Objecta[4])((__int64)(Objecta + 4)) )
                        break;
                      v32 = Objecta;
                      Objectb = *((_BYTE *)Objecta + 112);
                      if ( KeGetCurrentThread() == (struct _KTHREAD *)v32[6] )
                      {
                        v32[6] = 0LL;
                        ExReleasePushLockExclusiveEx(v32 + 5);
                      }
                      else
                      {
                        ExReleasePushLockSharedEx(v32 + 5);
                      }
                      KeLeaveCriticalRegion();
                      v33 = v86;
                      v80 = v86;
                      if ( Objectb )
                      {
                        v34 = 1;
                        goto LABEL_48;
                      }
LABEL_47:
                      v34 = 0;
LABEL_48:
                      if ( v34 )
                        goto LABEL_54;
                      v35 = (_QWORD *)ElementGenericTable[1];
                      v87 = (__int64)v35;
                      v36 = (_QWORD *)v35[1];
                      v37 = (_QWORD *)v36[1];
                      if ( (_QWORD *)*v36 != v35 || (_QWORD *)*v37 != v36 )
                        __fastfail(3u);
                      v35[1] = v37;
                      *v37 = v35;
                      if ( v36 == v35 )
                      {
LABEL_52:
                        v38 = 0;
                        goto LABEL_53;
                      }
                      while ( 1 )
                      {
                        v85 = v36 - 1;
                        if ( (*(int (__fastcall **)(_QWORD *, DirectComposition::CCompositionFrame *, char *))(*(v36 - 1) + 32LL))(
                               v36 - 1,
                               v33,
                               v83) >= 0 )
                          break;
                        (*(void (__fastcall **)(_QWORD *))(*v85 + 56LL))(v85);
                        (*(void (__fastcall **)(_QWORD *, __int64))*v85)(v85, 1LL);
                        v33 = v80;
LABEL_97:
                        v55 = (_QWORD *)v87;
                        v36 = *(_QWORD **)(v87 + 8);
                        v56 = (_QWORD *)v36[1];
                        if ( *v36 != v87 || (_QWORD *)*v56 != v36 )
                          __fastfail(3u);
                        *(_QWORD *)(v87 + 8) = v56;
                        *v56 = v55;
                        if ( v36 == v55 )
                          goto LABEL_52;
                      }
                      if ( v83[0] )
                      {
                        v53 = (DirectComposition::CCompositionFrame *)(v85 + 1);
                        v33 = v80;
                        v54 = (DirectComposition::CCompositionFrame **)*((_QWORD *)v80 + 18);
                        v85[1] = (char *)v80 + 136;
                        *((_QWORD *)v53 + 1) = v54;
                        if ( *v54 != (DirectComposition::CCompositionFrame *)((char *)v80 + 136) )
                          __fastfail(3u);
                        *v54 = v53;
                        *((_QWORD *)v80 + 18) = v53;
                        goto LABEL_97;
                      }
                      v38 = *((_DWORD *)v85 + 6) == 2;
                      v66 = v85 + 1;
                      v67 = v87;
                      v68 = *(_QWORD **)(v87 + 8);
                      v85[1] = v87;
                      v66[1] = v68;
                      if ( *v68 != v67 )
                        __fastfail(3u);
                      *v68 = v66;
                      *(_QWORD *)(v67 + 8) = v66;
LABEL_53:
                      v28 |= v38;
LABEL_54:
                      if ( *(_QWORD *)ElementGenericTable[1] == ElementGenericTable[1] )
                      {
                        v87 = *ElementGenericTable;
                        v109 = 0;
                        v92 = v87 + 32;
                        Objectc = CPushLock::AcquireLockShared((CPushLock *)(v87 + 32));
                        if ( Objectc < 0 )
                          goto LABEL_151;
                        v39 = 0LL;
                        if ( *(_DWORD *)(v87 + 104) )
                        {
                          v40 = *(_QWORD *)(v87 + 88);
                          if ( *(_BYTE *)(v40 + 16) )
                            v39 = v40 - 24;
                        }
                        if ( v39 )
                          v109 = 1;
                        v41 = v92;
                        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v92 + 16) )
                        {
                          *(_QWORD *)(v92 + 16) = 0LL;
                          ExReleasePushLockExclusiveEx(v41 + 8);
                        }
                        else
                        {
                          ExReleasePushLockSharedEx(v92 + 8);
                        }
                        KeLeaveCriticalRegion();
                        v80 = v86;
                        if ( Objectc < 0 || !v109 )
LABEL_151:
                          CTokenManager::RemoveTokenQueueTableEntry(
                            v27,
                            (struct CTokenManager::TokenQueueTableEntry *)ElementGenericTable);
                      }
                      ElementGenericTable = (__int64 *)RtlGetElementGenericTable(
                                                         (PRTL_GENERIC_TABLE)((char *)v27 + 128),
                                                         --v30);
                      if ( !ElementGenericTable )
                        goto LABEL_66;
                    }
                    CPushLock::ReleaseLock((CPushLock *)(Objecta + 4));
LABEL_153:
                    v33 = v80;
                    goto LABEL_47;
                  }
LABEL_66:
                  v42 = 0;
                  v89 = (DirectComposition::CCompositionFrame **)&v88;
                  v88 = (__int64 *)&v88;
                  v43 = (__int64 *)((char *)v27 + 200);
                  v44 = (__int64 *)*((_QWORD *)v27 + 25);
                  v45 = *v44;
                  if ( (CTokenManager *)v44[1] != (CTokenManager *)((char *)v27 + 200) || *(__int64 **)(v45 + 8) != v44 )
                    __fastfail(3u);
                  *v43 = v45;
                  for ( *(_QWORD *)(v45 + 8) = v43; v44 != v43; v71[1] = v43 )
                  {
                    Objecte = v44 - 5;
                    v87 = (__int64)(v44 - 1);
                    if ( (*(int (__fastcall **)(__int64, DirectComposition::CCompositionFrame *, char *))(*(_QWORD *)v87 + 32LL))(
                           v87,
                           v80,
                           &v82) < 0 )
                    {
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 56LL))(v87);
                      ObfDereferenceObject(Objecte);
                    }
                    else
                    {
                      v69 = (DirectComposition::CCompositionFrame *)(Objecte + 5);
                      if ( v82 )
                      {
                        v70 = (DirectComposition::CCompositionFrame **)*((_QWORD *)v80 + 20);
                        *(_QWORD *)v69 = (char *)v80 + 152;
                        Objecte[6] = (__int64)v70;
                        if ( *v70 != (DirectComposition::CCompositionFrame *)((char *)v80 + 152) )
                          __fastfail(3u);
                        *v70 = v69;
                        *((_QWORD *)v80 + 20) = v69;
                      }
                      else
                      {
                        v72 = v89;
                        *(_QWORD *)v69 = &v88;
                        Objecte[6] = (__int64)v72;
                        if ( *v72 != (DirectComposition::CCompositionFrame *)&v88 )
                          __fastfail(3u);
                        *v72 = v69;
                        v89 = (DirectComposition::CCompositionFrame **)(Objecte + 5);
                      }
                    }
                    v44 = (__int64 *)*v43;
                    v71 = *(_QWORD **)*v43;
                    if ( *(__int64 **)(*v43 + 8) != v43 || (__int64 *)v71[1] != v44 )
                      __fastfail(3u);
                    *v43 = (__int64)v71;
                  }
                  v46 = v88;
                  if ( v88 != (__int64 *)&v88 )
                  {
                    v73 = (__int64 *)*v88;
                    if ( (__int64 **)v88[1] != &v88 || (__int64 *)v73[1] != v88 )
                      __fastfail(3u);
                    v88 = (__int64 *)*v88;
                    for ( v73[1] = (__int64)&v88; v46 != (__int64 *)&v88; *(_QWORD *)(v75 + 8) = &v88 )
                    {
                      v74 = (__int64 **)*((_QWORD *)v27 + 26);
                      *v46 = (__int64)v43;
                      v46[1] = (__int64)v74;
                      if ( *v74 != v43 )
                        __fastfail(3u);
                      *v74 = v46;
                      *((_QWORD *)v27 + 26) = v46;
                      v46 = v88;
                      v75 = *v88;
                      if ( (__int64 **)v88[1] != &v88 || *(__int64 **)(v75 + 8) != v88 )
                        __fastfail(3u);
                      v88 = (__int64 *)*v88;
                    }
                    v42 = 1;
                  }
                  *((_QWORD *)v27 + 11) = *(_QWORD *)(v18 + 64);
                  if ( !((unsigned __int8)v42 | (unsigned __int8)v28) )
                    ZwClearEvent(*((HANDLE *)v27 + 4));
                  ZwClearEvent(*((HANDLE *)v27 + 6));
                  *(_QWORD *)v27 = 0LL;
                  ExReleasePushLockExclusiveEx((char *)v27 + 64);
                  v21 = v84;
                }
              }
              v47 = (char *)v21 + 200;
              ExAcquirePushLockExclusiveEx(v47, 0LL);
              v47[8] = 1;
              _InterlockedIncrement((volatile signed __int32 *)v80);
              v48 = v86;
              v49 = (char *)v86 + 8;
              v50 = (_QWORD *)((char *)v84 + 184);
              v51 = *((_QWORD *)v84 + 23);
              *((_QWORD *)v86 + 1) = v51;
              *((_QWORD *)v49 + 1) = v50;
              if ( *(_QWORD **)(v51 + 8) != v50 )
                __fastfail(3u);
              *(_QWORD *)(v51 + 8) = v49;
              *v50 = v49;
              if ( v47[8] )
                ExReleasePushLockExclusiveEx(v47);
              else
                ExReleasePushLockSharedEx(v47);
            }
            if ( v7 < 0 )
              DirectComposition::CCompositionFrame::Discard(v48);
            else
              v91 = *(_QWORD *)(v18 + 64);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v48, 0xFFFFFFFF) == 1 )
            {
              if ( *((_DWORD *)v86 + 18) != 3 )
                DirectComposition::CCompositionFrame::Discard(v86);
              Win32FreePool();
            }
            v5 = v84;
            goto LABEL_80;
          }
          v58 = Object;
          while ( 1 )
          {
            v59 = (PRKEVENT *)*((_QWORD *)v21 + 11);
            v60 = *((_QWORD *)v5 + 20);
            v92 = v60;
            if ( *(_BYTE *)(*((_QWORD *)&v23->Next + 1) + 49LL) )
            {
              v78 = 1;
              goto LABEL_147;
            }
            v61 = *((_QWORD *)&v23->Next + 1);
            if ( *(_BYTE *)(v61 + 185) )
            {
              Objectd = 4;
            }
            else
            {
              v62 = v23[4].Next;
              if ( !v62 || !v60 || (__int64)v62 - v60 <= 0 )
              {
                if ( !*((_QWORD *)&v23[2].Next + 1) || SLODWORD(v23[3].Next) <= 0 )
                {
                  if ( ((__int64)v23[2].Next & 8) != 0 )
                    *(_BYTE *)(v61 + 185) = 1;
                  *((_QWORD *)&v23[3].Next + 1) = v58;
                  v26 = &v23->Next;
                  v24 = v85;
                  goto LABEL_110;
                }
                v78 = 3;
                goto LABEL_146;
              }
              Objectd = 2;
            }
            KeSetEvent(*v59, 1, 0);
            LODWORD(v60) = v92;
            v78 = Objectd;
LABEL_146:
            v24 = v85;
LABEL_147:
            if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
            {
              Template_qpqxxq(
                v23[4].Next,
                (_DWORD)v24,
                v60,
                *(_DWORD *)(*((_QWORD *)&v23->Next + 1) + 28LL),
                (char)v23,
                (char)v23[1].Next,
                (char)v23[4].Next,
                v60,
                v78);
              v24 = v85;
            }
            *(_BYTE *)(*((_QWORD *)&v23->Next + 1) + 49LL) = 1;
            *((_QWORD *)&v23[3].Next + 1) = 0LL;
            *v26 = v23->Next;
            *v24 = v23;
            v24 = &v23->Next;
            v85 = &v23->Next;
            v23->Next = 0LL;
LABEL_110:
            v23 = *v26;
            if ( !*v26 )
            {
              v21 = v84;
              v18 = v87;
              v16 = v79;
              goto LABEL_112;
            }
          }
        }
      }
      else
      {
        v7 = -1073741300;
      }
LABEL_80:
      ExReleaseResourceLite(*v93);
      KeLeaveCriticalRegion();
      v81 = v7;
    }
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v91;
  }
  else
  {
    v7 = -1073741811;
    v81 = -1073741811;
  }
  if ( v7 < 0 && v91 )
    DirectComposition::CConnection::RemoveCompositionFrame(v5, v91);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      DirectComposition::CConnection::`scalar deleting destructor'(v84);
    v7 = v81;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
