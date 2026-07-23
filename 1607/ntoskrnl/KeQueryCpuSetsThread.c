/*
 * XREFs of KeQueryCpuSetsThread @ 0x1401D74C4
 * Callers:
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CCC8C (KiAcquireThreadLockRaiseToDpc.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x1400F00F4 (KiGetThreadCpuSetMaskPointer.c)
 */

__int64 __fastcall KeQueryCpuSetsThread(__int64 a1, _QWORD *a2, int a3)
{
  unsigned int v5; // esi
  __int64 ThreadCpuSetMaskPointer; // rax
  __int64 v7; // rcx
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v5 = 20;
  ThreadCpuSetMaskPointer = KiGetThreadCpuSetMaskPointer(a1, &v13);
  v8 = v13;
  v9 = ThreadCpuSetMaskPointer;
  if ( v13 <= 0x14 )
    v5 = v13;
  KiAcquireThreadLockRaiseToDpc(v7, &v14);
  if ( v5 )
  {
    v10 = v9 - (_QWORD)a2;
    v11 = v5;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v10);
      ++a2;
      --v11;
    }
    while ( v11 );
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  __writecr8((unsigned __int8)v14);
  return v8;
}
