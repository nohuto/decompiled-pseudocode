/*
 * XREFs of ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C0167480
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C00E09D0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0166C60 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0166ED0 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0167350 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall TdrResetFromTimeoutWorkItem(_QWORD *a1)
{
  ULONG_PTR v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rcx
  struct _KTHREAD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax

  v1 = a1[4];
  v3 = *(_QWORD *)(v1 + 32);
  TdrResetFromTimeout(v1);
  v5 = *(struct _KTHREAD **)(v1 + 2896);
  if ( !v5 || KeGetCurrentThread() == v5 )
  {
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v1, 1, 1);
    v7 = MEMORY[0xFFFFF78000000320];
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    v12[3] = v3;
    v12[4] = v7;
    v12[5] = KeGetCurrentThread();
    v12[6] = v1;
    WdLogEvent5_WdWarning(v12);
  }
  else
  {
    v6 = WdLogNewEntry5_WdEvent(v4);
    *(_QWORD *)(v6 + 24) = 2648LL;
    WdLogEvent5_WdEvent(v6);
  }
  if ( *(struct _KTHREAD **)(v1 + 2896) != KeGetCurrentThread() )
  {
    TdrDereferenceRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v1, 0);
    operator delete(a1);
  }
}
