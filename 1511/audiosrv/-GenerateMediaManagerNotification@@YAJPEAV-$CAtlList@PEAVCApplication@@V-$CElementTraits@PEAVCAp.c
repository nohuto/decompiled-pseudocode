/*
 * XREFs of ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x180002D80
 * Callers:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180002CC0 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800862E4 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x18009C9F8 (-SetNotificationData@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@A.c)
 */

__int64 __fastcall GenerateMediaManagerNotification(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rsi
  _QWORD *v3; // rdi
  int v4; // ebx
  unsigned __int64 v5; // rbp
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  __int64 Next; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v14 = *a1;
  v4 = 0;
  v5 = 0LL;
  v7 = a1;
  if ( v14 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(a1, &v14);
      v4 = StringCbLengthW(*(const unsigned __int16 **)(*(_QWORD *)Next + 16LL), 0x800uLL, &v13);
      if ( v4 < 0 )
        break;
      v11 = v5 + v13 + 2;
      if ( v11 < v5 )
        goto LABEL_20;
      v12 = v11 + 4;
      if ( v11 + 4 < v11 )
        goto LABEL_20;
      a1 = (_QWORD *)(v11 + 8);
      if ( v12 + 4 < v12 )
        goto LABEL_20;
      v5 = v12 + 8;
      if ( v12 + 8 < v12 + 4 )
        goto LABEL_20;
      v4 = 0;
      if ( !v14 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v2 = v5;
  }
  if ( v4 >= 0 )
  {
    v8 = operator new(v2 + 42);
    v3 = v8;
    if ( !v8 )
    {
      v4 = -2147024882;
      goto LABEL_7;
    }
    memset_0(v8, 0, v2 + 42);
    v3[1] = 0LL;
    *((_DWORD *)v3 + 6) = 0;
    *(_DWORD *)v3 = v2 + 42;
    *((_DWORD *)v3 + 1) = 0x10000;
    if ( !v2 )
      goto LABEL_6;
    v4 = SetNotificationData(v7, v3 + 4, v2);
    if ( v4 < 0 )
      goto LABEL_7;
    if ( v2 <= 0xFFFFFFFF )
    {
      *((_DWORD *)v3 + 7) = v2;
      v4 = 0;
LABEL_6:
      *a2 = v3;
      v3 = 0LL;
      goto LABEL_7;
    }
    *((_DWORD *)v3 + 7) = -1;
LABEL_20:
    v4 = -2147024362;
  }
LABEL_7:
  operator delete(v3);
  return (unsigned int)v4;
}
