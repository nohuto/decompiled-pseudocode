/*
 * XREFs of ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18009D44C
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180004108 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180065CA8 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18009FBE8 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x1800A0868 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180002CC0 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?Find@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCApplication@@PEAU3@@Z @ 0x180038E54 (-Find@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEBAPEAU__POS.c)
 *     ?RemoveAt@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18009C778 (-RemoveAt@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 */

__int64 __fastcall TsSessionIdRemoveActiveMediaApp(DWORD a1, struct CApplication *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  struct TSSession *v5; // rbx
  _QWORD *v6; // rax
  struct CApplication *v8; // [rsp+38h] [rbp+10h] BYREF
  struct TSSession *v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = a2;
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v4 = TsSessionFromSessionId(a1, 0, 0LL, &v9);
  if ( v4 )
  {
    if ( v4 > 0 )
      v3 = (unsigned __int16)v4 | 0x80070000;
    else
      v3 = v4;
  }
  else
  {
    v5 = v9;
    v6 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::Find((_QWORD *)v9 + 13, &v8);
    if ( v6 )
    {
      ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt((_QWORD *)v5 + 13, v6);
      TsSessionSendAppManagerNotification(v5);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v3;
}
