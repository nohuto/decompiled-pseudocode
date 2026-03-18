/*
 * XREFs of VidSchSignalPagingFences @ 0x1C00631E0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0008030 (VidSchSignalSyncObjectsFromGpu.c)
 */

__int64 __fastcall VidSchSignalPagingFences(__int64 a1, char *a2, unsigned __int64 *a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // r10d
  _QWORD *v7; // rdx

  if ( a5 == -1 )
  {
    v6 = *(_DWORD *)(a1 + 52);
    v7 = *(_QWORD **)(a1 + 200);
  }
  else
  {
    v6 = 1;
    v7 = (_QWORD *)(*(_QWORD *)(a1 + 200) + 8LL * a5);
  }
  return VidSchSignalSyncObjectsFromGpu(v6, v7, 1LL, a2, 0, a3);
}
