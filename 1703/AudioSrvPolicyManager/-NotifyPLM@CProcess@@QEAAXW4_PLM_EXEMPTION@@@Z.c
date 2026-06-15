/*
 * XREFs of ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000EC6C
 * Callers:
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000B58C (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000C7B0 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180010FB0 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180012180 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180012CCC (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000AFD8 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::NotifyPLM(__int64 a1, int a2)
{
  int v3; // edx
  HRESULT Instance; // edi
  __int64 v5; // rcx
  int v6; // eax

  v3 = a2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( *(_DWORD *)(a1 + 416) )
        return;
      if ( !*(_DWORD *)(a1 + 232) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x2Eu,
            &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids,
            *(_DWORD *)(a1 + 168));
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
            goto LABEL_47;
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 240) + 32LL))(
                     *(_QWORD *)(a1 + 240),
                     *(_QWORD *)(a1 + 160),
                     1LL);
        if ( Instance < 0 )
          goto LABEL_47;
        *(_DWORD *)(a1 + 232) = 1;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 232) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids,
        *(_DWORD *)(a1 + 168));
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 40LL))(*(_QWORD *)(a1 + 240));
    if ( Instance == -2147023728 )
      Instance = 0;
    if ( Instance < 0 )
      goto LABEL_47;
    *(_DWORD *)(a1 + 232) = 0;
  }
  v5 = *(_QWORD *)(a1 + 224);
  if ( v5 )
  {
    v6 = CApplication::Category(v5);
  }
  else if ( *(_DWORD *)(a1 + 456) )
  {
    v6 = *(_DWORD *)(a1 + 460);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 312);
  }
  if ( v6 )
  {
    if ( !*(_DWORD *)(a1 + 236) )
      return;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x31u,
        &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids,
        *(_DWORD *)(a1 + 168));
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
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x30u,
        &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids,
        *(_DWORD *)(a1 + 168));
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
LABEL_47:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, Instance);
  }
  AudPolicyLogError("CProcess::NotifyPLM", 3433, Instance);
}
