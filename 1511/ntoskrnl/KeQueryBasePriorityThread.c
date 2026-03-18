/*
 * XREFs of KeQueryBasePriorityThread @ 0x1400285C8
 * Callers:
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x140028764 (KiAcquireProcessLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KeQueryBasePriorityThread(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebx
  char v4; // al
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 544);
  KiAcquireProcessLockShared(v1, &v6);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v3 = *(char *)(a1 + 563) - *(char *)(v1 + 444);
  v4 = *(_BYTE *)(a1 + 645);
  if ( v4 )
    v3 = 16 * v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v1 + 64));
  __writecr8(v6);
  return v3;
}
