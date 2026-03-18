/*
 * XREFs of ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DAD78
 * Callers:
 *     <none>
 * Callees:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@@Z @ 0x1402529E0 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 SMKM_STORE<SM_TRAITS>::SmStWorkerThread()
{
  return SMKM_STORE<SM_TRAITS>::SmStWorker();
}
