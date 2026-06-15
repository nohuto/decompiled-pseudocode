/*
 * XREFs of ?InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ @ 0x140028D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAVCPair@12@AEAPEAU__POSITION@@@Z @ 0x1400284B8 (-GetNext@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTra.c)
 *     ?GetStartPosition@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1400285F4 (-GetStartPosition@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CE.c)
 */

void __fastcall GraphStreamingResourceManager::InternalRemoveFromCpuManager(GraphStreamingResourceManager *this)
{
  __int64 Next; // rax
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 StartPosition; // [rsp+40h] [rbp+8h] BYREF

  StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition((__int64 *)this + 8);
  while ( StartPosition )
  {
    Next = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
             (__int64)this + 64,
             &StartPosition);
    v3 = Next;
    if ( *(_QWORD *)(Next + 24) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 35) + 40LL))(
        *((_QWORD *)this + 35),
        *(_QWORD *)(Next + 24));
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition((__int64 *)this + 17);
  while ( StartPosition )
  {
    v4 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
           (__int64)this + 136,
           &StartPosition);
    v5 = v4;
    if ( *(_QWORD *)(v4 + 24) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 35) + 56LL))(
        *((_QWORD *)this + 35),
        *(_QWORD *)(v4 + 24));
      *(_QWORD *)(v5 + 24) = 0LL;
    }
  }
  StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition((__int64 *)this + 26);
  while ( StartPosition )
  {
    v6 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
           (__int64)this + 208,
           &StartPosition);
    v7 = v6;
    if ( *(_QWORD *)(v6 + 24) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 35) + 72LL))(
        *((_QWORD *)this + 35),
        *(_QWORD *)(v6 + 24));
      *(_QWORD *)(v7 + 24) = 0LL;
    }
  }
  Microsoft::WRL::ComPtr<CpuManager>::InternalRelease((__int64 *)this + 35);
}
