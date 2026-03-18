/*
 * XREFs of ?Create@CWindowManager@@SAJPEAPEAV1@@Z @ 0x1800ADE70
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800437C8 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CWindowManager@@QEAA@XZ @ 0x1800AE20C (--0CWindowManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowManager::Create(struct CWindowManager **a1)
{
  unsigned int v2; // ebx
  CWindowManager *v3; // rax
  volatile signed __int32 *v4; // rax

  v2 = 0;
  v3 = (CWindowManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           120LL);
  if ( v3 )
    v4 = (volatile signed __int32 *)CWindowManager::CWindowManager(v3);
  else
    v4 = 0LL;
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    *a1 = (struct CWindowManager *)v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x36u);
  }
  return v2;
}
