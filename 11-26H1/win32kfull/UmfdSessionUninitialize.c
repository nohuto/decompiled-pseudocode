/*
 * XREFs of UmfdSessionUninitialize @ 0x1401C1460
 * Callers:
 *     <none>
 * Callees:
 *     ?SessionUninitialize@UmfdHostLifeTimeManager@@CAXXZ @ 0x1401C1520 (-SessionUninitialize@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UmfdCallSessionUninitialize@@YAXXZ @ 0x1401C1884 (-UmfdCallSessionUninitialize@@YAXXZ.c)
 *     ?Uninitialize@UmfdReliabilityManager@@YAXXZ @ 0x1401C19D8 (-Uninitialize@UmfdReliabilityManager@@YAXXZ.c)
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x140295404 (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 */

void __fastcall UmfdSessionUninitialize(__int64 a1, __int64 a2, __int64 a3)
{
  UmfdReliabilityManager *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  PVOID *v11; // rbx
  __int64 SessionState; // rbx
  void *v13; // rcx

  if ( *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 104) )
  {
    UmfdCallSessionUninitialize();
    UmfdAllocation::Uninitialize();
    UmfdReliabilityManager::Uninitialize(v3);
    UmfdHostLifeTimeManager::SessionUninitialize();
    v9 = *(_QWORD *)(W32GetSessionState(v5, v4, v6) + 96);
    v11 = *(PVOID **)(v9 + 24160);
    if ( v11 )
    {
      ExFreePoolWithTag(v11[6], 0);
      ExFreePoolWithTag(v11, 0);
      *(_QWORD *)(v9 + 24160) = 0LL;
    }
    SessionState = W32GetSessionState(v8, v7, v10);
    v13 = *(void **)(SessionState + 104);
    if ( v13 )
    {
      EngFreeMem(v13);
      *(_QWORD *)(SessionState + 104) = 0LL;
    }
  }
}
