/*
 * XREFs of ??1CpuManager@@UEAA@XZ @ 0x140017078
 * Callers:
 *     ??_GCpuManager@@UEAAPEAXI@Z @ 0x140017040 (--_GCpuManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreePlexes@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x14000CF1C (-FreePlexes@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CE.c)
 *     ??_V@YAXPEAX@Z @ 0x140018AD0 (--_V@YAXPEAX@Z.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140027988 (-FreeNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@P.c)
 *     ?PickSize@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEBAI_K@Z @ 0x14002865C (-PickSize@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CEle.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x14002A1EC (-InitHashTable@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTra.c)
 */

void __fastcall CpuManager::~CpuManager(CpuManager *this)
{
  char *v1; // rbx
  void **v3; // rbx
  void **v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int i; // edi
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int j; // edi
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned int v16; // eax

  v1 = (char *)this + 200;
  ++*((_DWORD *)this + 62);
  if ( *((_QWORD *)this + 25) )
  {
    v5 = 0;
    if ( *((_DWORD *)this + 54) )
    {
      do
      {
        v6 = *(_QWORD *)(*(_QWORD *)v1 + 8LL * v5);
        while ( v6 )
        {
          v7 = v6;
          v6 = *(_QWORD *)(v6 + 24);
          ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::FreeNode(
            v1,
            v7);
        }
        ++v5;
      }
      while ( v5 < *((_DWORD *)v1 + 4) );
    }
  }
  operator delete[](*(void **)v1);
  *(_QWORD *)v1 = 0LL;
  *((_QWORD *)v1 + 1) = 0LL;
  if ( !*((_DWORD *)v1 + 12) )
  {
    v8 = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::PickSize(
           v1,
           0LL);
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
      v1,
      v8,
      0LL);
  }
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::FreePlexes((__int64)v1);
  --*((_DWORD *)v1 + 12);
  v3 = (void **)((char *)this + 128);
  ++*((_DWORD *)this + 44);
  if ( *((_QWORD *)this + 16) )
  {
    for ( i = 0; i < *((_DWORD *)this + 36); ++i )
    {
      v10 = *((_QWORD *)*v3 + i);
      while ( v10 )
      {
        v11 = v10;
        v10 = *(_QWORD *)(v10 + 24);
        ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::FreeNode(
          (char *)this + 128,
          v11);
      }
    }
  }
  operator delete[](*v3);
  *v3 = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  if ( !*((_DWORD *)this + 44) )
  {
    v12 = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::PickSize(
            (char *)this + 128,
            0LL);
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
      (char *)this + 128,
      v12,
      0LL);
  }
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::FreePlexes((__int64)this + 128);
  --*((_DWORD *)this + 44);
  v4 = (void **)((char *)this + 56);
  ++*((_DWORD *)this + 26);
  if ( *((_QWORD *)this + 7) )
  {
    for ( j = 0; j < *((_DWORD *)this + 18); ++j )
    {
      v14 = *((_QWORD *)*v4 + j);
      while ( v14 )
      {
        v15 = v14;
        v14 = *(_QWORD *)(v14 + 24);
        ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::FreeNode(
          (char *)this + 56,
          v15);
      }
    }
  }
  operator delete[](*v4);
  *v4 = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  if ( !*((_DWORD *)this + 26) )
  {
    v16 = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::PickSize(
            (char *)this + 56,
            0LL);
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
      (char *)this + 56,
      v16,
      0LL);
  }
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::FreePlexes((__int64)this + 56);
  --*((_DWORD *)this + 26);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
