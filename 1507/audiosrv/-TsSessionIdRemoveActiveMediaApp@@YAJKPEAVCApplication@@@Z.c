/*
 * XREFs of ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180007890
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180002868 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180002EBC (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180002F3C (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001BD74 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180004050 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800042EC (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?Find@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCApplication@@PEAU3@@Z @ 0x18000792C (-Find@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEBAPEAU__POS.c)
 */

__int64 __fastcall TsSessionIdRemoveActiveMediaApp(int a1, struct CApplication *a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // rax
  struct TSSession *v5; // rdi
  _QWORD *v6; // rax
  struct CApplication *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v4 = qword_1800E88D0;
  do
  {
    if ( !v4 )
    {
      v3 = -2147023728;
      goto LABEL_6;
    }
    v5 = (struct TSSession *)v4[2];
    v4 = (_QWORD *)*v4;
  }
  while ( a1 != *(_DWORD *)v5 );
  v6 = (_QWORD *)ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::Find((char *)v5 + 104, &v8);
  if ( v6 )
  {
    ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt((_QWORD *)v5 + 13, v6);
    TsSessionSendAppManagerNotification(v5);
  }
LABEL_6:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v3;
}
