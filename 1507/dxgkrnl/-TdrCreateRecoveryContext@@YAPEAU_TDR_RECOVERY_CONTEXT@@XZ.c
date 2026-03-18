/*
 * XREFs of ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1C013DC40
 * Callers:
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C015B6CC (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C013CC90 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 */

struct _TDR_RECOVERY_CONTEXT *TdrCreateRecoveryContext(void)
{
  struct _TDR_RECOVERY_CONTEXT *Pool; // rax
  __int64 v1; // rcx
  struct _TDR_RECOVERY_CONTEXT *v2; // rbx
  __int64 v3; // rax

  Pool = (struct _TDR_RECOVERY_CONTEXT *)TdrAllocatePool(0xB40uLL, (POOL_TYPE)512);
  v2 = Pool;
  if ( Pool )
  {
    *((_DWORD *)Pool + 4) = 0;
    *((_DWORD *)Pool + 25) = 0;
    *(_DWORD *)Pool = 1380209782;
    *((_DWORD *)Pool + 24) = 1380209782;
    *((_DWORD *)Pool + 28) = 16;
    *((_DWORD *)Pool + 692) = g_TdrConfig;
    *((_DWORD *)Pool + 693) = dword_1C00470E4;
    *((_DWORD *)Pool + 694) = dword_1C00470F0;
    *((_QWORD *)Pool + 13) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)Pool + 702) = 1380209782;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v3 + 24) = 2880LL;
    WdLogEvent5_WdError(v3);
  }
  return TdrReferenceRecoveryContext(v2);
}
