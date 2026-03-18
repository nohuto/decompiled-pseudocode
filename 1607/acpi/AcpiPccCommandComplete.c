/*
 * XREFs of AcpiPccCommandComplete @ 0x1C00522B4
 * Callers:
 *     ACPIPccProcessSci @ 0x1C0051FE0 (ACPIPccProcessSci.c)
 *     AcpiPccWatchdog @ 0x1C00529D0 (AcpiPccWatchdog.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiPccCommandComplete(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  KIRQL v3; // al
  __int16 *v4; // rcx
  KIRQL v5; // bp
  void *v6; // rdx
  __int64 *v7; // rbx
  int v8; // eax
  __int64 **v9; // rax
  __int64 v10; // rcx

  if ( _InterlockedExchange((volatile __int32 *)(a1 + 312), 0) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 520));
    v4 = *(__int16 **)(a1 + 40);
    v5 = v3;
    *(LARGE_INTEGER *)(a1 + 168) = PerformanceCounter;
    if ( *v4 < 0 )
      _InterlockedDecrement(&AcpiPccSciReferenceCount);
    KeCancelTimer((PKTIMER)(a1 + 320));
    if ( (**(_WORD **)(a1 + 48) & 1) != 0 )
    {
      LODWORD(v6) = 0;
      if ( (**(_WORD **)(a1 + 48) & 4) != 0 )
        LODWORD(v6) = -1073741435;
    }
    else
    {
      LODWORD(v6) = -1073741643;
    }
    _InterlockedAnd16(*(volatile signed __int16 **)(a1 + 48), 0xFFF8u);
    v7 = 0LL;
    v8 = (*(_DWORD *)a1 >> 2) & 0xF;
    if ( v8 == 6 )
    {
      v6 = (void *)(int)v6;
    }
    else
    {
      if ( v8 != 10 )
      {
        v9 = (__int64 **)(a1 + 112);
        if ( *v9 == (__int64 *)v9 )
        {
          *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFFC3 | 0xC;
        }
        else
        {
          v7 = *v9;
          v10 = **v9;
          if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v10 + 8) != v7 )
            __fastfail(3u);
          *v9 = (__int64 *)v10;
          *(_QWORD *)(v10 + 8) = v9;
          *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFFC3 | 0x14;
        }
        goto LABEL_19;
      }
      v6 = 0LL;
    }
    KeInsertQueueDpc((PRKDPC)(a1 + 448), v6, 0LL);
LABEL_19:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 520), v5);
    if ( v7 )
    {
      *((_DWORD *)v7 + 10) = 0;
      KeSetEvent((PRKEVENT)(v7 + 2), 0, 0);
    }
  }
}
