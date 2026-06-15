/*
 * XREFs of ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140004240
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140006D20 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x140026F9C (-GetCpuManager@@YAJPEAPEAVCpuManager@@@Z.c)
 *     ?GetNext@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAVCPair@12@AEAPEAU__POSITION@@@Z @ 0x140026FE8 (-GetNext@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTra.c)
 *     ?GetStartPosition@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x140027124 (-GetStartPosition@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CE.c)
 */

__int64 __fastcall GraphStreamingResourceManager::AddToCpuManager(struct CpuManager **this, __int64 a2)
{
  int CpuManager; // ebx
  _QWORD *v6; // rsi
  __int64 Next; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v11; // [rsp+28h] [rbp-8h]
  __int64 StartPosition; // [rsp+50h] [rbp+20h] BYREF

  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 2);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( a2 >= (unsigned int)dword_140054E68 )
    goto LABEL_2;
  v6 = this + 34;
  CpuManager = GetCpuManager(this + 34);
  if ( CpuManager >= 0 )
  {
    StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 7);
    if ( StartPosition )
    {
      while ( 1 )
      {
        Next = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
                 this + 7,
                 &StartPosition);
        CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 32LL))(
                       *v6,
                       *(_QWORD *)(Next + 16),
                       Next + 24);
        if ( CpuManager < 0 )
          break;
        if ( !StartPosition )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 16);
      if ( StartPosition )
      {
        while ( 1 )
        {
          v8 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
                 this + 16,
                 &StartPosition);
          CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 48LL))(
                         *v6,
                         *(_QWORD *)(v8 + 16),
                         v8 + 24);
          if ( CpuManager < 0 )
            break;
          if ( !StartPosition )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(this + 25);
        if ( !StartPosition )
        {
LABEL_2:
          CpuManager = 0;
          goto LABEL_3;
        }
        while ( 1 )
        {
          v9 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
                 this + 25,
                 &StartPosition);
          CpuManager = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 64LL))(
                         *v6,
                         *(_QWORD *)(v9 + 16),
                         v9 + 24);
          if ( CpuManager < 0 )
            break;
          if ( !StartPosition )
            goto LABEL_2;
        }
      }
    }
    (*((void (__fastcall **)(char *))*(this - 1) + 10))((char *)this - 8);
  }
LABEL_3:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)CpuManager;
}
