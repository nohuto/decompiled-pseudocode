/*
 * XREFs of Endpoint_OnResetEndpointConfigure @ 0x1C0019248
 * Callers:
 *     ESM_ReconfiguringEndpointOnReset @ 0x1C0039730 (ESM_ReconfiguringEndpointOnReset.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0005400 (CommonBuffer_AcquireBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Command_SendCommand @ 0x1C001278C (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0018664 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C00186D4 (Endpoint_InitializeTransferRing.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C001A52C (Endpoint_SetUpConfigureEndpointCommand.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

void __fastcall Endpoint_OnResetEndpointConfigure(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  KSPIN_LOCK *v4; // rbp
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // edx
  __int64 *v9; // rax
  __int64 v10; // rbp
  __int64 DequeuePointer; // rax
  int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v4 = *(KSPIN_LOCK **)(*(_QWORD *)a1 + 88LL);
  v5 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         *(_QWORD *)(a1 + 256),
         off_1C0040068);
  v6 = *(_DWORD *)(a1 + 144);
  if ( (*(_BYTE *)(v3 + 104) & 4) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 16LL) + (((unsigned int)(v6 - 1) + 1LL) << 6);
    v8 = 2112;
  }
  else
  {
    v8 = 1056;
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 16LL) + 32 * ((unsigned int)(v6 - 1) + 1LL);
  }
  v9 = CommonBuffer_AcquireBuffer(v4, v8, a1, 0x32747045u);
  *(_QWORD *)(v5 + 8) = v9;
  if ( v9 )
  {
    v15 = *(_DWORD *)(a1 + 144);
    v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
    if ( *(_BYTE *)(a1 + 37) )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1 + 80),
        4u,
        0xCu,
        0x2Fu,
        (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
        v13,
        v15);
      v10 = v5 + 16;
      Endpoint_SetUpConfigureEndpointCommand(
        a1,
        1,
        (int)Endpoint_OnResetEndpointConfigureCompletion_EpDropped,
        v5,
        *(_QWORD *)(v5 + 8),
        v7,
        0LL,
        (void *)(v5 + 16));
    }
    else
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1 + 80),
        4u,
        0xCu,
        0x30u,
        (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
        v13,
        v15);
      v10 = v5 + 16;
      Endpoint_SetUpConfigureEndpointCommand(
        a1,
        2,
        (int)Endpoint_OnResetEndpointConfigureCompletion,
        v5,
        *(_QWORD *)(v5 + 8),
        v7,
        (__int64)&v16,
        (void *)(v5 + 16));
      Endpoint_InitializeTransferRing(a1, 0);
      DequeuePointer = Endpoint_GetDequeuePointer(a1, 0);
      *(_QWORD *)(v16 + 8) = DequeuePointer;
    }
    Command_SendCommand(v2, v10);
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 144);
    v12 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1 + 80),
      2u,
      0xCu,
      0x2Eu,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v12,
      v14);
    *(_DWORD *)(a1 + 264) = -1073741670;
    ESM_AddEvent((PVOID)(a1 + 272));
  }
}
