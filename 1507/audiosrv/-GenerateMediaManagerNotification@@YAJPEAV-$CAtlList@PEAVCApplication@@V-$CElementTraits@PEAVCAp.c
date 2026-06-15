/*
 * XREFs of ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x180004110
 * Callers:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180004050 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x180003EF0 (-SetNotificationData@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@A.c)
 *     ?GetNotificationDataSize@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEA_K@Z @ 0x1800041E0 (-GetNotificationDataSize@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 */

__int64 __fastcall GenerateMediaManagerNotification(_QWORD **a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  int NotificationDataSize; // edi
  unsigned __int64 v6; // rsi
  size_t v7; // rbp
  _QWORD *v8; // rax
  unsigned __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = 0LL;
  NotificationDataSize = GetNotificationDataSize(a1, &v10);
  if ( NotificationDataSize >= 0 )
  {
    v6 = v10;
    v7 = v10 + 42;
    v8 = operator new(v10 + 42);
    v4 = v8;
    if ( !v8 )
    {
      NotificationDataSize = -2147024882;
      goto LABEL_5;
    }
    memset_0(v8, 0, v7);
    v4[1] = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    *(_DWORD *)v4 = v7;
    *((_DWORD *)v4 + 1) = 0x10000;
    if ( v6 )
    {
      NotificationDataSize = SetNotificationData(a1, (__int64)(v4 + 4), v6);
      if ( NotificationDataSize < 0 )
        goto LABEL_5;
      if ( v6 > 0xFFFFFFFF )
      {
        *((_DWORD *)v4 + 7) = -1;
        NotificationDataSize = -2147024362;
        goto LABEL_5;
      }
      *((_DWORD *)v4 + 7) = v6;
      NotificationDataSize = 0;
    }
    *a2 = v4;
    v4 = 0LL;
  }
LABEL_5:
  operator delete(v4);
  return (unsigned int)NotificationDataSize;
}
