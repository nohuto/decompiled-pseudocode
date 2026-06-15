/*
 * XREFs of ?InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ @ 0x140027940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAVCPair@12@AEAPEAU__POSITION@@@Z @ 0x140026FE8 (-GetNext@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTra.c)
 *     ?GetStartPosition@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x140027124 (-GetStartPosition@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CE.c)
 */

void __fastcall GraphStreamingResourceManager::InternalRemoveFromCpuManager(GraphStreamingResourceManager *this)
{
  __int64 Next; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 StartPosition; // [rsp+30h] [rbp+8h] BYREF

  StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition((__int64 *)this + 8);
  while ( StartPosition )
  {
    Next = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
             (__int64)this + 64,
             &StartPosition);
    if ( *(_QWORD *)(Next + 24) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 40LL))(*((_QWORD *)this + 35));
      *(_QWORD *)(Next + 24) = 0LL;
    }
  }
  StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition((__int64 *)this + 17);
  while ( StartPosition )
  {
    v3 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
           (__int64)this + 136,
           &StartPosition);
    if ( *(_QWORD *)(v3 + 24) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 56LL))(*((_QWORD *)this + 35));
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition((__int64 *)this + 26);
  while ( StartPosition )
  {
    v4 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
           (__int64)this + 208,
           &StartPosition);
    if ( *(_QWORD *)(v4 + 24) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 72LL))(*((_QWORD *)this + 35));
      *(_QWORD *)(v4 + 24) = 0LL;
    }
  }
  Microsoft::WRL::ComPtr<CpuManager>::InternalRelease((__int64 *)this + 35);
}
