/*
 * XREFs of ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180060E4C
 * Callers:
 *     DllMain @ 0x1800E0C00 (DllMain.c)
 * Callees:
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x18001AF30 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x1800526F8 (-Init@CCriticalSection@@QEAAJXZ.c)
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18005273C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Startup@@YAJXZ @ 0x180095124 (-Startup@@YAJXZ.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x180096FFC (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     McGenEventUnregister @ 0x1801230E8 (McGenEventUnregister.c)
 *     ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x1801259D4 (-CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ.c)
 */

__int64 __fastcall DwmCoreDllMain(HINSTANCE a1, int a2)
{
  unsigned int v2; // esi
  int v3; // edx
  CPtrArrayBase *Value; // rax
  CPtrArrayBase *v6; // rbp
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // r9d
  CD3DModuleLoaderInternal *v11; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v2 = 1;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 )
      {
        Value = (CPtrArrayBase *)TlsGetValue(CThreadContext::s_dwTlsIndex);
        v6 = Value;
        if ( Value )
        {
          CPtrArrayBase::Clear(Value);
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPtrArrayBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v6);
          TlsSetValue(CThreadContext::s_dwTlsIndex, 0LL);
        }
      }
      return v2;
    }
    g_DllInstance = a1;
    CThreadContext::s_dwTlsIndex = TlsAlloc();
    if ( CThreadContext::s_dwTlsIndex == -1 )
    {
      v8 = -2147024882;
      v12 = 89;
      v10 = -2147024882;
      goto LABEL_20;
    }
    v7 = CCriticalSection::Init(&g_csCompositionEngine);
    v8 = v7;
    if ( v7 < 0 )
    {
      v12 = 94;
    }
    else
    {
      v7 = Startup();
      v8 = v7;
      if ( v7 >= 0 )
      {
        if ( byte_180195DC8 )
        {
          v8 = -2147418113;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x109u);
        }
        else if ( byte_180195DC0 )
        {
          v8 = -2147418113;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x10Eu);
        }
        else
        {
          v9 = CCriticalSection::Init(&CriticalSection);
          v8 = v9;
          if ( v9 >= 0 )
          {
LABEL_13:
            if ( v8 >= 0 )
            {
              RegisterDwmGuidWithEtw();
              return v8 >= 0;
            }
            v12 = 97;
            v10 = v8;
LABEL_20:
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v12);
            return v8 >= 0;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x111u);
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x45u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x26u);
        goto LABEL_13;
      }
      v12 = 96;
    }
    v10 = v7;
    goto LABEL_20;
  }
  McGenEventUnregister(a1);
  EventUnregister(RegHandle);
  RegHandle = 0LL;
  LODWORD(pRelatedActivityId) = 0;
  EventUnregister(qword_180190A90);
  qword_180190A90 = 0LL;
  hProvider = 0;
  EventUnregister(qword_180190A50);
  qword_180190A50 = 0LL;
  dword_180190A30 = 0;
  if ( byte_180195DC8 )
  {
    if ( qword_180195DD0 )
    {
      (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)qword_180195DD0 + 8LL))(qword_180195DD0);
      qword_180195DD0 = 0LL;
    }
    byte_180195DC8 = 0;
  }
  dword_180195E38 = 0;
  CD3DRegistryDatabase::m_fInitialized = 0;
  CD3DModuleLoaderInternal::CleanupD3DReferences(v11);
  CCriticalSection::DeInit(&g_csCompositionEngine);
  if ( CThreadContext::s_dwTlsIndex != -1 )
  {
    TlsFree(CThreadContext::s_dwTlsIndex);
    CThreadContext::s_dwTlsIndex = -1;
  }
  return v2;
}
