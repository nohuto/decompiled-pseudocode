/*
 * XREFs of PfSnNameQueryWorker @ 0x1400A0734
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     PfSnVolumeKeyQuery @ 0x1404C9F88 (PfSnVolumeKeyQuery.c)
 */

void __fastcall PfSnNameQueryWorker(struct _EX_RUNDOWN_REF *a1)
{
  volatile LONG *v2; // rdi
  KIRQL v3; // al
  unsigned __int64 *Count; // rsi
  void *v5; // rsi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile LONG *)&a1[72];
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v2);
    Count = (unsigned __int64 *)a1[67].Count;
    if ( !Count )
      break;
    a1[67].Count = *Count;
    *Count = 0LL;
    ExReleaseSpinLockExclusive(v2, v3);
    v5 = (void *)Count[1];
    if ( (*(int (__fastcall **)(unsigned __int64, void *, __int64 *))(qword_140328678 + 16))(a1[44].Count, v5, &v6) >= 0 )
      PfSnVolumeKeyQuery(a1, v6, v5);
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  }
  a1[71].Count = 0LL;
  ExReleaseSpinLockExclusive(v2, v3);
  ExReleaseRundownProtection(a1 + 45);
}
