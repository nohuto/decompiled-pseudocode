/*
 * XREFs of NtDCompositionBeginFrame @ 0x1C0045E30
 * Callers:
 *     <none>
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BB8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BC0 (Win32AllocPoolImpl_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ??0CCompositionFrame@DirectComposition@@IEAA@AEBUCOMPOSITION_FRAME_INFO@@@Z @ 0x1C0046950 (--0CCompositionFrame@DirectComposition@@IEAA@AEBUCOMPOSITION_FRAME_INFO@@@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00469D0 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0046EA4 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C00A43C8 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     Template_qpqxxq @ 0x1C00A9E3C (Template_qpqxxq.c)
 *     Template_xq @ 0x1C00AB2C8 (Template_xq.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  DirectComposition::CConnection *v5; // rsi
  ULONG64 v6; // rax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _ERESOURCE *v16; // rbx
  volatile signed __int32 *v17; // rax
  __int64 v18; // rcx
  BOOL v19; // r14d
  struct _ERESOURCE *v20; // rbx
  DirectComposition::CCompositionFrame *v21; // r12
  DirectComposition::CCompositionFrame *v22; // rax
  DirectComposition::CCompositionFrame *v23; // rax
  DirectComposition::CConnection *v24; // r13
  PSLIST_ENTRY v25; // rcx
  PSLIST_ENTRY v26; // rbx
  DirectComposition::CCompositionFrame *v27; // r8
  _QWORD *v28; // rcx
  PSLIST_ENTRY *v29; // r14
  DirectComposition::CCompositionFrame *v30; // rbx
  CTokenManager *v31; // rsi
  __int64 v32; // rcx
  ULONG v33; // r12d
  struct CTokenManager::TokenQueueTableEntry *ElementGenericTable; // r14
  char v35; // bl
  _QWORD *v37; // rbx
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  bool v40; // al
  char v41; // bl
  __int64 v42; // r8
  __int64 v43; // rdx
  char v44; // r14
  __int64 *v45; // rbx
  __int64 *v46; // rax
  __int64 v47; // rcx
  __int64 *v48; // rax
  DirectComposition::CCompositionFrame *v49; // rsi
  char *v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rdx
  char *v53; // rcx
  unsigned int v54; // edx
  volatile signed __int32 *v56; // rax
  volatile signed __int32 *v57; // rcx
  volatile signed __int32 **v58; // rdx
  _QWORD *v59; // rcx
  __int64 v60; // r12
  PRKEVENT *v61; // r9
  _QWORD *v62; // r10
  __int64 v63; // rdx
  struct _SLIST_ENTRY *v64; // rax
  DirectComposition::CCompositionFrame *v65; // rax
  struct _SLIST_ENTRY *Next; // rdx
  __int64 v67; // rax
  _QWORD *p_Next; // r8
  _QWORD *v69; // rcx
  _QWORD *v70; // rdx
  volatile signed __int32 *v71; // r15
  volatile signed __int32 *v72; // rax
  volatile signed __int32 *v73; // rcx
  volatile signed __int32 **v74; // rdx
  _QWORD *v75; // rcx
  __int64 ***v76; // r15
  __int64 ***v77; // rax
  __int64 *v78; // rcx
  __int64 **v79; // rcx
  __int64 v80; // rcx
  PSLIST_ENTRY *v81; // rdx
  struct _SLIST_ENTRY *v82; // rax
  int v83; // ecx
  __int64 v84; // [rsp+20h] [rbp-128h]
  __int64 v85; // [rsp+28h] [rbp-120h]
  int v86; // [rsp+50h] [rbp-F8h]
  char v87; // [rsp+54h] [rbp-F4h] BYREF
  char v88; // [rsp+55h] [rbp-F3h]
  char v89[2]; // [rsp+56h] [rbp-F2h] BYREF
  DirectComposition::CCompositionFrame *v90; // [rsp+58h] [rbp-F0h]
  _QWORD *v91; // [rsp+60h] [rbp-E8h]
  DirectComposition::CConnection *v92; // [rsp+68h] [rbp-E0h]
  __int64 *v93; // [rsp+70h] [rbp-D8h] BYREF
  __int64 **v94; // [rsp+78h] [rbp-D0h]
  DirectComposition::CCompositionFrame *v95; // [rsp+80h] [rbp-C8h]
  struct _SLIST_ENTRY *v96; // [rsp+88h] [rbp-C0h] BYREF
  unsigned __int64 v97; // [rsp+90h] [rbp-B8h]
  DirectComposition::CCompositionFrame *v98; // [rsp+98h] [rbp-B0h]
  CPushLock *v99; // [rsp+A0h] [rbp-A8h]
  PERESOURCE *v100; // [rsp+A8h] [rbp-A0h]
  __int128 v101; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v102; // [rsp+C0h] [rbp-88h]
  __int64 v103; // [rsp+D0h] [rbp-78h]
  struct _SLIST_ENTRY *v104; // [rsp+D8h] [rbp-70h]
  PSLIST_ENTRY *v105; // [rsp+E0h] [rbp-68h]
  __int128 v106; // [rsp+E8h] [rbp-60h]
  __int128 v107; // [rsp+F8h] [rbp-50h]
  __int64 v108; // [rsp+108h] [rbp-40h]
  __int64 v109; // [rsp+158h] [rbp+10h]
  unsigned __int8 v110; // [rsp+158h] [rbp+10h]
  int v111; // [rsp+158h] [rbp+10h]
  BOOL v113; // [rsp+168h] [rbp+20h]
  int v114; // [rsp+168h] [rbp+20h]

  v5 = 0LL;
  v92 = 0LL;
  v97 = 0LL;
  if ( a2 )
  {
    v6 = a2;
    if ( a2 + 40 < a2 || a2 + 40 > MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    v106 = *(_OWORD *)v6;
    v107 = *(_OWORD *)(v6 + 16);
    v108 = *(_QWORD *)(v6 + 32);
    v101 = v106;
    v102 = v107;
    v103 = v108;
    v7 = 0;
    v86 = 0;
  }
  else
  {
    v7 = -1073741811;
    v86 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v7 >= 0 )
  {
    v12 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8, v10, v11, v84, v85);
    if ( CurrentProcessWin32Process )
      v12 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v12 )
    {
      v16 = *(struct _ERESOURCE **)(v12 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v16, 1u);
      v17 = *(volatile signed __int32 **)(v12 + 24);
      if ( v17 && a1 == *(_QWORD *)(v12 + 16) )
      {
        _InterlockedIncrement(v17);
        v5 = *(DirectComposition::CConnection **)(v12 + 24);
        v92 = v5;
        v7 = 0;
      }
      else
      {
        v7 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v12 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v7 = -1073741823;
    }
    v86 = v7;
    if ( v7 >= 0 )
    {
      v18 = *(unsigned int *)(a2 + 16);
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        Template_xq(v18, &DCompBeginFrameEvent, v15, a1, *(_DWORD *)(a2 + 16));
      v19 = PsGetCurrentProcess(v18, v14) == (_QWORD)g_pepDwm;
      v113 = v19;
      v97 = 0LL;
      DirectComposition::CConnection::s_minSafeFeatureLevel = HIDWORD(v102);
      DirectComposition::CConnection::s_maxHardwareFeatureLevel = v103;
      v100 = (PERESOURCE *)((char *)v5 + 8);
      v20 = (struct _ERESOURCE *)*((_QWORD *)v5 + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v20, 1u);
      if ( v19 && !DirectComposition::CConnection::s_pDwmRenderThread )
      {
        DirectComposition::CConnection::s_pDwmRenderThread = KeGetCurrentThread();
        v5 = v92;
      }
      if ( !*((_DWORD *)v5 + 37) )
      {
        v7 = -1073741300;
        goto LABEL_73;
      }
      v7 = -1073741801;
      v21 = 0LL;
      v98 = 0LL;
      v95 = 0LL;
      if ( (int)IsWin32AllocPoolImplSupported_0() >= 0 )
      {
        v22 = (DirectComposition::CCompositionFrame *)Win32AllocPoolImpl_0();
        if ( v22 )
        {
          v23 = (DirectComposition::CCompositionFrame *)DirectComposition::CCompositionFrame::CCompositionFrame(
                                                          v22,
                                                          (const struct COMPOSITION_FRAME_INFO *)&v101);
          if ( v23 )
          {
            v21 = v23;
            v98 = v23;
            v95 = v23;
            v7 = 0;
          }
        }
      }
      if ( v7 >= 0 )
      {
        *((_QWORD *)v5 + 20) = v101;
        v109 = *((_QWORD *)v21 + 8);
        v7 = 0;
        v96 = 0LL;
        v24 = v92;
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v5 + 36, 2, 0) )
        {
          v7 = -1073740024;
LABEL_105:
          v26 = v96;
          goto LABEL_31;
        }
        v25 = ExpInterlockedFlushSList((PSLIST_HEADER)v92 + 6);
        v26 = 0LL;
        if ( v25 )
        {
          do
          {
            Next = v25->Next;
            v67 = *((_QWORD *)&v25[1].Next + 1);
            if ( v67 )
            {
              p_Next = *(_QWORD **)(v67 + 24);
              *(_QWORD *)(v67 + 24) = 0LL;
              v25->Next = (struct _SLIST_ENTRY *)*((_QWORD *)&v25[1].Next + 1);
              *((_QWORD *)&v25[1].Next + 1) = 0LL;
            }
            else
            {
              p_Next = &v25->Next;
            }
            *p_Next = v26;
            v26 = v25;
            v25 = Next;
          }
          while ( Next );
        }
        v96 = v26;
        v27 = (DirectComposition::CConnection *)((char *)v24 + 136);
        v90 = (DirectComposition::CConnection *)((char *)v24 + 136);
        v28 = (_QWORD *)*((_QWORD *)v24 + 17);
        if ( v28 )
        {
          do
          {
            *(_BYTE *)(v28[1] + 49LL) = 0;
            v81 = (PSLIST_ENTRY *)v28;
            v28 = (_QWORD *)*v28;
          }
          while ( v28 );
          v104 = *(struct _SLIST_ENTRY **)v27;
          v82 = v104;
          v105 = v81;
          *(_QWORD *)v27 = 0LL;
          *v81 = v26;
          v26 = v82;
          v96 = v82;
        }
        v29 = &v96;
        if ( !v26 )
        {
          v19 = v113;
LABEL_31:
          if ( v7 < 0 )
          {
            v49 = v95;
            goto LABEL_69;
          }
          *((_QWORD *)v24 + 21) = *((_QWORD *)&v101 + 1);
          *((_QWORD *)v24 + 22) = *(_QWORD *)((char *)&v102 + 4);
          if ( v26 )
          {
            v65 = v95;
            v90 = v95;
            *((_QWORD *)v95 + 10) = v26;
            v30 = v65;
          }
          else
          {
            v30 = v95;
            v90 = v95;
          }
          if ( !v19 )
            goto LABEL_66;
          v31 = g_pTokenManager;
          if ( !g_pTokenManager )
            goto LABEL_66;
          v110 = 0;
          ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
          v32 = *((_QWORD *)v31 + 11);
          if ( v32 && (*(_QWORD *)(v32 + 2088) != v32 + 16 || *(_DWORD *)(v32 + 32)) )
          {
            *((_QWORD *)v30 + 11) = v32;
            *(_BYTE *)(v32 + 2108) = 1;
            *(_QWORD *)(v32 + 2088) = v32 + 16;
            *((_DWORD *)v30 + 24) = 1;
            *((_QWORD *)v31 + 11) = 0LL;
          }
          v33 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)v31 + 96)) - 1;
          ElementGenericTable = (struct CTokenManager::TokenQueueTableEntry *)RtlGetElementGenericTable(
                                                                                (PRTL_GENERIC_TABLE)((char *)v31 + 96),
                                                                                v33);
          if ( !ElementGenericTable )
            goto LABEL_59;
          while ( 1 )
          {
            v91 = *(_QWORD **)ElementGenericTable;
            if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v91 + 4)) >= 0 )
            {
              v35 = *((_BYTE *)v91 + 112);
              CPushLock::ReleaseLock((CPushLock *)(v91 + 4));
              if ( v35 )
                goto LABEL_49;
            }
            v37 = (_QWORD *)*((_QWORD *)ElementGenericTable + 1);
            v38 = (_QWORD *)v37[1];
            v39 = (_QWORD *)v38[1];
            if ( (_QWORD *)*v38 != v37 || (_QWORD *)*v39 != v38 )
              __fastfail(3u);
            v37[1] = v39;
            *v39 = v37;
            if ( v38 == v37 )
            {
LABEL_47:
              v40 = 0;
              goto LABEL_48;
            }
            while ( 1 )
            {
              v91 = v38 - 1;
              if ( (*(int (__fastcall **)(_QWORD *, DirectComposition::CCompositionFrame *, char *))(*(v38 - 1) + 32LL))(
                     v38 - 1,
                     v90,
                     v89) >= 0 )
                break;
              (*(void (__fastcall **)(_QWORD *))(*v91 + 56LL))(v91);
              (*(void (__fastcall **)(_QWORD *, __int64))*v91)(v91, 1LL);
LABEL_91:
              v38 = (_QWORD *)v37[1];
              v59 = (_QWORD *)v38[1];
              if ( (_QWORD *)*v38 != v37 || (_QWORD *)*v59 != v38 )
                __fastfail(3u);
              v37[1] = v59;
              *v59 = v37;
              if ( v38 == v37 )
                goto LABEL_47;
            }
            if ( v89[0] )
              break;
            v40 = *((_DWORD *)v91 + 6) == 2;
            v69 = v91 + 1;
            v70 = (_QWORD *)v37[1];
            v91[1] = v37;
            v69[1] = v70;
            if ( (_QWORD *)*v70 != v37 )
              __fastfail(3u);
            *v70 = v69;
            v37[1] = v69;
LABEL_48:
            v110 |= v40;
LABEL_49:
            if ( **((_QWORD **)ElementGenericTable + 1) == *((_QWORD *)ElementGenericTable + 1) )
            {
              v91 = *(_QWORD **)ElementGenericTable;
              v41 = 0;
              v88 = 0;
              v99 = (CPushLock *)(v91 + 4);
              v114 = CPushLock::AcquireLockShared((CPushLock *)(v91 + 4));
              if ( v114 < 0 )
                goto LABEL_137;
              v42 = 0LL;
              if ( *((_DWORD *)v91 + 26) )
              {
                v43 = v91[11];
                if ( *(_BYTE *)(v43 + 16) )
                  v42 = v43 - 16;
              }
              if ( v42 )
              {
                v41 = 1;
                v88 = 1;
              }
              CPushLock::ReleaseLock(v99);
              if ( v114 < 0 || !v41 )
LABEL_137:
                CTokenManager::RemoveTokenQueueTableEntry(v31, ElementGenericTable);
            }
            ElementGenericTable = (struct CTokenManager::TokenQueueTableEntry *)RtlGetElementGenericTable(
                                                                                  (PRTL_GENERIC_TABLE)((char *)v31 + 96),
                                                                                  --v33);
            if ( !ElementGenericTable )
            {
LABEL_59:
              v44 = 0;
              v94 = &v93;
              v93 = (__int64 *)&v93;
              v45 = (__int64 *)((char *)v31 + 168);
              v46 = (__int64 *)*((_QWORD *)v31 + 21);
              v47 = *v46;
              if ( (CTokenManager *)v46[1] != (CTokenManager *)((char *)v31 + 168) || *(__int64 **)(v47 + 8) != v46 )
                __fastfail(3u);
              *v45 = v47;
              for ( *(_QWORD *)(v47 + 8) = v45; v46 != v45; v75[1] = v45 )
              {
                v71 = (volatile signed __int32 *)(v46 - 5);
                if ( (*(int (__fastcall **)(__int64 *, DirectComposition::CCompositionFrame *, char *))(*(v46 - 1) + 32))(
                       v46 - 1,
                       v90,
                       &v87) < 0 )
                {
                  (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v71 + 4) + 56LL))((_QWORD *)v71 + 4);
                  ObfDereferenceObject((PVOID)v71);
                }
                else if ( v87 )
                {
                  v72 = v71 + 10;
                  v73 = (volatile signed __int32 *)((char *)v90 + 152);
                  v74 = (volatile signed __int32 **)*((_QWORD *)v90 + 20);
                  *((_QWORD *)v71 + 5) = (char *)v90 + 152;
                  *((_QWORD *)v71 + 6) = v74;
                  if ( *v74 != v73 )
                    __fastfail(3u);
                  *v74 = v72;
                  *((_QWORD *)v73 + 1) = v72;
                }
                else
                {
                  v76 = (__int64 ***)(v71 + 10);
                  v77 = (__int64 ***)v94;
                  *v76 = &v93;
                  v76[1] = (__int64 **)v77;
                  if ( *v77 != &v93 )
                    __fastfail(3u);
                  *v77 = (__int64 **)v76;
                  v94 = (__int64 **)v76;
                }
                v46 = (__int64 *)*v45;
                v75 = *(_QWORD **)*v45;
                if ( *(__int64 **)(*v45 + 8) != v45 || (__int64 *)v75[1] != v46 )
                  __fastfail(3u);
                *v45 = (__int64)v75;
              }
              v48 = v93;
              if ( v93 != (__int64 *)&v93 )
              {
                v78 = (__int64 *)*v93;
                if ( (__int64 **)v93[1] != &v93 || (__int64 *)v78[1] != v93 )
                  __fastfail(3u);
                v93 = (__int64 *)*v93;
                for ( v78[1] = (__int64)&v93; v48 != (__int64 *)&v93; *(_QWORD *)(v80 + 8) = &v93 )
                {
                  v79 = (__int64 **)*((_QWORD *)v31 + 22);
                  *v48 = (__int64)v45;
                  v48[1] = (__int64)v79;
                  if ( *v79 != v45 )
                    __fastfail(3u);
                  *v79 = v48;
                  *((_QWORD *)v31 + 22) = v48;
                  v48 = v93;
                  v80 = *v93;
                  if ( (__int64 **)v93[1] != &v93 || *(__int64 **)(v80 + 8) != v93 )
                    __fastfail(3u);
                  v93 = (__int64 *)*v93;
                }
                v44 = 1;
              }
              if ( !((unsigned __int8)v44 | v110) )
                ZwClearEvent(*((HANDLE *)v31 + 3));
              ZwClearEvent(*((HANDLE *)v31 + 5));
              ExReleasePushLockExclusiveEx((char *)v31 + 56, 0LL);
              v21 = v98;
LABEL_66:
              ExAcquirePushLockExclusiveEx((char *)v24 + 200, 0LL);
              *((_BYTE *)v24 + 208) = 1;
              _InterlockedIncrement((volatile signed __int32 *)v90);
              v49 = v95;
              v50 = (char *)v95 + 8;
              v51 = (_QWORD *)((char *)v92 + 184);
              v52 = *((_QWORD *)v92 + 23);
              *((_QWORD *)v95 + 1) = v52;
              *((_QWORD *)v50 + 1) = v51;
              if ( *(_QWORD **)(v52 + 8) != v51 )
                __fastfail(3u);
              *(_QWORD *)(v52 + 8) = v50;
              *v51 = v50;
              v53 = (char *)v24 + 200;
              if ( *((_BYTE *)v24 + 208) )
                ExReleasePushLockExclusiveEx(v53, 0LL);
              else
                ExReleasePushLockSharedEx(v53, 0LL);
LABEL_69:
              if ( v7 < 0 )
                DirectComposition::CCompositionFrame::Discard(v49);
              else
                v97 = *((_QWORD *)v21 + 8);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v49, 0xFFFFFFFF) == 1 )
              {
                if ( *((_DWORD *)v95 + 18) != 3 )
                  DirectComposition::CCompositionFrame::Discard(v95);
                Win32FreePool();
              }
              v5 = v92;
              goto LABEL_73;
            }
          }
          v56 = (volatile signed __int32 *)(v91 + 1);
          v57 = (volatile signed __int32 *)((char *)v90 + 136);
          v58 = (volatile signed __int32 **)*((_QWORD *)v90 + 18);
          v91[1] = (char *)v90 + 136;
          *((_QWORD *)v56 + 1) = v58;
          if ( *v58 != v57 )
            __fastfail(3u);
          *v58 = v56;
          *((_QWORD *)v57 + 1) = v56;
          goto LABEL_91;
        }
        v60 = v109;
        while ( 1 )
        {
          v61 = (PRKEVENT *)*((_QWORD *)v24 + 11);
          v62 = (_QWORD *)*((_QWORD *)v5 + 20);
          v91 = v62;
          if ( *(_BYTE *)(*((_QWORD *)&v26->Next + 1) + 49LL) )
          {
            v83 = 1;
            goto LABEL_141;
          }
          v63 = *((_QWORD *)&v26->Next + 1);
          if ( *(_BYTE *)(v63 + 185) )
            break;
          v64 = v26[4].Next;
          if ( v64 && v62 && (char *)v64 - (char *)v62 > 0 )
          {
            v111 = 2;
LABEL_140:
            KeSetEvent(*v61, 1, 0);
            v27 = v90;
            LOBYTE(v62) = (_BYTE)v91;
            v83 = v111;
            goto LABEL_141;
          }
          if ( !*((_QWORD *)&v26[2].Next + 1) || SLODWORD(v26[3].Next) <= 0 )
          {
            if ( ((__int64)v26[2].Next & 8) != 0 )
              *(_BYTE *)(v63 + 185) = 1;
            *((_QWORD *)&v26[3].Next + 1) = v60;
            v29 = &v26->Next;
            goto LABEL_103;
          }
          v83 = 3;
LABEL_141:
          if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
          {
            Template_qpqxxq(
              v83,
              v26[4].Next,
              (_DWORD)v27,
              *(_DWORD *)(*((_QWORD *)&v26->Next + 1) + 28LL),
              (char)v26,
              (char)v26[1].Next,
              (char)v26[4].Next,
              (char)v62,
              v83);
            v27 = v90;
          }
          *(_BYTE *)(*((_QWORD *)&v26->Next + 1) + 49LL) = 1;
          *((_QWORD *)&v26[3].Next + 1) = 0LL;
          *v29 = v26->Next;
          *(_QWORD *)v27 = v26;
          v27 = (DirectComposition::CCompositionFrame *)v26;
          v90 = (DirectComposition::CCompositionFrame *)v26;
          v26->Next = 0LL;
LABEL_103:
          v26 = *v29;
          if ( !*v29 )
          {
            v24 = v92;
            v21 = v98;
            v19 = v113;
            goto LABEL_105;
          }
        }
        v111 = 4;
        goto LABEL_140;
      }
LABEL_73:
      ExReleaseResourceLite(*v100);
      KeLeaveCriticalRegion();
      v86 = v7;
    }
  }
  v54 = (unsigned int)a3;
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v97;
  }
  else
  {
    v7 = -1073741811;
    v86 = -1073741811;
  }
  if ( v7 < 0 )
  {
    v54 = v97;
    if ( v97 )
      DirectComposition::CConnection::RemoveCompositionFrame(v5, v97);
  }
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      DirectComposition::CConnection::`scalar deleting destructor'(v92, v54);
    v7 = v86;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
