/*
 * XREFs of ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x18000ED30
 * Callers:
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x1800121F8 (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000BB20 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D018 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000D1A0 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180014DA4 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001C9F0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 */

void __fastcall CProcess::SetHasSmtcSubscription(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v6; // r8d
  int v7; // eax
  CApplication *v8; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  v3 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)v3 <= 1 )
  {
    v6 = *(_DWORD *)(a1 + 4 * v3 + 456);
    if ( v6 || a3 )
    {
      v7 = v6 + (a3 != 0 ? 1 : -1);
      *(_DWORD *)(a1 + 4 * v3 + 456) = v7;
      if ( !v7 || v7 == 1 && a3 )
      {
        v8 = *(CApplication **)(a1 + 208);
        CApplication::ApplySmtcRelatedPolicy(v8);
        if ( (unsigned int)CApplication::HasSmtcSubscription((__int64)v8, 0) )
        {
          if ( *((_DWORD *)v8 + 28) )
          {
LABEL_13:
            CApplicationManager::UpdateActiveMediaAppForSession(g_ApplicationManager, v8, 0);
            goto LABEL_15;
          }
          if ( (unsigned int)CApplication::HasSmtcSubscription((__int64)v8, 1) )
          {
            if ( !*((_DWORD *)v8 + 28)
              && (!(unsigned int)CApplication::IsBackgroundAudioCapable(v8)
               || !(unsigned int)CApplication::HasSmtcSubscription((__int64)v8, 1)) )
            {
              goto LABEL_15;
            }
            goto LABEL_13;
          }
        }
        TsSessionIdRemoveActiveMediaApp(*((_DWORD *)v8 + 29), v8);
      }
    }
  }
LABEL_15:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
