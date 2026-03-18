/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00221B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     Command_SendCommand @ 0x1C001BD2C (Command_SendCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C001C6D0 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D504 (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0021D74 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0023C1C (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

void __fastcall Endpoint_OnCancelEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned __int8 v5; // al
  __int64 DequeuePointer; // rax
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+38h] [rbp-10h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 56);
  v3 = *(_QWORD *)(*v2 + 88);
  v4 = *(_QWORD *)(*v2 + 112);
  if ( a2 == 3 )
  {
    v10 = *((_DWORD *)v2 + 36);
    v7 = *(unsigned __int8 *)(v2[2] + 135);
    WPP_RECORDER_SF_dd(v2[10], 4u, 0xCu, 0x44u, (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids, v7, v10);
  }
  else
  {
    v5 = *(_BYTE *)(a1 + 68);
    if ( v5 == 1 )
    {
      v12 = *((_DWORD *)v2 + 36);
      v9 = *(unsigned __int8 *)(v2[2] + 135);
      WPP_RECORDER_SF_dd(v2[10], 4u, 0xCu, 0x46u, (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids, v9, v12);
      Endpoint_SetUpConfigureEndpointCommand(
        (int)v2,
        0,
        (int)Endpoint_OnCancelEndpointConfigureCompletion,
        (int)v2,
        v2[30],
        0LL,
        (__int64)&v14,
        v2 + 20);
      DequeuePointer = Endpoint_GetDequeuePointer((__int64)v2, 0);
      *(_QWORD *)(v14 + 8) = DequeuePointer;
      Command_SendCommand(v4, (__int64)(v2 + 20));
      return;
    }
    v13 = v5;
    v11 = *((_DWORD *)v2 + 36);
    v8 = *(unsigned __int8 *)(v2[2] + 135);
    WPP_RECORDER_SF_ddL(
      v2[10],
      2u,
      0xCu,
      0x45u,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v8,
      v11,
      v13);
    Controller_ReportFatalError(*v2, 2, 4119, v2[2], (__int64)v2, 0LL);
  }
  CommonBuffer_ReleaseBuffer(v3, v2[30]);
  v2[30] = 0LL;
  _m_prefetchw(v2 + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)v2 + 8, 2u) & 2) == 0 )
    ESM_AddEvent(v2 + 34);
}
