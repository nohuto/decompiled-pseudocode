/*
 * XREFs of ?GetNotificationDataSize@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEA_K@Z @ 0x1800041E0
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x180004110 (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x180004284 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall GetNotificationDataSize(_QWORD **a1, unsigned __int64 *a2)
{
  int v2; // r8d
  unsigned __int64 v3; // rbx
  _QWORD *Next; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0LL;
  v10 = *a1;
  if ( v10 )
  {
    while ( 1 )
    {
      v9 = 0LL;
      Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)a1, &v10);
      v2 = StringCbLengthW(*(const unsigned __int16 **)(*Next + 16LL), 0x800uLL, &v9);
      if ( v2 < 0 )
        break;
      v7 = v3 + v9 + 2;
      if ( v7 < v3 )
        return (unsigned int)-2147024362;
      v8 = v7 + 4;
      if ( v7 + 4 < v7 )
        return (unsigned int)-2147024362;
      a1 = (_QWORD **)(v7 + 8);
      if ( v8 + 4 < v8 )
        return (unsigned int)-2147024362;
      v3 = v8 + 8;
      if ( v8 + 8 < v8 + 4 )
        return (unsigned int)-2147024362;
      v2 = 0;
      if ( !v10 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    *a2 = v3;
  }
  return (unsigned int)v2;
}
