/*
 * XREFs of VidSchSignalPagingFences @ 0x1C0044B54
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003369C (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005320 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C001D100 (VidSchSignalSyncObjectsFromCpu.c)
 */

__int64 __fastcall VidSchSignalPagingFences(__int64 a1, char *a2, unsigned __int64 *a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax

  if ( VidSchIsTDRPending(a1) )
  {
    result = VidSchSignalSyncObjectsFromCpu(1LL, (__int64)a2, 0LL, a3);
    v12 = (int)result;
    if ( (int)result < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v13 + 24) = v12;
      return WdLogEvent5_WdError(v13);
    }
  }
  else
  {
    if ( a5 == -1 )
    {
      v8 = *(unsigned int *)(a1 + 52);
      v9 = *(_QWORD *)(a1 + 192);
    }
    else
    {
      v8 = 1LL;
      v9 = *(_QWORD *)(a1 + 192) + 8LL * a5;
    }
    return VidSchSignalSyncObjectsFromGpu(v8, v9, 1LL, a2, 0, a3);
  }
  return result;
}
