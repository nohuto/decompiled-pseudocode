/*
 * XREFs of ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C0144750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0143F80 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0144640 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall TdrResetFromTimeoutWorkItem(_QWORD *a1)
{
  ULONG_PTR v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax

  v1 = a1[4];
  v3 = *(_QWORD *)(v1 + 32);
  v4 = *(_QWORD *)(v3 + 1992);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD, struct _KTHREAD *))(*(_QWORD *)(*(_QWORD *)(v4 + 400) + 8LL) + 504LL))(
      *(_QWORD *)(v4 + 408),
      KeGetCurrentThread());
  TdrResetFromTimeout(v1);
  TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v1, 1, 1);
  v5 = MEMORY[0xFFFFF78000000320];
  v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
  v10[3] = v3;
  v10[4] = v5;
  v10[5] = KeGetCurrentThread();
  v10[6] = v1;
  WdLogEvent5_WdWarning(v10);
  operator delete(a1);
}
