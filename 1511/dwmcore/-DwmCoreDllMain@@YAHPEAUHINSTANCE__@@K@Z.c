/*
 * XREFs of ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800AE6EC
 * Callers:
 *     DllMain @ 0x1800FF324 (DllMain.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x180067A84 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x1800A2538 (-Init@CCriticalSection@@QEAAJXZ.c)
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x1800A257C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800AE960 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?Startup@@YAJXZ @ 0x1800AF408 (-Startup@@YAJXZ.c)
 *     McGenEventUnregister @ 0x180138654 (McGenEventUnregister.c)
 *     ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x18013AD44 (-CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ.c)
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
        if ( HIBYTE(word_1801A3E04) )
        {
          v8 = -2147418113;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x105u);
        }
        else if ( byte_1801A3DB0 )
        {
          v8 = -2147418113;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x10Au);
        }
        else
        {
          v9 = CCriticalSection::Init(&stru_1801A3D88);
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x10Du);
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
  EventUnregister(qword_18019E920);
  qword_18019E920 = 0LL;
  hProvider = 0;
  EventUnregister(qword_18019E8E0);
  qword_18019E8E0 = 0LL;
  dword_18019E8C0 = 0;
  if ( HIBYTE(word_1801A3E04) )
  {
    if ( qword_1801A3DB8 )
    {
      (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)qword_1801A3DB8 + 8LL))(qword_1801A3DB8);
      qword_1801A3DB8 = 0LL;
    }
    HIBYTE(word_1801A3E04) = 0;
  }
  dword_1801A3E20 = 0;
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
