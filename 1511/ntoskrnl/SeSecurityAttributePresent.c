/*
 * XREFs of SeSecurityAttributePresent @ 0x140470FCC
 * Callers:
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x140433D48 (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     PsQueryProcessAttributesByToken @ 0x14046F8E0 (PsQueryProcessAttributesByToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     AuthzBasepSecurityAttributePresent @ 0x14009C438 (AuthzBasepSecurityAttributePresent.c)
 */

char __fastcall SeSecurityAttributePresent(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  LOBYTE(a2) = AuthzBasepSecurityAttributePresent(*(_QWORD *)(a1 + 776), a2);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return a2;
}
