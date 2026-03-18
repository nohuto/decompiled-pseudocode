/*
 * XREFs of ?Create@CCounterManager@@CAJPEAPEAV1@@Z @ 0x1800B5440
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800437C8 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CCounterManager@@AEAAJXZ @ 0x1800B54CC (-Init@CCounterManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCCounterManager@@QEAAPEAXI@Z @ 0x18011AB64 (--_GCCounterManager@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCounterManager::Create(struct CCounterManager **a1)
{
  __int64 v1; // rax
  CCounterManager *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  unsigned int v6; // edx

  v1 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         456LL);
  v2 = (CCounterManager *)v1;
  if ( v1 )
  {
    *(_QWORD *)(v1 + 424) = 0LL;
    *(_QWORD *)(v1 + 432) = 0LL;
    *(_DWORD *)(v1 + 440) = 0;
    *(_DWORD *)(v1 + 444) = 0;
    *(_DWORD *)(v1 + 448) = 0;
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
  {
    v3 = CCounterManager::Init(v2);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2Du);
      CCounterManager::`scalar deleting destructor'(v2, v6);
    }
    else
    {
      CCounterManager::s_pGlobalPerFrameCounterManager = v2;
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Bu);
  }
  return v4;
}
