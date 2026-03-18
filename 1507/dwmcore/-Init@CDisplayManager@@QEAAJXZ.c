/*
 * XREFs of ?Init@CDisplayManager@@QEAAJXZ @ 0x1800951E4
 * Callers:
 *     ?Startup@@YAJXZ @ 0x180095124 (-Startup@@YAJXZ.c)
 * Callees:
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x1800526F8 (-Init@CCriticalSection@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDisplayManager::Init(CDisplayManager *this)
{
  int v1; // esi
  __int64 v2; // rax
  CRemoteApplicationWindowSet *v3; // rdi

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
  qword_1801930E0 = v3;
  if ( v3 )
  {
    (**(void (__fastcall ***)(CRemoteApplicationWindowSet *))v3)(v3);
    if ( v1 >= 0 )
      return (unsigned int)v1;
  }
  else
  {
    v1 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
  }
  if ( qword_1801930E0 )
  {
    (*(void (__fastcall **)(CRemoteApplicationWindowSet *))(*(_QWORD *)qword_1801930E0 + 8LL))(qword_1801930E0);
    qword_1801930E0 = 0LL;
  }
  return (unsigned int)v1;
}
