/*
 * XREFs of PspSetPicoThreadDescriptorBase @ 0x14020F9E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetPicoThreadDescriptorBase(int a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 CurrentIrql; // r8
  unsigned int v4; // ecx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( a1 )
  {
    CurrentThread[1].WaitBlock[2].Object = (PVOID)a2;
    v4 = -1073741566;
  }
  else
  {
    CurrentThread[1].WaitBlock[2].Thread = (struct _KTHREAD *)a2;
    v4 = -1073741568;
  }
  __writemsr(v4, a2);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
