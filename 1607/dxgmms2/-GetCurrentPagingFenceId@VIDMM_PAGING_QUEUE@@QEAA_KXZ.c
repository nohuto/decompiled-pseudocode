/*
 * XREFs of ?GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ @ 0x1C0045B44
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006320 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_PAGING_QUEUE::GetCurrentPagingFenceId(VIDMM_PAGING_QUEUE *this)
{
  return *((_QWORD *)this + 12);
}
