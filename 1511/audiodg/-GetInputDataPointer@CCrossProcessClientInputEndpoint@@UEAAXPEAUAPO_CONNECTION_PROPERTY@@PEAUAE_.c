/*
 * XREFs of ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14003AF20
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140019034 (memset_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14003A3E0 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x14003A4A4 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     WPP_SF_s @ 0x14003AC20 (WPP_SF_s.c)
 *     Template_pq @ 0x14003B3C8 (Template_pq.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z @ 0x14003E050 (-AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXE_K11@Z @ 0x14003E15C (-AEWMILOG_DATA@@YAXKPEAXE_K11@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAX@Z @ 0x14003E41C (-AEWMILOG_SECURITY@@YAXKPEAX@Z.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::GetInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  char *v3; // r15
  UINT32 u32ValidFrameCount; // edi
  unsigned int v8; // ecx
  __int64 v9; // rcx
  struct SharedMessageQueueItem *v10; // rax
  __int64 v11; // rcx
  int v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF
  struct SharedMessageQueueItem *v14; // [rsp+80h] [rbp+18h] BYREF

  v3 = (char *)this - 416;
  AEWMILOG_DATA((unsigned int)this, (char *)this - 416, 0xDu, a2->u32ValidFrameCount, a2->u32BufferFlags, 0LL);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  *((_DWORD *)this + 4) = 2;
  if ( a3 )
  {
    memset_0(a3, 0, sizeof(struct AE_CURRENT_POSITION));
    a3->Flag = POSITION_INVALID;
  }
  if ( CCrossProcessBaseEndpoint::IsValidFlags(
         (CCrossProcessBaseEndpoint *)v3,
         *(_DWORD *)(*((_QWORD *)this - 44) + 156LL)) )
  {
    if ( u32ValidFrameCount )
    {
      if ( CCrossProcessBaseEndpoint::PeekNextTimestampMessage((CCrossProcessBaseEndpoint *)v3, &v14) )
      {
        v10 = v14;
        if ( *((_DWORD *)v14 + 14) == u32ValidFrameCount )
        {
          if ( a3 )
          {
            *(_OWORD *)&a3->u64DevicePosition = *((_OWORD *)v14 + 1);
            *(_OWORD *)&a3->u64PaddingFrames = *((_OWORD *)v10 + 2);
            *(_QWORD *)&a3->f32FramesPerSecond = *((_QWORD *)v10 + 6);
          }
          if ( *((_DWORD *)v10 + 2) != 2 )
          {
            a2->u32BufferFlags = BUFFER_VALID;
            a2->pBuffer = *((_QWORD *)this - 44) + *((unsigned int *)v10 + 1);
            *((_DWORD *)this + 4) = 0;
            goto LABEL_6;
          }
          *((_DWORD *)this + 4) = 0;
        }
        else
        {
          AEWMILOG_GLITCH(v8, v3, 2u, 1uLL, 1uLL, 1uLL, 1uLL);
          if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
            Template_pq(v11, &EVT_GLITCH_CP_CLIENT_INPUT_SIZE_MISMATCH, v3);
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
          {
            WPP_SF_s(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0xBu,
              &WPP_53874a42835c40d8eef9b8297bd9f709_Traceguids,
              "Security failure - memory overwrite detected.");
          }
          v13 = 1;
          (**((void (__fastcall ***)(char *, __int64, int *))this - 17))((char *)this - 136, 1LL, &v13);
        }
      }
      else
      {
        AEWMILOG_GLITCH(v8, v3, 2u, 0LL, 0LL, 0LL, 0LL);
        if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
          Template_pq(v9, &EVT_GLITCH_CP_CLIENT_INPUT_NO_MESSAGES, v3);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          WPP_SF_s(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xAu,
            &WPP_53874a42835c40d8eef9b8297bd9f709_Traceguids,
            "Security failure - memory overwrite detected.");
        }
        v12 = 1;
        (**((void (__fastcall ***)(char *, _QWORD, int *))this - 17))((char *)this - 136, 0LL, &v12);
      }
    }
  }
  else
  {
    AEWMILOG_SECURITY(v8, v3);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 44) + 156LL), 0xFFFFFFFE);
  }
  _InterlockedExchange((volatile __int32 *)this - 70, 1);
  a2->pBuffer = *((_QWORD *)this - 40);
  a2->u32BufferFlags = BUFFER_SILENT;
LABEL_6:
  AEWMILOG_DATA(v8, v3, 0xEu, a2->u32ValidFrameCount, 0LL, a2->u32BufferFlags);
}
