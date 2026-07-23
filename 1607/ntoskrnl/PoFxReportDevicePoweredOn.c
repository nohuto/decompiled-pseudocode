/*
 * XREFs of PoFxReportDevicePoweredOn @ 0x140124C40
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1400BF094 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxIdleComponent @ 0x1400BF9A0 (PopFxIdleComponent.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14012C080 (PopDiagTraceFxDevicePowerState.c)
 *     PopPepDeviceDState @ 0x14012C810 (PopPepDeviceDState.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

void __fastcall PoFxReportDevicePoweredOn(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rsi
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  volatile LONG *v8; // r14
  KIRQL v9; // r15
  int v10; // edi
  int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rbp
  unsigned int i; // esi

  v5 = *(_QWORD *)(BugCheckParameter2 + 48);
  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  if ( (_InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFFD) & 2) != 0 )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    v6 = *(_DWORD *)(BugCheckParameter2 + 32);
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v6, v6);
    }
    while ( v7 != v6 );
    LOBYTE(a4) = v6 & 1;
    LOBYTE(a3) = 1;
    PopPepDeviceDState(*(_QWORD *)(BugCheckParameter2 + 56), 1LL, a3, a4);
    PopDiagTraceFxDevicePowerState(v5, 1LL);
  }
  v8 = (volatile LONG *)(v5 + 88);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88));
  v10 = _InterlockedExchange((volatile __int32 *)(v5 + 124), 0);
  if ( v10 > 0 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL);
    if ( v10 > v11 )
      PopFxBugCheck(0x602uLL, v5, v10, 0LL);
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFFE);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL) = v11 - v10;
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 296LL) & 4) != 0 )
    {
      v12 = *(_DWORD *)(BugCheckParameter2 + 620);
      v13 = (unsigned int)v10;
      do
      {
        for ( i = 0; i < v12; ++i )
        {
          PopFxIdleComponent(BugCheckParameter2, i, 2);
          v12 = *(_DWORD *)(BugCheckParameter2 + 620);
        }
        --v13;
      }
      while ( v13 );
    }
  }
  ExReleaseSpinLockExclusive(v8, v9);
  if ( !v10 )
    PopFxCompleteDevicePowerRequired(BugCheckParameter2, 0LL);
}
