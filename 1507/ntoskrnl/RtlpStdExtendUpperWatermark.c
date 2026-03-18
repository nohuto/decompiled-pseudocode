/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x140245F04
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140246024 (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ZwAllocateVirtualMemory @ 0x14017F2F0 (ZwAllocateVirtualMemory.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall RtlpStdExtendUpperWatermark(__int64 a1, void *a2)
{
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // si
  char v5; // dl
  char *v6; // rcx
  __int64 v7; // rsi
  unsigned __int8 v8; // si
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v3 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)a1);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)a1);
  }
  *(_BYTE *)(a1 + 8) = CurrentIrql;
  v5 = *(_BYTE *)(a1 + 128);
  v6 = *(char **)(a1 + 152);
  v7 = *(_QWORD *)(a1 + 168);
  BaseAddress = v6;
  if ( v5 )
  {
    if ( (unsigned __int64)(v7 - 8) < *(_QWORD *)(a1 + 160) )
      goto LABEL_13;
  }
  else if ( v7 - 8 < (unsigned __int64)v6 )
  {
    RegionSize = 4096LL;
    if ( (unsigned __int64)(v6 - 4096) <= *(_QWORD *)(a1 + 144) )
      goto LABEL_13;
    BaseAddress = v6 - 4096;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      goto LABEL_13;
    *(_QWORD *)(a1 + 152) = BaseAddress;
  }
  ++*(_DWORD *)(a1 + 180);
  v3 = v7 - 8;
  *(_QWORD *)(a1 + 168) = v7 - 8;
LABEL_13:
  v8 = *(_BYTE *)(a1 + 8);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)a1, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)a1, 0LL);
  __writecr8(v8);
  return v3;
}
