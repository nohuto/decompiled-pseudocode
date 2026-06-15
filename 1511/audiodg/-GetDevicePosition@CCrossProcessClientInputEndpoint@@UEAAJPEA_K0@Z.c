/*
 * XREFs of ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x14003AE30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x14003A4A4 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXE_K111@Z @ 0x14003E36C (-AEWMILOG_POSITION@@YAXKPEAXE_K111@Z.c)
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
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_53874a42835c40d8eef9b8297bd9f709_Traceguids,
        -2147467261);
    }
  }
  return v3;
}
