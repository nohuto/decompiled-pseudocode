/*
 * XREFs of ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AA198
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800437C8 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x1800A7968 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800A7AE8 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::Create(struct CComposition *a1, HANDLE **a2)
{
  CManipulationManager *v4; // rax
  HANDLE *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v4 = (CManipulationManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 376LL);
  if ( v4 )
    v5 = (HANDLE *)CManipulationManager::CManipulationManager(v4, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    (*((void (__fastcall **)(HANDLE *))*v5 + 1))(v5);
    v6 = CManipulationManager::Initialize(v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x21u);
      (*((void (__fastcall **)(HANDLE *))*v5 + 2))(v5);
    }
    else
    {
      *a2 = v5;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Eu);
  }
  return v7;
}
