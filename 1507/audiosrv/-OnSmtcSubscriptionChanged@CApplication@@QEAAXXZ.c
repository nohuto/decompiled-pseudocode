/*
 * XREFs of ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180002F3C
 * Callers:
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXH@Z @ 0x180003930 (-SetHasSmtcSubscription@CProcess@@UEAAXH@Z.c)
 * Callees:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180002EBC (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180007890 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18001282C (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHXZ @ 0x180013450 (-HasSmtcSubscription@CApplication@@QEAAHXZ.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001BD74 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

void __fastcall CApplication::OnSmtcSubscriptionChanged(CApplication *this, __int64 a2, bool a3)
{
  CApplication::ApplySmtcRelatedPolicy(this, a2, a3);
  if ( (unsigned int)CApplication::HasSmtcSubscription(this) )
  {
    if ( *((_DWORD *)this + 28) || (unsigned int)CApplication::IsBackgroundAudioCapable(this) )
      CApplicationManager::UpdateActiveMediaAppForSession(g_ApplicationManager, this, 0);
  }
  else
  {
    TsSessionIdRemoveActiveMediaApp(*((_DWORD *)this + 29), this);
  }
}
