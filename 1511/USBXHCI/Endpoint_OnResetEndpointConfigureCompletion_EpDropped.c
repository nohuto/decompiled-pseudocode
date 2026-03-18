/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0022CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     Command_SendCommand @ 0x1C001BD2C (Command_SendCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C001C6D0 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D504 (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0021D74 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C0021DC4 (Endpoint_InitializeTransferRing.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0023C1C (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

void __fastcall Endpoint_OnResetEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 **v2; // rsi
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int8 v7; // al
  unsigned int i; // ebx
  __int64 DequeuePointer; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+30h] [rbp-18h]
  int v17; // [rsp+30h] [rbp-18h]
  int v18; // [rsp+38h] [rbp-10h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(__int64 ***)(a1 + 56);
  v3 = *v2;
  v4 = **v2;
  v5 = *(_QWORD *)(v4 + 88);
  v6 = *(_QWORD *)(v4 + 112);
  if ( a2 == 3 )
  {
    v15 = *((_DWORD *)v3 + 36);
    v12 = *(unsigned __int8 *)(v3[2] + 135);
    WPP_RECORDER_SF_dd(v3[10], 4u, 0xCu, 0x31u, (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids, v12, v15);
    goto LABEL_5;
  }
  v7 = *(_BYTE *)(a1 + 68);
  if ( v7 != 1 )
  {
    v18 = v7;
    v16 = *((_DWORD *)v3 + 36);
    v13 = *(unsigned __int8 *)(v3[2] + 135);
    WPP_RECORDER_SF_ddL(
      v3[10],
      2u,
      0xCu,
      0x32u,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v13,
      v16,
      v18);
    Controller_ReportFatalError(*v3, 2, 4119, v3[2], (__int64)v3, 0LL);
LABEL_5:
    CommonBuffer_ReleaseBuffer(v5, (__int64)v2[1]);
    v2[1] = 0LL;
    *((_DWORD *)v3 + 66) = 0;
    _m_prefetchw(v3 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u) & 2) == 0 )
      ESM_AddEvent(v3 + 34);
    return;
  }
  v17 = *((_DWORD *)v3 + 36);
  v14 = *(unsigned __int8 *)(v3[2] + 135);
  WPP_RECORDER_SF_dd(v3[10], 4u, 0xCu, 0x33u, (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids, v14, v17);
  for ( i = 1;
        i <= *(_DWORD *)(v3[17] + 8);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3[17] + 32) + 16LL) + 16 * v10) = DequeuePointer )
  {
    Endpoint_InitializeTransferRing((__int64)v3, i);
    DequeuePointer = Endpoint_GetDequeuePointer((__int64)v3, i);
    v10 = i++;
  }
  Endpoint_SetUpConfigureEndpointCommand(
    (int)v3,
    0,
    (int)Endpoint_OnResetEndpointConfigureCompletion,
    (int)v2,
    (__int64)v2[1],
    0LL,
    (__int64)&v19,
    v2 + 2);
  v11 = Endpoint_GetDequeuePointer((__int64)v3, 0);
  *(_QWORD *)(v19 + 8) = v11;
  Command_SendCommand(v6, (__int64)(v2 + 2));
}
