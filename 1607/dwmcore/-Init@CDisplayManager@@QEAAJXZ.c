/*
 * XREFs of ?Init@CDisplayManager@@QEAAJXZ @ 0x180038618
 * Callers:
 *     ?Startup@@YAJXZ @ 0x1800A976C (-Startup@@YAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x18009EA18 (-Init@CCriticalSection@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::Init(CDisplayManager *this)
{
  int v1; // ebx
  __int64 v2; // rax
  CRemoteApplicationWindowSet *v3; // rcx

  v1 = CCriticalSection::Init(&g_DisplayManager);
  v2 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  v3 = (CRemoteApplicationWindowSet *)v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v2 = &CRemoteApplicationWindowSet::`vftable';
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    *(_QWORD *)(v2 + 16) = v2 + 48;
    *(_QWORD *)(v2 + 24) = v2 + 48;
    *(_DWORD *)(v2 + 32) = 4;
    *(_DWORD *)(v2 + 36) = 4;
  }
  else
  {
    v3 = 0LL;
  }
  qword_1801EFD20 = v3;
  if ( v3 )
  {
    (**(void (__fastcall ***)(CRemoteApplicationWindowSet *))v3)(v3);
    if ( v1 >= 0 )
      return (unsigned int)v1;
  }
  else
  {
    v1 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
  }
  if ( qword_1801EFD20 )
  {
    (*(void (__fastcall **)(CRemoteApplicationWindowSet *))(*(_QWORD *)qword_1801EFD20 + 8LL))(qword_1801EFD20);
    qword_1801EFD20 = 0LL;
  }
  return (unsigned int)v1;
}
