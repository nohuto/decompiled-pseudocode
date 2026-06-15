/*
 * XREFs of ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000B818
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x18000B570 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000C240 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_SSd @ 0x180005404 (WPP_SF_SSd.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     Template_zq @ 0x18000A6B8 (Template_zq.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000F90C (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 */

void __fastcall CApplication::ProcessPendingSoundLevelNotification(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // r14d
  __int64 v4; // rdx
  _UNKNOWN **v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // [rsp+28h] [rbp-30h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+38h] [rbp-20h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  if ( !*((_DWORD *)this + 56) )
  {
    *((_DWORD *)this + 56) = 1;
    while ( 1 )
    {
      v3 = *((_DWORD *)this + 57);
      if ( v3 == *((_DWORD *)this + 58) && !*((_DWORD *)this + 129) )
        break;
      *((_DWORD *)this + 58) = v3;
      LeaveCriticalSection(v1);
      v10 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v3);
        v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      v6 = (_QWORD *)*((_QWORD *)this + 8);
      while ( v6 )
      {
        v7 = v6[2];
        v6 = (_QWORD *)*v6;
        if ( (*(_BYTE *)(v7 + 440) & 1) != 0 && !*(_DWORD *)(v7 + 416) )
        {
          if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
          {
            LODWORD(v8) = *(_DWORD *)(v7 + 168);
            WPP_SF_SSd(
              (TRACEHANDLE)v5[2],
              0xFu,
              &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids,
              L"SoundLevelChanged",
              *((const wchar_t **)this + 2),
              v8);
          }
          if ( Microsoft_Windows_AudioEnableBits < 0 )
            Template_zq((__int64)v5, v4, *((const wchar_t **)this + 2), v3);
          CProcess::SendPBMNotification(v7, 0LL);
          v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
        }
      }
      if ( v10 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v10 = 0;
      }
      EnterCriticalSection(v1);
      *((_DWORD *)this + 129) = 0;
    }
    *((_DWORD *)this + 56) = 0;
  }
  LeaveCriticalSection(v1);
}
