/*
 * XREFs of ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180012458
 * Callers:
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x1800120D0 (-Cleanup@CProcess@@QEAAJH@Z.c)
 *     ?NotifyPLM@CApplication@@IEAAXW4_PLM_EXEMPTION@@@Z @ 0x1800128B4 (-NotifyPLM@CApplication@@IEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x180012E90 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C168 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@@Z @ 0x1800A38CC (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@.c)
 * Callees:
 *     ?Category@CProcess@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180011498 (-Category@CProcess@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::NotifyPLM(__int64 a1, int a2)
{
  int v3; // edx
  __int64 v4; // rdi
  int v5; // ebp
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  HRESULT Instance; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v11; // [rsp+40h] [rbp-28h]

  v3 = a2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( *(_DWORD *)(a1 + 416) )
        return;
      if ( !*(_DWORD *)(a1 + 232) )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            43LL,
            &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
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
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        44LL,
        &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
        *(unsigned int *)(a1 + 168));
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 40LL))(*(_QWORD *)(a1 + 240));
    if ( Instance == -2147023728 )
      Instance = 0;
    if ( Instance < 0 )
      goto LABEL_40;
    *(_DWORD *)(a1 + 232) = 0;
  }
  v4 = *(_QWORD *)(a1 + 224);
  if ( v4 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 24);
    v11 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v5 = 4;
    if ( *(_DWORD *)(v4 + 460) )
    {
      v5 = *(_DWORD *)(v4 + 464);
    }
    else
    {
      v6 = *(_QWORD **)(v4 + 64);
      while ( v6 )
      {
        v7 = v6[2];
        v6 = (_QWORD *)*v6;
        if ( !*(_DWORD *)(v7 + 416) || *(_QWORD *)(v7 + 360) )
        {
          if ( *(_DWORD *)(v7 + 444) )
            v8 = *(_DWORD *)(v7 + 448);
          else
            v8 = *(_DWORD *)(v7 + 312);
          if ( v8 < v5 )
            v5 = CProcess::Category((unsigned int *)v7);
        }
      }
    }
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    v5 = CProcess::Category((unsigned int *)a1);
  }
  if ( v5 )
  {
    if ( !*(_DWORD *)(a1 + 236) )
      return;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        46LL,
        &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
        *(unsigned int *)(a1 + 168));
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 40LL))(*(_QWORD *)(a1 + 248));
    if ( Instance == -2147023728 )
      Instance = 0;
    if ( Instance >= 0 )
    {
      *(_DWORD *)(a1 + 236) = 0;
      return;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 236) )
      return;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        45LL,
        &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
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
        return;
      }
    }
  }
LABEL_40:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      47LL,
      &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
      (unsigned int)Instance);
  }
}
