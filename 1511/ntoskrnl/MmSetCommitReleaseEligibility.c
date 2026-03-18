/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x1401D09A8
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2)
{
  int v2; // esi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // edi
  $D4FCF91253F76F57393CBFE908971F67 v10; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)&v10);
  }
  v5 = a1 + 1280;
  LOBYTE(v6) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
  {
    v8 = -1073741558;
  }
  else
  {
    if ( a2 )
      *(_BYTE *)(a1 + 1499) = *(_BYTE *)(a1 + 1499) & 0x3F | 0x40;
    else
      *(_BYTE *)(a1 + 1499) &= 0x3Fu;
    v8 = 0;
  }
  MiUnlockWorkingSetExclusive(v5, v6, v7);
  if ( v2 )
    KiUnstackDetachProcess(&v10, 0LL);
  return v8;
}
