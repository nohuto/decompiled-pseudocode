/*
 * XREFs of ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x180012E90
 * Callers:
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x18001C2F0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001C568 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180006DA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180011344 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x180012330 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180012458 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800129EC (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001C754 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SS @ 0x18007E86C (WPP_SF_SS.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800A2090 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::ExecutePBMActions(__int64 a1, int a2, unsigned int a3, int a4, int a5)
{
  int v5; // r13d
  int v6; // r15d
  unsigned int v8; // edi
  BOOL v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // esi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  BOOL v15; // esi
  int v16; // r14d
  __int64 v17; // rcx
  struct _TP_TIMER *v18; // r12
  void (__fastcall *v19)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD); // r15
  __int64 *v20; // rax
  __int64 *Next; // rax
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r10
  struct _FILETIME v25; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v26[2]; // [rsp+38h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-28h] BYREF
  char v28; // [rsp+50h] [rbp-20h]
  LPCRITICAL_SECTION v29; // [rsp+58h] [rbp-18h] BYREF
  char v30; // [rsp+60h] [rbp-10h]
  unsigned int v32; // [rsp+C0h] [rbp+50h]

  v32 = a3;
  v26[1] = (_QWORD *)-2LL;
  v5 = a4;
  v6 = a2;
  v8 = a5;
  if ( a5 )
  {
    do
    {
      v9 = 0;
      switch ( v8 & 7 )
      {
        case 1u:
          v13 = *(_DWORD *)(a1 + 120);
          v14 = v13 == 0;
          LOBYTE(v9) = (_DWORD)v14 != (a3 == 0);
          *(_DWORD *)(a1 + 120) = a3;
          if ( v13 == a3 )
            goto LABEL_13;
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            v23 = SoundLevelToString(a3);
            WPP_SF_SS(
              *(_QWORD *)(v24 + 16),
              13,
              (unsigned int)&WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
              *(_QWORD *)(a1 + 16),
              v23);
            a3 = v32;
          }
          if ( v9 )
          {
            v15 = a3 != 0;
            a5 = 0;
            v16 = 0;
            v26[0] = *(_QWORD **)(a1 + 64);
            if ( v26[0] )
            {
              do
              {
                Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v14, v26);
                v14 = *Next;
                if ( !*(_DWORD *)(*Next + 416) )
                {
                  CProcess::SimulateStreamStateChange((CProcess *)v14, v15, &a5);
                  v16 |= a5;
                }
              }
              while ( v26[0] );
              if ( v16 )
                CApplicationManager::UpdateVolumeForAllAppsInSession(
                  g_ApplicationManager,
                  *(unsigned int *)(a1 + 116),
                  3LL);
            }
          }
          v29 = (LPCRITICAL_SECTION)(a1 + 24);
          v30 = 0;
          ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v29);
          v26[0] = *(_QWORD **)(a1 + 64);
          while ( v26[0] )
          {
            v22 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v17, v26);
            v17 = *v22;
            if ( !*(_DWORD *)(*v22 + 416) )
              CProcess::RecalculateVolume(v17, 3u);
          }
          if ( v30 )
          {
            LeaveCriticalSection(v29);
            v30 = 0;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
          *(_DWORD *)(a1 + 176) = 1;
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x15u,
              (__int64)&WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids);
          }
          v25 = (struct _FILETIME)-4400000LL;
          v18 = *(struct _TP_TIMER **)(a1 + 168);
          v19 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD))(*(_QWORD *)ThreadPool + 24LL);
          if ( v19 == CAudioThreadPool::SetTimer )
            CAudioThreadPool::SetTimer(ThreadPool, v18, &v25, 0, 0);
          else
            v19(ThreadPool, v18, &v25, 0LL, 0);
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
          break;
        case 2u:
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
          *(_DWORD *)(a1 + 228) = v6;
          if ( v6 < *(_DWORD *)(a1 + 232) )
            v9 = *(_DWORD *)(a1 + 176) != 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
          if ( !v9 )
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
            if ( *(_DWORD *)(a1 + 224) )
            {
              LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
            }
            else
            {
              *(_DWORD *)(a1 + 224) = 1;
              while ( 1 )
              {
                v10 = *(_DWORD *)(a1 + 228);
                if ( v10 == *(_DWORD *)(a1 + 232) && !*(_DWORD *)(a1 + 516) )
                  break;
                *(_DWORD *)(a1 + 232) = v10;
                LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
                CApplication::SendSoundLevelNotification(a1, v10);
                EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
                *(_DWORD *)(a1 + 516) = 0;
              }
              *(_DWORD *)(a1 + 224) = 0;
              LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
            }
          }
          break;
        case 3u:
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
          *(_DWORD *)(a1 + 284) = v5;
          if ( v5 == 1 )
            v9 = *(_DWORD *)(a1 + 176) != 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
          if ( !v9 )
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
            if ( *(_DWORD *)(a1 + 280) )
            {
              LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
            }
            else
            {
              *(_DWORD *)(a1 + 280) = 1;
              if ( *(_DWORD *)(a1 + 284) )
              {
                do
                {
                  v11 = *(_DWORD *)(a1 + 284);
                  *(_DWORD *)(a1 + 284) = 0;
                  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
                  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 24);
                  v28 = 0;
                  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
                  v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
                  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
                    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
                  {
                    WPP_SF_D(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                      16LL,
                      &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
                      v11);
                  }
                  v26[0] = *(_QWORD **)(a1 + 64);
                  while ( v26[0] )
                  {
                    v20 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v12, v26);
                    CProcess::NotifyPLM(*v20, v11);
                  }
                  if ( v28 )
                  {
                    LeaveCriticalSection(lpCriticalSection);
                    v28 = 0;
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
                }
                while ( *(_DWORD *)(a1 + 284) );
                v5 = a4;
              }
              *(_DWORD *)(a1 + 280) = 0;
              LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
            }
          }
          break;
        case 4u:
          Sleep(0xAu);
          break;
        default:
          goto LABEL_13;
      }
      a3 = v32;
LABEL_13:
      v8 >>= 3;
      v6 = a2;
    }
    while ( v8 );
  }
}
