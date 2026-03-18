/*
 * XREFs of MiProtectAweRegion @ 0x140224890
 * Callers:
 *     MiProtectVirtualMemory @ 0x1404B9700 (MiProtectVirtualMemory.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14010E920 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14010FFE0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // esi
  _KPROCESS *Process; // rcx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rcx
  _DWORD *v13; // r12
  __int64 v14; // rax
  _KPROCESS *v15; // rcx
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int16 v22; // ax
  __int64 v23; // [rsp+20h] [rbp-E0h] BYREF
  struct _KTHREAD *v24; // [rsp+28h] [rbp-D8h]
  _DWORD *v25; // [rsp+30h] [rbp-D0h]
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+44h] [rbp-BCh]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]

  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (unsigned int)a3;
  v7 = 1;
  Process = CurrentThread->ApcState.Process;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (_DWORD)a3 == 24 )
    v6 = 1LL;
  v10 = ((unsigned __int64)(HIBYTE(word_14034EC18) & 1) << 8) | MmProtectToPteMask[v6] & 0xFFFFFFFFFFFFFF7FuLL | 0xFFFFFFFFF025LL;
  if ( (_DWORD)a3 == 24 )
  {
    v10 &= ~4uLL;
  }
  else if ( (_DWORD)a3 == 4 )
  {
    v10 |= 0x42uLL;
  }
  v28 = 20LL;
  v27 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v26 = 1;
  v11 = (_QWORD *)Process[1].ActiveProcessors.Bitmap[3];
  if ( !*v11 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v13 = v11 + 1;
  v25 = v11 + 1;
  ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)(v11 + 1), 0LL, a3, a4);
  v14 = *(_QWORD *)v5;
  v15 = (_KPROCESS *)(v5 + 0x90482413000LL);
  if ( v5 + 0x90482413000LL <= 0x7F8 )
    LOWORD(v14) = MiReadPteShadow(v5, *(_QWORD *)v5);
  if ( (v14 & 1) != 0 && (v14 & 4) != 0 )
    v7 = (v14 & 0x800) != 0 ? 4 : 2;
  if ( v5 <= v9 )
  {
    v16 = v5 + 0x90482413000LL;
    do
    {
      v17 = *(_QWORD *)v5;
      if ( v16 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v15, v17)
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v15 = KeGetCurrentThread()->ApcState.Process;
        v18 = *(_QWORD *)&v15[2].ProcessLock;
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v19 & 0x20) != 0 )
            v17 |= 0x20uLL;
          if ( (v19 & 0x42) != 0 )
            v17 |= 0x42uLL;
        }
      }
      v23 = v17;
      if ( (v17 & 1) != 0 )
      {
        if ( (unsigned __int64)&STACK[0x90482413020] <= 0x7F8
          && (unsigned int)MiPteHasShadow(v15, v17)
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          v20 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v20 )
          {
            v21 = *(_QWORD *)(v20 + 8 * (((unsigned __int64)&v23 >> 3) & 0x1FF));
            if ( (v21 & 0x20) != 0 )
              v17 |= 0x20uLL;
            if ( (v21 & 0x42) != 0 )
              v17 |= 0x42uLL;
          }
        }
        v10 ^= (v10 ^ v17) & 0xFFFFFFFFF000LL;
        MiInsertTbFlushEntry((__int64)&v26, (__int64)(v5 << 25) >> 16, 1LL, 0);
        *(_QWORD *)v5 = v10;
        if ( v16 <= 0x7F8 )
          MiWritePteShadow(v5, v10);
      }
      v5 += 8LL;
      v16 += 8LL;
    }
    while ( v5 <= v9 );
    CurrentThread = v24;
    v13 = v25;
  }
  ExReleaseAutoExpandPushLockExclusive(v13, 0LL);
  v22 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v22;
  if ( !v22 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  MiFlushTbList((__int64)&v26);
  return v7;
}
