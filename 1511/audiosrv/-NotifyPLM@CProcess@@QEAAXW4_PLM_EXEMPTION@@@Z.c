/*
 * XREFs of ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18002A470
 * Callers:
 *     ?NotifyPLM@CApplication@@IEAAXW4_PLM_EXEMPTION@@@Z @ 0x18001C014 (-NotifyPLM@CApplication@@IEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x18001C720 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DE10 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E948 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x18002A1CC (-Cleanup@CProcess@@QEAAJH@Z.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180037B30 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@@Z @ 0x1800A0BA8 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Category@CProcess@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180029258 (-Category@CProcess@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::NotifyPLM(__int64 a1, int a2)
{
  HRESULT Instance; // esi
  int v4; // edx
  __int64 v5; // rdi
  int v6; // ebp
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v13; // [rsp+40h] [rbp-18h]

  Instance = 0;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( *(_DWORD *)(a1 + 416) )
        return;
      if ( !*(_DWORD *)(a1 + 232) )
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            45LL,
            &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
            *(unsigned int *)(a1 + 168));
        }
        if ( !*(_QWORD *)(a1 + 240) )
        {
          Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 240));
          if ( Instance < 0 )
            goto LABEL_40;
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 240) + 32LL))(
                     *(_QWORD *)(a1 + 240),
                     *(_QWORD *)(a1 + 160),
                     1LL);
        if ( Instance < 0 )
          goto LABEL_40;
        *(_DWORD *)(a1 + 232) = 1;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 232) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        46LL,
        &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
        *(unsigned int *)(a1 + 168));
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 40LL))(*(_QWORD *)(a1 + 240));
    Instance = v10;
    if ( v10 == -2147023728 )
    {
      Instance = 0;
    }
    else if ( v10 < 0 )
    {
      goto LABEL_40;
    }
    *(_DWORD *)(a1 + 232) = 0;
  }
  v5 = *(_QWORD *)(a1 + 224);
  if ( v5 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 24);
    v13 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v6 = 4;
    if ( *(_DWORD *)(v5 + 460) )
    {
      v6 = *(_DWORD *)(v5 + 464);
    }
    else
    {
      v7 = *(_QWORD **)(v5 + 64);
      while ( v7 )
      {
        v8 = v7[2];
        v7 = (_QWORD *)*v7;
        if ( !*(_DWORD *)(v8 + 416) || *(_QWORD *)(v8 + 360) )
        {
          v9 = *(_DWORD *)(v8 + 444) ? *(_DWORD *)(v8 + 448) : *(_DWORD *)(v8 + 312);
          if ( v9 < v6 )
            v6 = CProcess::Category((unsigned int *)v8);
        }
      }
    }
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    v6 = CProcess::Category((unsigned int *)a1);
  }
  if ( v6 )
  {
    if ( !*(_DWORD *)(a1 + 236) )
      goto LABEL_16;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        48LL,
        &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
        *(unsigned int *)(a1 + 168));
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 40LL))(*(_QWORD *)(a1 + 248));
    Instance = v11;
    if ( v11 == -2147023728 )
    {
      Instance = 0;
LABEL_62:
      *(_DWORD *)(a1 + 236) = 0;
LABEL_16:
      if ( Instance >= 0 )
        return;
      goto LABEL_40;
    }
    if ( v11 >= 0 )
      goto LABEL_62;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 236) )
      goto LABEL_16;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        47LL,
        &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
        *(unsigned int *)(a1 + 168));
    }
    if ( *(_QWORD *)(a1 + 248)
      || (Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 248)),
          Instance >= 0) )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 248) + 32LL))(
                   *(_QWORD *)(a1 + 248),
                   *(_QWORD *)(a1 + 160),
                   0x80000LL);
      if ( Instance >= 0 )
      {
        *(_DWORD *)(a1 + 236) = 1;
        goto LABEL_16;
      }
    }
  }
LABEL_40:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      49LL,
      &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
      (unsigned int)Instance);
  }
}
