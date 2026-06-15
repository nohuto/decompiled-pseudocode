/*
 * XREFs of ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140039E60
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140039218 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x1400392F4 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     WPP_SF_s @ 0x140039AAC (WPP_SF_s.c)
 *     Template_pq @ 0x14003A324 (Template_pq.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x14003C104 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x14003C358 (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x14003C3D0 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::GetInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  char *v3; // rsi
  unsigned __int8 v7; // r8
  UINT32 u32ValidFrameCount; // r15d
  unsigned int v9; // ecx
  unsigned __int8 v10; // r8
  unsigned int v11; // ecx
  __int64 v12; // rcx
  int *v13; // r8
  __int64 v14; // rdx
  struct SharedMessageQueueItem *v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+78h] [rbp+10h] BYREF
  struct SharedMessageQueueItem *v19; // [rsp+80h] [rbp+18h] BYREF

  v3 = (char *)this - 424;
  AEWMILOG_DATA(
    (unsigned int)this,
    (char *)this - 424,
    (unsigned __int8)a3,
    0xDu,
    a2->u32ValidFrameCount,
    a2->u32BufferFlags,
    0LL);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  *((_DWORD *)this + 4) = 2;
  if ( a3 )
  {
    memset_0(a3, 0, sizeof(struct AE_CURRENT_POSITION));
    a3->Flag = POSITION_INVALID;
  }
  if ( !CCrossProcessBaseEndpoint::IsValidFlags(
          (CCrossProcessBaseEndpoint *)v3,
          *(_DWORD *)(*((_QWORD *)this - 45) + 156LL),
          v7) )
  {
    AEWMILOG_SECURITY(v9, v3, v10);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 45) + 156LL), 0xFFFFFFFE);
    goto LABEL_5;
  }
  if ( !u32ValidFrameCount )
    goto LABEL_5;
  if ( !CCrossProcessBaseEndpoint::PeekNextTimestampMessage((CCrossProcessBaseEndpoint *)v3, &v19) )
  {
    AEWMILOG_GLITCH(v11, v3, v10, 2u, 0LL, 0LL, 0LL, 0LL);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      Template_pq(v12, &EVT_GLITCH_CP_CLIENT_INPUT_NO_MESSAGES, v3);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        &WPP_a8571901f4c33f060e5534b2941ccee6_Traceguids,
        "Security failure - memory overwrite detected.");
    }
    v17 = 1;
    v13 = &v17;
    v14 = 0LL;
LABEL_16:
    (**((void (__fastcall ***)(char *, __int64, int *))this - 18))((char *)this - 144, v14, v13);
    goto LABEL_5;
  }
  v15 = v19;
  if ( *((_DWORD *)v19 + 14) != u32ValidFrameCount )
  {
    AEWMILOG_GLITCH(v11, v3, v10, 2u, 1uLL, 1uLL, 1uLL, 1uLL);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      Template_pq(v16, &EVT_GLITCH_CP_CLIENT_INPUT_SIZE_MISMATCH, v3);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xBu,
        &WPP_a8571901f4c33f060e5534b2941ccee6_Traceguids,
        "Security failure - memory overwrite detected.");
    }
    v18 = 1;
    v13 = &v18;
    v14 = 1LL;
    goto LABEL_16;
  }
  if ( a3 )
  {
    *(_OWORD *)&a3->u64DevicePosition = *((_OWORD *)v19 + 1);
    *(_OWORD *)&a3->u64PaddingFrames = *((_OWORD *)v15 + 2);
    *(_QWORD *)&a3->f32FramesPerSecond = *((_QWORD *)v15 + 6);
  }
  if ( *((_DWORD *)v15 + 2) != 2 )
  {
    a2->u32BufferFlags = BUFFER_VALID;
    a2->pBuffer = *((_QWORD *)this - 45) + *((unsigned int *)v15 + 1);
    *((_DWORD *)this + 4) = 0;
    goto LABEL_6;
  }
  *((_DWORD *)this + 4) = 0;
LABEL_5:
  _InterlockedExchange((volatile __int32 *)this - 72, 1);
  a2->pBuffer = *((_QWORD *)this - 41);
  a2->u32BufferFlags = BUFFER_SILENT;
LABEL_6:
  AEWMILOG_DATA(a2->u32ValidFrameCount, v3, v10, 0xEu, a2->u32ValidFrameCount, 0LL, a2->u32BufferFlags);
}
