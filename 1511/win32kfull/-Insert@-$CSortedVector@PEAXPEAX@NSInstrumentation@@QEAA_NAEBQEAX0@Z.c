/*
 * XREFs of ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C02D4C30
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D4874 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?LowerBound@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEBA_KAEBQEAX@Z @ 0x1C02D4E20 (-LowerBound@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEBA_KAEBQEAX@Z.c)
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02D4E70 (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D4EF0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C02D4F30 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CSortedVector<void *,void *>::Insert(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char v6; // si
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdx

  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive((NSInstrumentation::CPlatformReaderWriterLock *)a1);
  v6 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 0, 1);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 28), 1u);
  if ( *(_DWORD *)(a1 + 24) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(a1 + 8));
  v7 = NSInstrumentation::CSortedVector<void *,void *>::LowerBound(a1, a2);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = v7;
  if ( v7 < v8 && (v10 = *(_QWORD *)(a1 + 48), *(_QWORD *)(v10 + 16 * v7) == *a2) )
  {
    *(_QWORD *)(v10 + 16 * v7 + 8) = *a3;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 32);
    if ( v8 != v11 || (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::ReAllocate(a1, 2 * v11) )
    {
      v12 = 16 * v9;
      memmove(
        (void *)(16 * v9 + *(_QWORD *)(a1 + 48) + 16),
        (const void *)(16 * v9 + *(_QWORD *)(a1 + 48)),
        16 * (*(_QWORD *)(a1 + 40) - v9));
      v13 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(v12 + v13) = *a2;
      *(_QWORD *)(v12 + v13 + 8) = *a3;
      ++*(_QWORD *)(a1 + 40);
    }
    else
    {
      v6 = 0;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 28));
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
