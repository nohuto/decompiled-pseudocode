/*
 * XREFs of ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C013E1D0
 * Callers:
 *     ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1C013DC40 (-TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013E1F0 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

struct _TDR_RECOVERY_CONTEXT *__fastcall TdrReferenceRecoveryContext(struct _TDR_RECOVERY_CONTEXT *a1)
{
  if ( a1 && _InterlockedAdd((volatile signed __int32 *)a1 + 716, 1u) <= 0 )
    return 0LL;
  return a1;
}
