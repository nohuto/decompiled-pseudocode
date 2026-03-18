/*
 * XREFs of MiRemoveUserPhysicalPagesVad @ 0x1406A6148
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiInitializeTbFlushList @ 0x1401088BC (MiInitializeTbFlushList.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14010E920 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14010FFE0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __fastcall MiRemoveUserPhysicalPagesVad(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // r15
  __int64 v4; // r9
  _DWORD *v5; // r12
  __int64 v6; // r8
  unsigned __int64 PteShadow; // rbx
  BOOL v8; // r14d
  __int16 v9; // ax
  unsigned __int64 v10; // [rsp+20h] [rbp-108h] BYREF
  struct _KTHREAD *v11; // [rsp+28h] [rbp-100h]
  _BYTE v12[192]; // [rsp+30h] [rbp-F8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = CurrentThread;
  if ( CurrentThread->ApcState.Process[2].Affinity.Bitmap[4] )
  {
    v2 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
       - 0x98000000000LL;
    v3 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
       - 0x98000000000LL;
    MiInitializeTbFlushList((__int64)v12, 1, 20);
    --CurrentThread->SpecialApcDisable;
    v5 = (_DWORD *)(v4 + 8);
    ExAcquireAutoExpandPushLockExclusive(v4 + 8, 0LL, v6, v4);
    if ( v2 <= v3 )
    {
      do
      {
        PteShadow = *(_QWORD *)v2;
        v8 = MiPteInShadowRange(v2);
        if ( v8 )
          PteShadow = MiReadPteShadow(v2, PteShadow);
        v10 = PteShadow;
        if ( (PteShadow & 1) != 0 )
        {
          if ( MiPteInShadowRange((__int64)&v10) )
            PteShadow = MiReadPteShadow((__int64)&v10, PteShadow);
          _InterlockedAnd64(
            (volatile signed __int64 *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF8LL),
            0LL);
          MiInsertTbFlushEntry((__int64)v12, (__int64)(v2 << 25) >> 16, 1LL, 0);
          *(_QWORD *)v2 = 0LL;
          if ( v8 )
            MiWritePteShadow(v2, 0LL);
        }
        v2 += 8LL;
      }
      while ( v2 <= v3 );
      CurrentThread = v11;
    }
    MiFlushTbList((__int64)v12);
    ExReleaseAutoExpandPushLockExclusive(v5, 0LL);
    v9 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v9;
    if ( !v9 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
}
