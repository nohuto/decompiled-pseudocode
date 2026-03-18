/*
 * XREFs of ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C0087D00
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00124C0 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS::SafeDetach(VIDMM_PROCESS *this, struct _KAPC_STATE *a2)
{
  KeUnstackDetachProcess(a2);
}
