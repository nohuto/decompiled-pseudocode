/*
 * XREFs of RegisterKernelCpc @ 0x1C0020B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterKernelCpc(_QWORD *a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterKernelPerfStatesCallback);
}
