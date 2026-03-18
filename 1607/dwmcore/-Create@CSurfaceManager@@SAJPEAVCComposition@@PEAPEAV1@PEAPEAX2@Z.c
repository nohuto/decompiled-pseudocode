/*
 * XREFs of ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x1800B77DC
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800437C8 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x180036FA0 (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1800373C0 (-Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceManager::Create(struct CComposition *a1, struct CSurfaceManager **a2, void **a3, void **a4)
{
  CSurfaceManager *v8; // rax
  CSurfaceManager *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi

  *a2 = 0LL;
  v8 = (CSurfaceManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                            WPF::g_pProcessHeap,
                            680LL);
  if ( v8 )
    v9 = CSurfaceManager::CSurfaceManager(v8, a1);
  else
    v9 = 0LL;
  if ( v9 )
  {
    (**(void (__fastcall ***)(CSurfaceManager *))v9)(v9);
    v10 = CSurfaceManager::Initialize(v9, a3, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x21u);
      (*(void (__fastcall **)(CSurfaceManager *))(*(_QWORD *)v9 + 8LL))(v9);
    }
    else
    {
      *a2 = v9;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Eu);
  }
  return v11;
}
