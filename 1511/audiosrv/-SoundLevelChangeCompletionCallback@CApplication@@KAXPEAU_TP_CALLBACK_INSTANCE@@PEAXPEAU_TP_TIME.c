/*
 * XREFs of ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180037B30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001C150 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18002A470 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::SoundLevelChangeCompletionCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_TIMER *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp
  TraceLoggingHProvider v6; // rcx
  __int64 *Next; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v9; // [rsp+30h] [rbp-28h]
  _QWORD *v10; // [rsp+68h] [rbp+10h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 128));
  *((_DWORD *)a2 + 44) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 128));
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 184));
  if ( !*((_DWORD *)a2 + 56) )
  {
    *((_DWORD *)a2 + 56) = 1;
    while ( 1 )
    {
      v4 = *((_DWORD *)a2 + 57);
      if ( v4 == *((_DWORD *)a2 + 58) && !*((_DWORD *)a2 + 129) )
        break;
      *((_DWORD *)a2 + 58) = v4;
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 184));
      CApplication::SendSoundLevelNotification((__int64)a2, v4);
      EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 184));
      *((_DWORD *)a2 + 129) = 0;
    }
    *((_DWORD *)a2 + 56) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 184));
  EnterCriticalSection((LPCRITICAL_SECTION)a2 + 6);
  if ( !*((_DWORD *)a2 + 70) )
  {
    *((_DWORD *)a2 + 70) = 1;
    while ( *((_DWORD *)a2 + 71) )
    {
      v5 = *((_DWORD *)a2 + 71);
      *((_DWORD *)a2 + 71) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 6);
      lpCriticalSection = (LPCRITICAL_SECTION)(a2 + 24);
      v9 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      v6 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids, v5);
      }
      v10 = (_QWORD *)*((_QWORD *)a2 + 8);
      while ( v10 )
      {
        Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v6, &v10);
        CProcess::NotifyPLM(*Next, v5);
      }
      if ( v9 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v9 = 0;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)a2 + 6);
    }
    *((_DWORD *)a2 + 70) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 6);
}
