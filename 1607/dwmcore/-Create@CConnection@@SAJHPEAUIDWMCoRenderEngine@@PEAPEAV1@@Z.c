/*
 * XREFs of ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x1800A9FBC
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800AA0A0 (-MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x1800A87D8 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCConnection@@UEAAPEAXI@Z @ 0x180113760 (--_GCConnection@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CConnection::Create(int a1, struct IDWMCoRenderEngine *a2, struct CConnection **a3)
{
  __int64 v6; // rax
  CConnection *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         192LL);
  v7 = (CConnection *)v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v6 = &CConnection::`vftable';
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 28) = 0;
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_QWORD *)(v6 + 16) = &CChannelTable::`vftable';
    *(_DWORD *)(v6 + 32) = 1;
    *(_DWORD *)(v6 + 24) = 24;
    *(_BYTE *)(v6 + 96) = 0;
    *(_DWORD *)(v6 + 48) = 0;
    *(_BYTE *)(v6 + 160) = 0;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = CConnection::Initialize(v7, a1, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x21u);
      CConnection::`scalar deleting destructor'(v7, 1u);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Fu);
  }
  return v9;
}
