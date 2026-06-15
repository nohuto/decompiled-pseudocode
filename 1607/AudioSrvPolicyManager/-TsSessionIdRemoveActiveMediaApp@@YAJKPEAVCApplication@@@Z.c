/*
 * XREFs of ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001C9F0
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000BB20 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x18000ED30 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180014CA8 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180014DA4 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180010814 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18001C868 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdRemoveActiveMediaApp(DWORD SessionId, struct CApplication *a2)
{
  unsigned int v4; // edi
  int v5; // eax
  struct TSSession *v6; // rbx
  __int64 **i; // rdx
  struct TSSession *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v5 = TsSessionFromSessionId(SessionId, 0, 0LL, &v9);
  if ( v5 )
  {
    v4 = (unsigned __int16)v5 | 0x80070000;
    if ( v5 <= 0 )
      v4 = v5;
  }
  else
  {
    v6 = v9;
    for ( i = (__int64 **)*((_QWORD *)v9 + 13); i; i = (__int64 **)*i )
    {
      if ( i[2] == (__int64 *)a2 )
        goto LABEL_10;
    }
    i = 0LL;
LABEL_10:
    if ( i )
    {
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt((_QWORD *)v9 + 13, i);
      TsSessionSendAppManagerNotification(v6);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v4;
}
