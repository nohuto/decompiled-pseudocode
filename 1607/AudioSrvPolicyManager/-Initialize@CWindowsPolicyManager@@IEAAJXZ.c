/*
 * XREFs of ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x18000414C
 * Callers:
 *     ?Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z @ 0x180004084 (-Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??0CDuckingManager@@AEAA@XZ @ 0x180005804 (--0CDuckingManager@@AEAA@XZ.c)
 *     ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x180011910 (-CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x180017C30 (-CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z @ 0x180019BB4 (-CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18001E7AC (-TS_ServiceStart@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180024558 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::Initialize(struct CStreamClassPolicyManager **this)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rbx
  signed int Instance; // edi
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax
  struct CApplicationManager *v7; // rbx
  signed int v8; // eax
  signed int v9; // eax
  HANDLE v10; // rax
  CDuckingManager *v11; // rax
  CDuckingManager *v12; // rax
  __int64 v13; // rax
  CApplicationManager *v14; // rax
  struct CApplicationManager *v15; // rbx
  struct CApplicationManager *v17[4]; // [rsp+30h] [rbp-A8h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+50h] [rbp-88h] BYREF

  v17[2] = (struct CApplicationManager *)-2LL;
  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x60uLL);
  if ( v3 )
  {
    *v3 = &CAudioThreadPool::`vftable';
    v3[10] = 0LL;
    *((_DWORD *)v3 + 2) = 3;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    *((_DWORD *)v3 + 16) = 0;
    *((_DWORD *)v3 + 17) = 1;
    *((_DWORD *)v3 + 18) = 72;
  }
  else
  {
    v3 = 0LL;
  }
  ThreadPool = (struct CAudioThreadPool *)v3;
  if ( v3 )
  {
    Instance = 0;
    ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
    v3[10] = ThreadpoolCleanupGroup;
    if ( ThreadpoolCleanupGroup )
    {
      v3[3] = ThreadpoolCleanupGroup;
      v3[4] = 0LL;
    }
    else
    {
      LastError = GetLastError();
      Instance = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        Instance = LastError;
    }
    if ( Instance < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_c263fbaf975a31de094c23c085935f81_Traceguids, Instance);
    }
  }
  else
  {
    Instance = -2147024882;
  }
  v7 = 0LL;
  v17[0] = 0LL;
  if ( Instance >= 0 )
  {
    g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
    if ( !g_WorkerEventPort )
    {
      v8 = GetLastError();
      Instance = (unsigned __int16)v8 | 0x80070000;
      if ( v8 <= 0 )
        Instance = v8;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_cc260ea604cc33204d9fadc8e89a5303_Traceguids, Instance);
      }
    }
    if ( Instance >= 0 )
    {
      g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)EventWorkerThread, 0LL, 0, 0LL);
      if ( !g_EventWorkerThreadHandle )
      {
        v9 = GetLastError();
        Instance = (unsigned __int16)v9 | 0x80070000;
        if ( v9 <= 0 )
          Instance = v9;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xDu,
            &WPP_cc260ea604cc33204d9fadc8e89a5303_Traceguids,
            Instance);
        }
      }
      if ( Instance >= 0 )
      {
        TS_ServiceStart();
        Instance = CApplicationManager::CreateInstance(v17);
        if ( Instance < 0 )
          goto LABEL_41;
        Instance = CStreamClassPolicyManager::CreateInstance(this + 5);
        if ( Instance < 0 )
          goto LABEL_41;
        Instance = CPlaybackManager::CreateInstance(this + 4);
        if ( Instance < 0 )
          goto LABEL_41;
        v10 = GetProcessHeap();
        v11 = (CDuckingManager *)HeapAlloc(v10, 0, 0x140uLL);
        v12 = v11 ? CDuckingManager::CDuckingManager(v11) : 0LL;
        this[6] = v12;
        v13 = -(__int64)v12;
        Instance = v13 == 0 ? 0x8007000E : 0;
        if ( v13 )
        {
          v14 = v17[0];
          v7 = 0LL;
          v17[0] = 0LL;
          g_ApplicationManager = v14;
          g_PlaybackManager = this[4];
          g_StreamClassPolicyManager = this[5];
        }
        else
        {
LABEL_41:
          v7 = v17[0];
        }
      }
    }
  }
  memset_0(&spc, 0, sizeof(spc));
  if ( !GetPwrCapabilities(&spc) || (g_bIsAoAcSystem = 1, !spc.spare2[2]) )
    g_bIsAoAcSystem = 0;
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
  {
    v15 = v17[0];
    (*(void (__fastcall **)(struct CApplicationManager *))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
    (*(void (__fastcall **)(struct CApplicationManager *, __int64))(*(_QWORD *)v15 + 8LL))(v15, 1LL);
  }
  return (unsigned int)Instance;
}
