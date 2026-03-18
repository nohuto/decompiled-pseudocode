/*
 * XREFs of MiAweViewInserter @ 0x1406A5BEC
 * Callers:
 *     MiInsertPrivateVad @ 0x14007CE90 (MiInsertPrivateVad.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14010E920 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14010FFE0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiPhysicalViewCompareVpn @ 0x140224884 (MiPhysicalViewCompareVpn.c)
 */

void __fastcall MiAweViewInserter(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rbx
  _DWORD *v7; // r14
  unsigned __int64 *v8; // r15
  _QWORD *v9; // rbx
  bool v10; // r8
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rax
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 1032);
  --CurrentThread->SpecialApcDisable;
  v7 = (_DWORD *)(v6 + 8);
  ExAcquireAutoExpandPushLockExclusive(v6 + 8, 0LL, a3, a4);
  v8 = (unsigned __int64 *)(v6 + 24);
  v9 = *(_QWORD **)(v6 + 24);
  v10 = 0;
  v11 = *(unsigned int *)(*(_QWORD *)(a2 + 24) + 24LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 24)
                                                                                               + 32LL) << 32);
  if ( v9 )
  {
    while ( 1 )
    {
      if ( (int)MiPhysicalViewCompareVpn(v11, (__int64)v9) < 0 )
      {
        v12 = (_QWORD *)*v9;
        if ( !*v9 )
        {
          v10 = 0;
          break;
        }
      }
      else
      {
        v12 = (_QWORD *)v9[1];
        if ( !v12 )
        {
          v10 = 1;
          break;
        }
      }
      v9 = v12;
    }
  }
  RtlAvlInsertNodeEx(v8, (unsigned __int64)v9, v10, a2);
  ExReleaseAutoExpandPushLockExclusive(v7, 0LL);
  v13 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v13;
  if ( !v13 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}
