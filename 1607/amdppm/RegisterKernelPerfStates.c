/*
 * XREFs of RegisterKernelPerfStates @ 0x1C0018C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterKernelPerfStates(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(char *, _QWORD))RegisterKernelPerfStatesCallback);
}
