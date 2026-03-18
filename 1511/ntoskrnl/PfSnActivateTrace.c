/*
 * XREFs of PfSnActivateTrace @ 0x1400FADC4
 * Callers:
 *     PfSnBeginTrace @ 0x1404D5984 (PfSnBeginTrace.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     PfSnAddProcessTrace @ 0x1400FAE6C (PfSnAddProcessTrace.c)
 */

__int64 __fastcall PfSnActivateTrace(__int64 a1)
{
  KIRQL v2; // si
  int v3; // ebx
  __int64 **v4; // rdx

  if ( ExAcquireRundownProtection(&stru_140305880) )
  {
    *(_WORD *)(a1 + 486) |= 2u;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_1403058D0);
    v3 = PfSnAddProcessTrace(*(_QWORD *)(a1 + 352), a1);
    if ( v3 >= 0 )
    {
      v4 = (__int64 **)qword_1403058C8;
      *(_QWORD *)(a1 + 16) = qword_1403058C8;
      *(_QWORD *)(a1 + 8) = &PfSnGlobals;
      if ( *v4 != &PfSnGlobals )
        __fastfail(3u);
      ++PfSnNumActiveTraces;
      *v4 = (__int64 *)(a1 + 8);
      v3 = 0;
      qword_1403058C8 = a1 + 8;
    }
    KeReleaseSpinLock(&qword_1403058D0, v2);
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return (unsigned int)v3;
}
