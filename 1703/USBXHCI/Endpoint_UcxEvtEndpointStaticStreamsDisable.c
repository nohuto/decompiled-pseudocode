/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0021640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0007F60 (WPP_RECORDER_SF_ddd.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0008830 (CommonBuffer_AcquireBuffer.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019CD4 (CommonBuffer_ReleaseBuffer.c)
 *     TR_Enable_Internal @ 0x1C00253CC (TR_Enable_Internal.c)
 *     TR_GetDequeuePointer @ 0x1C002549C (TR_GetDequeuePointer.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C002E144 (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsDisable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  _DWORD *v6; // rdi
  __int64 v7; // rbx
  KSPIN_LOCK *v8; // r14
  PVOID PoolWithTag; // rax
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  _QWORD v20[5]; // [rsp+40h] [rbp-58h] BYREF

  memset(v20, 0, sizeof(v20));
  LOWORD(v20[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a3,
    v20);
  v5 = v20[1];
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a2,
                   off_1C00452C8);
  v7 = *(_QWORD *)v6;
  v8 = *(KSPIN_LOCK **)(**(_QWORD **)v6 + 88LL);
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)v6 + 80LL),
    4u,
    0xCu,
    0x6Cu,
    (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 135LL),
    *(_DWORD *)(*(_QWORD *)v6 + 144LL),
    v6[2]);
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
               WdfDriverGlobals,
               a3,
               off_1C0045070) = v6;
  PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0x80uLL, 0x49434858u);
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
    v11 = *(_QWORD *)(v7 + 128);
    if ( *(_QWORD *)(v11 + 32) )
    {
      v12 = *(_QWORD *)(v7 + 88);
      *(_QWORD *)(v7 + 136) = v11;
      *(_QWORD *)(v11 + 40) = v12;
      v13 = TR_Enable_Internal(*(_QWORD *)(v7 + 88));
      v10 = v13;
      if ( v13 >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 136) + 32LL) + 16LL) + 16LL) = TR_GetDequeuePointer(*(_QWORD *)(v7 + 88));
        result = UsbDevice_ReconfigureEndpoint(
                   *(_QWORD *)(v7 + 16),
                   v7,
                   Endpoint_EndpointStaticStreamsDisableCompletion,
                   a3);
        v10 = 0;
      }
      else
      {
        LODWORD(v19) = v13;
        LODWORD(v18) = *(_DWORD *)(v7 + 144);
        LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
        result = WPP_RECORDER_SF_ddd(
                   *(_QWORD *)(v7 + 80),
                   2u,
                   0xCu,
                   0x6Du,
                   (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
                   v17,
                   v18,
                   v19);
        *(_DWORD *)(v5 + 4) = -1073737728;
      }
      if ( v10 >= 0 )
        return result;
      goto LABEL_9;
    }
  }
  else
  {
    *(_DWORD *)(v5 + 4) = -1073737728;
  }
  v10 = -1073741670;
LABEL_9:
  v15 = *(_QWORD *)(v7 + 128);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 32);
    if ( v16 )
      CommonBuffer_ReleaseBuffer((__int64)v8, v16);
    ExFreePoolWithTag(*(PVOID *)(v7 + 128), 0x49434858u);
    *(_QWORD *)(v7 + 128) = 0LL;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a3,
           (unsigned int)v10);
}
