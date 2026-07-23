/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x1401E1044
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2)
{
  int v2; // ebp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // ebx
  char v10; // cl
  _BYTE v12[48]; // [rsp+28h] [rbp-50h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v12);
  }
  SharedVm = MiGetSharedVm(a1 + 1280);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = *(unsigned int *)(a1 + 772);
  v8 = *(_DWORD *)(a1 + 1464);
  if ( (v7 & 0x20) != 0 )
  {
    v9 = -1073741558;
  }
  else
  {
    if ( a2 )
      v10 = HIBYTE(v8) & 0x3F | 0x40;
    else
      v10 = HIBYTE(v8) & 0x3F;
    *(_BYTE *)(a1 + 1467) = v10;
    v9 = 0;
  }
  LOBYTE(v7) = v6;
  MiUnlockWorkingSetExclusive(a1 + 1280, v7);
  if ( v2 )
    KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
  return v9;
}
