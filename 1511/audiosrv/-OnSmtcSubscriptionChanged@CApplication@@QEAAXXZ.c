/*
 * XREFs of ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x1800A0868
 * Callers:
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x1800A0C90 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z.c)
 * Callees:
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18001BF8C (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180065C1C (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18009D44C (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18009FBE8 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 */

void __fastcall CApplication::OnSmtcSubscriptionChanged(DWORD *this)
{
  CApplication::ApplySmtcRelatedPolicy((CApplication *)this);
  if ( !(unsigned int)CApplication::HasSmtcSubscription((__int64)this, 0) )
    goto LABEL_8;
  if ( this[28] )
  {
LABEL_7:
    CApplicationManager::UpdateActiveMediaAppForSession(g_ApplicationManager, (struct CApplication *)this, 0);
    return;
  }
  if ( (unsigned int)CApplication::HasSmtcSubscription((__int64)this, 1) )
  {
    if ( this[28]
      || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)this)
      && (unsigned int)CApplication::HasSmtcSubscription((__int64)this, 1) )
    {
      goto LABEL_7;
    }
  }
  else
  {
LABEL_8:
    TsSessionIdRemoveActiveMediaApp(this[29], (struct CApplication *)this);
  }
}
