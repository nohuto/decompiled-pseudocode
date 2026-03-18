/*
 * XREFs of TdrBugcheckOnTimeout @ 0x1C013E8E0
 * Callers:
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0127150 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0128548 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C013DDAC (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013DFD0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013E1F0 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013E2A0 (-TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1C013E680 (-Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C015B6CC (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013DE8C (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013E408 (-TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall __noreturn TdrBugcheckOnTimeout(ULONG_PTR BugCheckParameter1, int a2, int a3)
{
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v5; // rbp
  struct _TDR_RECOVERY_CONTEXT *v6; // rcx
  unsigned int v7; // eax
  PVOID PoolWithTag; // rax
  __int64 v9; // rdi
  int v10; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  void *BugCheckParameter2; // [rsp+40h] [rbp+8h]

  BugCheckParameter4 = a3;
  v5 = a2;
  BugCheckParameter2 = (void *)TdrGetDbgOwnerTag((const struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
  if ( !BugCheckParameter2 || BugCheckParameter2 == (void *)-1LL )
    BugCheckParameter2 = retaddr;
  if ( v6 )
  {
    TdrUpdateDbgBuffer(v6);
    if ( *(_QWORD *)(BugCheckParameter1 + 2824) )
    {
      if ( *(_QWORD *)(BugCheckParameter1 + 2832) )
      {
        v7 = *(_DWORD *)(BugCheckParameter1 + 2832);
        if ( v7 )
        {
          if ( v7 < 0x1000 )
            v7 = 4096;
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v7, 0x52445476u);
          v9 = (__int64)PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, *(const void **)(BugCheckParameter1 + 2824), *(_QWORD *)(BugCheckParameter1 + 2832));
            v10 = *(_DWORD *)(BugCheckParameter1 + 2832);
            if ( v10 )
            {
              qword_1C0047D58 = v9;
              dword_1C0047D54 = v10;
            }
            WdDbgReportCancel(*(_QWORD *)(BugCheckParameter1 + 2816));
          }
        }
      }
    }
  }
  KeBugCheckEx(0x116u, BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, v5, BugCheckParameter4);
}
