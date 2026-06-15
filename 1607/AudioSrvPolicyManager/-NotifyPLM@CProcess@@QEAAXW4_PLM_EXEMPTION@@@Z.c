/*
 * XREFs of ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000F450
 * Callers:
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000B9D0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000CEA0 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180011AD0 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001338C (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180014404 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000B40C (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::NotifyPLM(__int64 a1, int a2, const GUID *a3)
{
  const GUID *v4; // r9
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  UINT32 ppv; // [rsp+20h] [rbp-49h]
  HRESULT Instance; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v15; // [rsp+60h] [rbp-9h]
  __int64 v16; // [rsp+68h] [rbp-1h]
  int *v17; // [rsp+70h] [rbp+7h]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  HRESULT *p_Instance; // [rsp+80h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+1Fh]

  Instance = 0;
  v4 = 0LL;
  v5 = (unsigned int)(a2 - 1);
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
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
            0x2Du,
            &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids,
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
          v4 = (const GUID *)(unsigned int)Instance;
          if ( Instance < 0 )
            goto LABEL_47;
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const GUID *))(**(_QWORD **)(a1 + 240) + 32LL))(
                     *(_QWORD *)(a1 + 240),
                     *(_QWORD *)(a1 + 160),
                     1LL,
                     v4);
        v4 = (const GUID *)(unsigned int)Instance;
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
        0x2Eu,
        &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids,
        *(_DWORD *)(a1 + 168));
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, const GUID *, const GUID *))(**(_QWORD **)(a1 + 240) + 40LL))(
           *(_QWORD *)(a1 + 240),
           v5,
           a3,
           v4);
    v4 = (const GUID *)v6;
    if ( v6 == -2147023728 )
      v4 = 0LL;
    Instance = (int)v4;
    if ( (int)v4 < 0 )
      goto LABEL_47;
    *(_DWORD *)(a1 + 232) = 0;
  }
  v7 = *(_QWORD *)(a1 + 224);
  if ( v7 )
  {
    v8 = CApplication::Category(v7);
    v4 = (const GUID *)(unsigned int)Instance;
  }
  else if ( *(_DWORD *)(a1 + 456) )
  {
    v8 = *(_DWORD *)(a1 + 460);
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 312);
  }
  if ( v8 )
  {
    if ( *(_DWORD *)(a1 + 236) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x30u,
          &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids,
          *(_DWORD *)(a1 + 168));
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, const GUID *, const GUID *))(**(_QWORD **)(a1 + 248) + 40LL))(
             *(_QWORD *)(a1 + 248),
             v5,
             a3,
             v4);
      v4 = (const GUID *)v9;
      if ( v9 == -2147023728 )
        v4 = 0LL;
      Instance = (int)v4;
      if ( (int)v4 < 0 )
        goto LABEL_47;
      *(_DWORD *)(a1 + 236) = 0;
    }
LABEL_46:
    if ( (int)v4 >= 0 )
      return;
    goto LABEL_47;
  }
  if ( *(_DWORD *)(a1 + 236) )
    goto LABEL_46;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Fu,
      &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids,
      *(_DWORD *)(a1 + 168));
  }
  if ( *(_QWORD *)(a1 + 248)
    || (Instance = CoCreateInstance(
                     &CLSID_OSTaskCompletion,
                     0LL,
                     1u,
                     &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                     (LPVOID *)(a1 + 248)),
        v4 = (const GUID *)(unsigned int)Instance,
        Instance >= 0) )
  {
    Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const GUID *))(**(_QWORD **)(a1 + 248) + 32LL))(
                 *(_QWORD *)(a1 + 248),
                 *(_QWORD *)(a1 + 160),
                 0x80000LL,
                 v4);
    v4 = (const GUID *)(unsigned int)Instance;
    if ( Instance >= 0 )
    {
      *(_DWORD *)(a1 + 236) = 1;
      goto LABEL_46;
    }
  }
LABEL_47:
  v10 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, (int)v4);
  }
  if ( (unsigned int)dword_180034030 > 2 )
  {
    v16 = 9LL;
    v15 = "__FUNC__";
    v17 = &v13;
    p_Instance = &Instance;
    v13 = 3312;
    v18 = 4LL;
    v20 = 4LL;
    TlgWrite(v10, &unk_18002D869, a3, v4, ppv, &pData);
  }
}
