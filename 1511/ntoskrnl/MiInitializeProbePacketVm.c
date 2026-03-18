/*
 * XREFs of MiInitializeProbePacketVm @ 0x1400D5990
 * Callers:
 *     MiProbeAndLockPrepare @ 0x1400D5844 (MiProbeAndLockPrepare.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

char __fastcall MiInitializeProbePacketVm(__int64 a1)
{
  unsigned __int64 v1; // r8
  _DWORD *v2; // rdx
  LONG *v4; // rax
  _DWORD *v5; // r8
  unsigned __int8 CurrentIrql; // di
  signed __int32 v7; // ett
  __int64 v8; // rax

  v1 = *(_QWORD *)a1;
  v2 = MmBadPointer;
  *(_QWORD *)(a1 + 88) = MmBadPointer;
  *(_BYTE *)(a1 + 60) = 0;
  if ( v1 < 0x7FFFFFFF0000LL )
  {
    v4 = (LONG *)(*(_QWORD *)(a1 + 72) + 1280LL);
    *(_DWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 88) = v4;
    goto LABEL_3;
  }
  if ( v1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
  {
    v8 = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 56) = 6;
    v4 = (LONG *)(*(_QWORD *)(*(_QWORD *)(v8 + 184) + 1024LL) + 2968LL);
    goto LABEL_23;
  }
  if ( v1 + 0x400000000000LL <= 0xF7FFFFFFFFFLL
    || qword_1402FE8F0
    && v1 >= qword_1402FE8F0
    && v1 < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
    && (*(_BYTE *)(48 * ((*(_QWORD *)(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                 - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
  {
    v4 = &dword_1402FF980;
    *(_DWORD *)(a1 + 56) = 3;
    goto LABEL_23;
  }
  if ( qword_1402FE940 && v1 >= qword_1402FE940 && v1 < qword_1402FE940 + (qword_1402FE920 << 21) )
  {
    v4 = &dword_1402FF880;
    *(_DWORD *)(a1 + 56) = 2;
    goto LABEL_23;
  }
  LOBYTE(v4) = v1;
  if ( v1 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
  {
    *(_DWORD *)(a1 + 56) = 4;
    goto LABEL_3;
  }
  if ( !qword_1402FE8F0
    || v1 < qword_1402FE8F0
    || v1 >= qword_1402FE8F0 + (qword_1402FE8D0 << 21)
    || (LOBYTE(v4) = *(_BYTE *)(48 * ((*(_QWORD *)(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                              - 0x57FFFFFFFDALL) & 0xF0,
        (_BYTE)v4 != 0xD0) )
  {
    v4 = &dword_1402FFA80;
    *(_DWORD *)(a1 + 56) = 5;
LABEL_23:
    *(_QWORD *)(a1 + 88) = v4;
    goto LABEL_3;
  }
  *(_DWORD *)(a1 + 56) = 0;
LABEL_3:
  v5 = *(_DWORD **)(a1 + 88);
  if ( v5 == v2 )
  {
    *(_BYTE *)(a1 + 80) = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v4) = ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v5, CurrentIrql);
    }
    else
    {
      _m_prefetchw(v5);
      v7 = *v5 & 0x7FFFFFFF;
      LODWORD(v4) = _InterlockedCompareExchange(v5, v7 + 1, v7);
      if ( v7 != (_DWORD)v4 )
        LOBYTE(v4) = ExpWaitForSpinLockSharedAndAcquire(v5, CurrentIrql, (__int64)v5);
    }
    *(_BYTE *)(a1 + 80) = CurrentIrql;
  }
  return (char)v4;
}
