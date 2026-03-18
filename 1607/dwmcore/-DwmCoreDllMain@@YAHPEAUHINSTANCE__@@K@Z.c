/*
 * XREFs of ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800A9688
 * Callers:
 *     DllMain @ 0x1801136F0 (DllMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x18009EA18 (-Init@CCriticalSection@@QEAAJXZ.c)
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18009EA5C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800A2474 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800A9220 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?Startup@@YAJXZ @ 0x1800A976C (-Startup@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     McGenEventUnregister @ 0x1801616F0 (McGenEventUnregister.c)
 *     ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x180164C68 (-CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ.c)
 */

__int64 __fastcall DwmCoreDllMain(HINSTANCE a1, int a2)
{
  unsigned int v2; // edi
  int v3; // edx
  CPtrArrayBase *Value; // rax
  CPtrArrayBase *v6; // rbx
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
    CThreadContext::s_dwTlsIndex = TlsAlloc();
    if ( CThreadContext::s_dwTlsIndex == -1 )
    {
      v8 = -2147024882;
      v12 = 73;
      v10 = -2147024882;
    }
    else
    {
      v7 = CCriticalSection::Init(&g_csCompositionEngine);
      v8 = v7;
      if ( v7 < 0 )
      {
        v12 = 78;
      }
      else
      {
        v7 = Startup();
        v8 = v7;
        if ( v7 >= 0 )
        {
          if ( byte_1801F0124 )
          {
            v8 = -2147418113;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x13Du);
          }
          else if ( byte_1801F0050 )
          {
            v8 = -2147418113;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x142u);
          }
          else
          {
            v9 = CCriticalSection::Init(&stru_1801F0028);
            v8 = v9;
            if ( v9 >= 0 )
              goto LABEL_13;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x145u);
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x48u);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x26u);
LABEL_13:
          if ( v8 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x51u);
          else
            RegisterDwmGuidWithEtw();
          return v8 >= 0;
        }
        v12 = 80;
      }
      v10 = v7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v12);
    return v8 >= 0;
  }
  McGenEventUnregister(a1);
  EventUnregister(RegHandle);
  RegHandle = 0LL;
  LODWORD(pRelatedActivityId) = 0;
  EventUnregister(qword_1801EA7A0);
  qword_1801EA7A0 = 0LL;
  dword_1801EA780 = 0;
  EventUnregister(qword_1801EA760);
  qword_1801EA760 = 0LL;
  hProvider = 0;
  if ( byte_1801F0124 )
  {
    v11 = qword_1801F0058;
    if ( qword_1801F0058 )
    {
      (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)qword_1801F0058 + 8LL))(qword_1801F0058);
      qword_1801F0058 = 0LL;
    }
    byte_1801F0124 = 0;
  }
  dword_1801F0140 = 0;
  CD3DModuleLoaderInternal::CleanupD3DReferences(v11);
  CCriticalSection::DeInit(&g_csCompositionEngine);
  if ( CThreadContext::s_dwTlsIndex != -1 )
  {
    TlsFree(CThreadContext::s_dwTlsIndex);
    CThreadContext::s_dwTlsIndex = -1;
  }
  return v2;
}
