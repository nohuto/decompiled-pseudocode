/*
 * XREFs of ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x180003EF0
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x180004110 (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x180004284 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18001282C (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 */

__int64 __fastcall SetNotificationData(_QWORD **a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // ebx
  size_t v4; // rdi
  _QWORD *Next; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  size_t v10; // r8
  size_t v11; // r12
  bool v12; // r8
  __int64 v13; // rcx
  CUnknown *v14; // rdi
  __int64 *v15; // rax
  int IsBackgroundAudioCapable; // eax
  bool v17; // zf
  _QWORD *v19; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v20[24]; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  _QWORD *v22; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  v4 = 0LL;
  v19 = *a1;
  if ( v19 )
  {
    do
    {
      v21 = 0LL;
      Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)a1, &v19);
      v8 = *Next;
      v3 = StringCbLengthW(*(const unsigned __int16 **)(*Next + 16LL), 0x800uLL, &v21);
      if ( v3 < 0 )
        break;
      v9 = v4 + 4;
      v10 = v21 + 2;
      v21 += 2LL;
      if ( v4 + 4 > a3 )
        return (unsigned int)-2147024774;
      v11 = v10 + v9;
      *(_DWORD *)(v4 + a2) = v10;
      if ( v10 + v9 > a3 )
        return (unsigned int)-2147024774;
      memcpy_0((void *)(v9 + a2), *(const void **)(v8 + 16), v10);
      if ( v11 + 4 > a3 )
        return (unsigned int)-2147024774;
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v20, (struct _RTL_CRITICAL_SECTION *)(v8 + 24), v12);
      v14 = 0LL;
      v22 = *(_QWORD **)(v8 + 64);
      if ( v22 )
      {
        while ( 1 )
        {
          v15 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v13, &v22);
          v13 = *v15;
          if ( !*(_DWORD *)(*v15 + 416) )
          {
            if ( *(_DWORD *)(v13 + 464) )
              break;
          }
          if ( !v22 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v14 = (CUnknown *)v13;
      }
LABEL_10:
      if ( v20[8] )
        ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v20);
      if ( !v14 )
        return (unsigned int)-2147418113;
      *(_DWORD *)(v11 + a2) = *((_DWORD *)v14 + 42);
      CUnknown::Release(v14);
      v4 = v11 + 8;
      if ( v11 + 8 > a3 )
        return (unsigned int)-2147024774;
      IsBackgroundAudioCapable = CApplication::IsBackgroundAudioCapable((CApplication *)v8);
      v17 = v19 == 0LL;
      *(_DWORD *)(v11 + 4 + a2) = IsBackgroundAudioCapable;
    }
    while ( !v17 );
  }
  return (unsigned int)v3;
}
