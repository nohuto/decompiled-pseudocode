/*
 * XREFs of NtSubscribeWnfStateChange @ 0x14046188C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ProbeForWrite @ 0x14044DAC0 (ProbeForWrite.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140461950 (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall NtSubscribeWnfStateChange(int a1, int a2, int a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = 0LL;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 1u);
    *a4 = 0LL;
  }
  v9 = ExpWnfSubscribeWnfStateChange((unsigned __int64)&v11 & -(__int64)(a4 != 0LL), 0, a1, a2, 0LL, 0LL, a3, 1);
  if ( v9 >= 0 && a4 )
    *a4 = v11;
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
