/*
 * XREFs of ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x14003AE60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x14003A488 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXE_K111@Z @ 0x14003E200 (-AEWMILOG_POSITION@@YAXKPEAXE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetDevicePosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  struct SharedMessageQueueItem *v7; // rcx
  unsigned __int64 v8; // rax
  struct SharedMessageQueueItem *v10; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
  {
    v10 = 0LL;
    if ( !CCrossProcessBaseEndpoint::PeekNextTimestampMessage(
            (CCrossProcessClientInputEndpoint *)((char *)this - 392),
            &v10) )
    {
      v7 = v10;
      *a2 = *((_QWORD *)v10 + 2);
      if ( a3 )
      {
        v8 = *((_QWORD *)v7 + 5);
        *a3 = v8;
      }
      else
      {
        v8 = 0LL;
      }
      AEWMILOG_POSITION(*a2, 0LL, 7u, 0LL, *a2, 0LL, v8);
    }
    *((_QWORD *)this - 28) = *a2;
  }
  else
  {
    v3 = -2147467261;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xEu,
        (__int64)&WPP_63ffc0ce192fa0cd45030c7069b55dcb_Traceguids,
        -2147467261);
    }
  }
  return v3;
}
