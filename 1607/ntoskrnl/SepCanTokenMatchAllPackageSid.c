/*
 * XREFs of SepCanTokenMatchAllPackageSid @ 0x14000DD40
 * Callers:
 *     SepMatchPackage @ 0x14000DCB8 (SepMatchPackage.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14000DE00 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

_BOOL8 __fastcall SepCanTokenMatchAllPackageSid(__int64 a1)
{
  char v2; // di
  bool v3; // si
  struct _KTHREAD *CurrentThread; // rax
  __int128 v6; // [rsp+20h] [rbp-58h]
  _QWORD v7[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(&v7[1], 0, 0x38uLL);
  LODWORD(v6) = 2359330;
  *((_QWORD *)&v6 + 1) = L"WIN://NOALLAPPPKG";
  v2 = 0;
  v3 = 1;
  v7[0] = *(_QWORD *)(a1 + 776);
  *(_OWORD *)&v7[1] = v6;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    v2 = 1;
  }
  if ( (int)AuthzBasepQuerySecurityAttributeAndValues(v7) >= 0 )
    v3 = *(_QWORD *)v7[5] == 0LL;
  if ( v2 )
  {
    ExpReleaseResourceForThreadLite(*(_QWORD *)(a1 + 48), (ULONG_PTR)KeGetCurrentThread());
    KeLeaveCriticalRegion();
  }
  return v3;
}
