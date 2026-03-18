/*
 * XREFs of PciRootBusBiosMethodDispatcherOnResume @ 0x1C0023BE0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiEvaluateOscMethodOnPciRootBus @ 0x1C0006830 (AcpiEvaluateOscMethodOnPciRootBus.c)
 */

void __fastcall PciRootBusBiosMethodDispatcherOnResume(char *StartContext)
{
  NTSTATUS v2; // eax
  int v3; // r8d
  char v4; // al
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  Object[0] = StartContext + 264;
  Object[1] = StartContext + 240;
  do
  {
    while ( 1 )
    {
      v2 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( v2 )
        break;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)StartContext + 44, 0, 0);
      if ( *((_DWORD *)StartContext + 59) == 5 && (v4 & 8) != 0 )
        AcpiEvaluateOscMethodOnPciRootBus(
          (__int64)StartContext,
          0,
          v3,
          (_DWORD *)StartContext + 74,
          (int *)StartContext + 74);
    }
  }
  while ( v2 != 1 );
  PsTerminateSystemThread(0);
}
