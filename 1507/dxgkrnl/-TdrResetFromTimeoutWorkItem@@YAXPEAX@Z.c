/*
 * XREFs of ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C013E300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C013DB40 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013E1F0 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall TdrResetFromTimeoutWorkItem(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax

  v4 = a1[4];
  v6 = *(_QWORD *)(v4 + 32);
  v7 = *(_QWORD *)(v6 + 1984);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD, struct _KTHREAD *))(*(_QWORD *)(*(_QWORD *)(v7 + 376) + 8LL) + 504LL))(
      *(_QWORD *)(v7 + 384),
      KeGetCurrentThread());
  TdrResetFromTimeout((struct _TDR_RECOVERY_CONTEXT *)v4, a2, a3, a4);
  TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v4, 1, 1);
  v8 = MEMORY[0xFFFFF78000000320];
  v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
  v13[3] = v6;
  v13[4] = v8;
  v13[5] = KeGetCurrentThread();
  v13[6] = v4;
  WdLogEvent5_WdWarning(v13);
  operator delete(a1);
}
