/*
 * XREFs of ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x18000B130
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180012B40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180005B4C (WPP_SF_.c)
 *     WPP_SF_SS @ 0x18000A4B4 (WPP_SF_SS.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000AE78 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000B3D8 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000B58C (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x18000F43C (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001095C (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800128D4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplication::ExecutePBMActions(__int64 a1, int a2, unsigned int a3, int a4, int a5)
{
  unsigned int i; // ebp
  BOOL v10; // edi
  __int64 v11; // rdx
  BOOL v12; // esi
  const wchar_t *v13; // rax
  __int64 v14; // r10
  int v15; // esi
  _QWORD *v16; // rdi
  CProcess *v17; // rcx
  __int64 v18; // rdx
  _DWORD v19[10]; // [rsp+30h] [rbp-28h] BYREF

  for ( i = a5; i; i >>= 3 )
  {
    v10 = 0;
    switch ( i & 7 )
    {
      case 1u:
        v11 = *(unsigned int *)(a1 + 176);
        *(_DWORD *)(a1 + 176) = a3;
        v12 = ((_DWORD)v11 == 0) != (a3 == 0);
        LOBYTE(v10) = (_DWORD)v11 != a3;
        if ( (_DWORD)v11 != a3
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v13 = (const wchar_t *)SoundLevelToString(a3, v11, &WPP_GLOBAL_Control);
          WPP_SF_SS(
            *(_QWORD *)(v14 + 16),
            0xDu,
            &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids,
            *(const wchar_t **)(a1 + 24),
            v13);
        }
        if ( v10 )
        {
          if ( v12 )
          {
            a5 = 0;
            v15 = 0;
            v16 = *(_QWORD **)(a1 + 72);
            if ( v16 )
            {
              do
              {
                v17 = (CProcess *)v16[2];
                v16 = (_QWORD *)*v16;
                if ( !*((_DWORD *)v17 + 104) )
                {
                  CProcess::SimulateStreamStateChange(v17, a3 != 0, &a5);
                  v15 |= a5;
                }
              }
              while ( v16 );
              if ( v15 )
                CApplicationManager::UpdateVolumeForAllAppsInSession(
                  g_ApplicationManager,
                  *(unsigned int *)(a1 + 172),
                  3LL);
            }
          }
          CApplication::RecalculateVolume(a1, 3u);
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
          *(_DWORD *)(a1 + 232) = 1;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids);
          }
          v19[1] = -1;
          v18 = *(_QWORD *)(a1 + 224);
          v19[0] = -4400000;
          (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _DWORD *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                               + 24LL))(
            ThreadPool,
            v18,
            v19,
            0LL,
            0);
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
        }
        break;
      case 2u:
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
        *(_DWORD *)(a1 + 284) = a2;
        if ( a2 < *(_DWORD *)(a1 + 288) )
          v10 = *(_DWORD *)(a1 + 232) != 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
        if ( !v10 )
          CApplication::ProcessPendingSoundLevelNotification((CApplication *)a1);
        break;
      case 3u:
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 296));
        *(_DWORD *)(a1 + 340) = a4;
        if ( a4 == 1 )
          v10 = *(_DWORD *)(a1 + 232) != 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 296));
        if ( !v10 )
          CApplication::ProcessPendingPLMExemptionChange((CApplication *)a1);
        break;
      case 4u:
        Sleep(0xAu);
        break;
    }
  }
}
