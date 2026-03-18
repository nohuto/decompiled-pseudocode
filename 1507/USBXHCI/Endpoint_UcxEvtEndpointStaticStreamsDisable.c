/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001B980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0003980 (WPP_RECORDER_SF_ddd.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0005400 (CommonBuffer_AcquireBuffer.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0013F64 (CommonBuffer_ReleaseBuffer.c)
 *     TR_Enable_Internal @ 0x1C0020404 (TR_Enable_Internal.c)
 *     TR_GetDequeuePointer @ 0x1C00206B8 (TR_GetDequeuePointer.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C002FC4C (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsDisable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  _DWORD *v6; // rdi
  __int64 v7; // rbx
  KSPIN_LOCK *v8; // r14
  _QWORD *v9; // rax
  POOL_TYPE v10; // ecx
  PVOID PoolWithTag; // rax
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  _QWORD v22[5]; // [rsp+40h] [rbp-58h] BYREF

  memset(v22, 0, sizeof(v22));
  LOWORD(v22[0]) = 40;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    a3,
    v22);
  v5 = v22[1];
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                   a2,
                   off_1C00402C0);
  v7 = *(_QWORD *)v6;
  v8 = *(KSPIN_LOCK **)(**(_QWORD **)v6 + 88LL);
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)v6 + 80LL),
    4u,
    0xCu,
    0x6Bu,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 135LL),
    *(_DWORD *)(*(_QWORD *)v6 + 144LL),
    v6[2]);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                   a3,
                   off_1C0040068);
  v10 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  *v9 = v6;
  PoolWithTag = ExAllocatePoolWithTag(v10, 0x80uLL, 0x49434858u);
  *(_QWORD *)(v7 + 128) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x80uLL);
    **(_QWORD **)(v7 + 128) = v7;
    *(_DWORD *)(*(_QWORD *)(v7 + 128) + 8LL) = 1;
    *(_DWORD *)(*(_QWORD *)(v7 + 128) + 12LL) = 1;
    *(_QWORD *)(*(_QWORD *)(v7 + 128) + 32LL) = CommonBuffer_AcquireBuffer(
                                                  v8,
                                                  16 * (unsigned int)(1LL << ((unsigned __int8)v6[3] + 1)),
                                                  v7,
                                                  0x31747045u);
    v13 = *(_QWORD *)(v7 + 128);
    if ( *(_QWORD *)(v13 + 32) )
    {
      v14 = *(_QWORD *)(v7 + 88);
      *(_QWORD *)(v7 + 136) = v13;
      *(_QWORD *)(v13 + 40) = v14;
      v15 = TR_Enable_Internal(*(_QWORD *)(v7 + 88));
      v12 = v15;
      if ( v15 >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 136) + 32LL) + 16LL) + 16LL) = TR_GetDequeuePointer(*(_QWORD *)(v7 + 88));
        result = UsbDevice_ReconfigureEndpoint(
                   *(_QWORD *)(v7 + 16),
                   v7,
                   Endpoint_EndpointStaticStreamsDisableCompletion,
                   a3);
        v12 = 0;
      }
      else
      {
        LODWORD(v21) = v15;
        LODWORD(v20) = *(_DWORD *)(v7 + 144);
        LODWORD(v19) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
        result = WPP_RECORDER_SF_ddd(
                   *(_QWORD *)(v7 + 80),
                   2u,
                   0xCu,
                   0x6Cu,
                   (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
                   v19,
                   v20,
                   v21);
        *(_DWORD *)(v5 + 4) = -1073737728;
      }
      if ( v12 >= 0 )
        return result;
      goto LABEL_9;
    }
  }
  else
  {
    *(_DWORD *)(v5 + 4) = -1073737728;
  }
  v12 = -1073741670;
LABEL_9:
  v17 = *(_QWORD *)(v7 + 128);
  if ( v17 )
  {
    v18 = *(_QWORD *)(v17 + 32);
    if ( v18 )
      CommonBuffer_ReleaseBuffer((__int64)v8, v18);
    ExFreePoolWithTag(*(PVOID *)(v7 + 128), 0x49434858u);
    *(_QWORD *)(v7 + 128) = 0LL;
  }
  return (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           a3,
           (unsigned int)v12);
}
