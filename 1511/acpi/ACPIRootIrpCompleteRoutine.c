/*
 * XREFs of ACPIRootIrpCompleteRoutine @ 0x1C0001510
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIRootIrpCompleteRoutine(ULONG_PTR a1, __int64 a2, struct _KEVENT *a3)
{
  ACPIInternalGetDeviceExtension(a1);
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
