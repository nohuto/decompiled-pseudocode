/*
 * XREFs of ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140011E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x1400086A0 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000A780 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x14000C2F0 (-UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     GetStreamingResourceManager @ 0x14000DCC0 (GetStreamingResourceManager.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Find@?$CAtlList@PEAVCStreamInstanceNew@@V?$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCStreamInstanceNew@@PEAU3@@Z @ 0x140012CE4 (-Find@-$CAtlList@PEAVCStreamInstanceNew@@V-$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL@@Q.c)
 *     ?RemoveAt@?$CAtlList@PEAVCStreamInstanceNew@@V?$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140012E04 (-RemoveAt@-$CAtlList@PEAVCStreamInstanceNew@@V-$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@AT.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CStreamGroup::DestroyStream(CStreamGroup *this, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *Next; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 (__fastcall ***v8)(void *, const struct _GUID *, void **); // rcx
  void (__fastcall *v9)(GraphStreamingResourceManager *, struct ProcessRegistrationToken__ *); // rbp
  void *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rsi
  void *v13; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+28h] [rbp-20h]
  GraphStreamingResourceManager *v17; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v17 = (GraphStreamingResourceManager *)*((_QWORD *)this + 12);
  if ( v17 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v4, (_QWORD **)&v17);
      v6 = *Next;
      if ( *(_QWORD *)(*Next + 8LL) == a2 )
        break;
      if ( !v17 )
        goto LABEL_25;
    }
  }
  else
  {
LABEL_25:
    v6 = 0LL;
  }
  v17 = (GraphStreamingResourceManager *)v6;
  if ( v6 )
  {
    v7 = ATL::CAtlList<CStreamInstanceNew *,ATL::CElementTraits<CStreamInstanceNew *>>::Find((char *)this + 96, &v17);
    ATL::CAtlList<CStreamInstanceNew *,ATL::CElementTraits<CStreamInstanceNew *>>::RemoveAt((char *)this + 96, v7);
    v8 = (__int64 (__fastcall ***)(void *, const struct _GUID *, void **))*((_QWORD *)this + 32);
    if ( v8 )
    {
      v17 = 0LL;
      if ( (int)GetStreamingResourceManager(v8, &v17) >= 0 && *(_QWORD *)(v6 + 48) )
      {
        v9 = *(void (__fastcall **)(GraphStreamingResourceManager *, struct ProcessRegistrationToken__ *))(*(_QWORD *)v17 + 32LL);
        if ( v9 == GraphStreamingResourceManager::UnregisterProcess )
          GraphStreamingResourceManager::UnregisterProcess(v17, *(struct ProcessRegistrationToken__ **)(v6 + 48));
        else
          v9(v17, *(struct ProcessRegistrationToken__ **)(v6 + 48));
        *(_QWORD *)(v6 + 48) = 0LL;
      }
      if ( v17 )
        (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v10 = *(void **)(v6 + 40);
    if ( v10 )
    {
      CloseHandle(v10);
      *(_QWORD *)(v6 + 40) = 0LL;
    }
    v11 = *(_QWORD *)(v6 + 32);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 16LL))(*(_QWORD *)(v6 + 32));
    v12 = *(_QWORD *)(v6 + 24);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 16LL))(*(_QWORD *)(v6 + 24));
    v13 = *(void **)v6;
    if ( *(_QWORD *)v6 )
    {
      CPipeInstance::~CPipeInstance(*(LPVOID **)v6);
      operator delete(v13);
    }
    *(_QWORD *)v6 = 0LL;
    operator delete((void *)v6);
  }
  PublishDeviceGraphWnfState();
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
