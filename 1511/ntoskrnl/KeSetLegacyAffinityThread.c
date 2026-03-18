/*
 * XREFs of KeSetLegacyAffinityThread @ 0x140095414
 * Callers:
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiSetAffinityThread @ 0x140095508 (KiSetAffinityThread.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall KeSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r12
  __int64 v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( a2 )
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
    LOWORD(v12) = *(_WORD *)(a1 + 560);
    v8 = qword_1403825B8[(unsigned __int16)v12] & a2;
    if ( v8 && (v8 & *(_QWORD *)(v2 + 8LL * (unsigned __int16)v12 + 88)) == v8 )
    {
      v3 = *(_QWORD *)(a1 + 552);
      v11 = v8;
      KiSetAffinityThread(a1, &v10, &v11);
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
    KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v10, CurrentIrql);
  }
  return v3;
}
