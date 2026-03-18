/*
 * XREFs of PfSnActivateTrace @ 0x140006A00
 * Callers:
 *     PfSnBeginTrace @ 0x1403E9698 (PfSnBeginTrace.c)
 * Callees:
 *     PfSnAddProcessTrace @ 0x140006AA8 (PfSnAddProcessTrace.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnActivateTrace(__int64 a1)
{
  KIRQL v2; // si
  int v3; // ebx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx

  if ( ExAcquireRundownProtection(&RunRef) )
  {
    *(_WORD *)(a1 + 486) |= 2u;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_1403286D0);
    v3 = PfSnAddProcessTrace(*(_QWORD *)(a1 + 352), a1);
    if ( v3 >= 0 )
    {
      v4 = (_QWORD *)qword_1403286C8;
      v5 = (_QWORD *)(a1 + 8);
      if ( *(__int64 **)qword_1403286C8 != &PfSnGlobals )
        __fastfail(3u);
      ++PfSnNumActiveTraces;
      *v5 = &PfSnGlobals;
      v3 = 0;
      *(_QWORD *)(a1 + 16) = v4;
      *v4 = v5;
      qword_1403286C8 = a1 + 8;
    }
    KeReleaseSpinLock(&qword_1403286D0, v2);
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return (unsigned int)v3;
}
