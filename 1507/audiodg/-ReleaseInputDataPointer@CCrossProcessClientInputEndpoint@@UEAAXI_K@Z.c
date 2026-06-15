/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x14003B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140039DD4 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14003A360 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     WPP_SF_s @ 0x14003AC48 (WPP_SF_s.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAX@Z @ 0x14003E2B0 (-AEWMILOG_SECURITY@@YAXKPEAX@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXE_K11@Z @ 0x14003E3E0 (-AEWMILOG_DATA@@YAXKPEAXE_K11@Z.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        unsigned int a2)
{
  char *v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v5; // rax
  unsigned int v6; // ecx
  void *v7; // rcx
  _BYTE v8[64]; // [rsp+30h] [rbp-48h] BYREF

  v2 = (char *)this - 416;
  v3 = a2;
  AEWMILOG_DATA((unsigned int)this, (char *)this - 416, 0xFu, a2, 0LL, 0LL);
  v5 = *((_QWORD *)this - 44);
  *((_DWORD *)this + 5) = 0;
  if ( CCrossProcessBaseEndpoint::IsValidFlags((CCrossProcessBaseEndpoint *)v2, *(_DWORD *)(v5 + 156)) )
  {
    if ( !*((_DWORD *)this + 4) )
      v6 = _InterlockedExchangeAdd64(
             (volatile signed __int64 *)(*((_QWORD *)this - 44) + 16LL),
             (unsigned int)(v3 * *((_DWORD *)this - 84)));
  }
  else
  {
    AEWMILOG_SECURITY(v6, v2);
    v6 = WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) )
    {
      WPP_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xCu,
        &WPP_63ffc0ce192fa0cd45030c7069b55dcb_Traceguids,
        "Security failure - memory overwrite detected.");
    }
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 44) + 156LL), 0xFFFFFFFE);
  }
  if ( (_DWORD)v3 )
    CCrossProcessBaseEndpoint::GetNextTimestampMessage(
      (CCrossProcessBaseEndpoint *)v2,
      (struct SharedMessageQueueItem *)v8);
  AEWMILOG_DATA(v6, v2, 0x10u, v3, 0LL, *((int *)this + 4));
  v7 = (void *)*((_QWORD *)this - 2);
  if ( v7 )
    SetEvent(v7);
  *((_DWORD *)this + 4) = 3;
}
