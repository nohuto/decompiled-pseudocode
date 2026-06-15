/*
 * XREFs of ?GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x14003AD70
 * Callers:
 *     <none>
 * Callees:
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x14003A4A4 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXE_K111@Z @ 0x14003E36C (-AEWMILOG_POSITION@@YAXKPEAXE_K111@Z.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::GetCurrentPadding(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  struct SharedMessageQueueItem *v5; // rcx
  double v6; // xmm0_8
  unsigned __int64 v7; // [rsp+20h] [rbp-28h]
  struct SharedMessageQueueItem *v8; // [rsp+50h] [rbp+8h] BYREF

  if ( CCrossProcessBaseEndpoint::PeekNextTimestampMessage((CCrossProcessClientInputEndpoint *)((char *)this - 8), &v8) )
  {
    v5 = v8;
    v6 = *((float *)this + 31);
    *((_DWORD *)this + 107) = *((_DWORD *)v8 + 14);
    *a2 = (unsigned int)(int)((double)*((int *)v5 + 14) * 10000000.0 / v6 + 0.5);
  }
  else
  {
    *((_DWORD *)this + 107) = 0;
    *a2 = 0LL;
  }
  v7 = *(unsigned int *)(*((_QWORD *)this + 7) + 4LL);
  AEWMILOG_POSITION(v7, (char *)this - 8, 3u, **((unsigned int **)this + 7), v7, *a2, 0LL);
}
