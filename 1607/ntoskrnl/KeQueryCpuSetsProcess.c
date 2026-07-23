/*
 * XREFs of KeQueryCpuSetsProcess @ 0x1401D7448
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x1401D78F0 (KiGetProcessCpuSetMaskPointer.c)
 *     KiAcquireProcessLockShared @ 0x1401DAD7C (KiAcquireProcessLockShared.c)
 */

__int64 __fastcall KeQueryCpuSetsProcess(__int64 a1, _QWORD *a2, int a3, unsigned int a4)
{
  unsigned int v6; // esi
  __int64 ProcessCpuSetMaskPointer; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  v6 = 20;
  ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, a4, &v12);
  KiAcquireProcessLockShared(v8, &v13);
  if ( v12 <= 0x14 )
    v6 = v12;
  if ( v6 )
  {
    v9 = ProcessCpuSetMaskPointer - (_QWORD)a2;
    v10 = v6;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v9);
      ++a2;
      --v10;
    }
    while ( v10 );
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8((unsigned __int8)v13);
  return v12;
}
