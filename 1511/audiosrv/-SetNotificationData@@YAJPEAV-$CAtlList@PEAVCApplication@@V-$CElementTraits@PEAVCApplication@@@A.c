/*
 * XREFs of ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x18009C9F8
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x180002D80 (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18001BF8C (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800862E4 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
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
  __int64 v12; // rcx
  CUnknown *v13; // rdi
  __int64 *v14; // rax
  int IsBackgroundAudioCapable; // eax
  bool v16; // zf
  _QWORD *v18; // [rsp+20h] [rbp-20h] BYREF
  LPCRITICAL_SECTION v19; // [rsp+28h] [rbp-18h] BYREF
  char v20; // [rsp+30h] [rbp-10h]
  unsigned __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  _QWORD *v22; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  v4 = 0LL;
  v18 = *a1;
  if ( v18 )
  {
    do
    {
      v21 = 0LL;
      Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)a1, &v18);
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
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v19, (struct _RTL_CRITICAL_SECTION *)(v8 + 24));
      v13 = 0LL;
      v22 = *(_QWORD **)(v8 + 64);
      if ( v22 )
      {
        while ( 1 )
        {
          v14 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v12, &v22);
          v12 = *v14;
          if ( !*(_DWORD *)(*v14 + 416) )
          {
            if ( *(_DWORD *)(v12 + 464) )
              break;
          }
          if ( !v22 )
            goto LABEL_12;
        }
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
        v13 = (CUnknown *)v12;
      }
LABEL_12:
      if ( v20 )
        ATL::CCritSecLock::Unlock(&v19);
      if ( !v13 )
        return (unsigned int)-2147418113;
      *(_DWORD *)(v11 + a2) = *((_DWORD *)v13 + 42);
      CUnknown::Release(v13);
      v4 = v11 + 8;
      if ( v11 + 8 > a3 )
        return (unsigned int)-2147024774;
      IsBackgroundAudioCapable = CApplication::IsBackgroundAudioCapable((CApplication *)v8);
      v16 = v18 == 0LL;
      *(_DWORD *)(v11 + 4 + a2) = IsBackgroundAudioCapable;
    }
    while ( !v16 );
  }
  return (unsigned int)v3;
}
