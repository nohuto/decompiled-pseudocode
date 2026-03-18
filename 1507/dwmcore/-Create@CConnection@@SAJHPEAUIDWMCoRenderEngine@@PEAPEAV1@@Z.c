/*
 * XREFs of ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18009432C
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800942E0 (-MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x180095788 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 *     ??0CConnection@@AEAA@XZ @ 0x180095890 (--0CConnection@@AEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??_GCConnection@@UEAAPEAXI@Z @ 0x1800E0E30 (--_GCConnection@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CConnection::Create(int a1, struct IDWMCoRenderEngine *a2, struct CConnection **a3)
{
  CConnection *v6; // rax
  CConnection *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  v6 = (CConnection *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        200LL);
  if ( v6 )
    v7 = CConnection::CConnection(v6);
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = CConnection::Initialize(v7, a1, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x21u);
    }
    else
    {
      *a3 = v7;
      v7 = 0LL;
    }
    if ( v7 )
      CConnection::`scalar deleting destructor'(v7, 1u);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Fu);
  }
  return v9;
}
