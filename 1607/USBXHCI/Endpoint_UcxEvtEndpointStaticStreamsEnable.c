/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0025530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BE0 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0008CB4 (WPP_RECORDER_SF_dddd.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009010 (CommonBuffer_AcquireBuffer.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D968 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C001DA50 (CommonBuffer_ReleaseBuffers.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0022364 (Endpoint_GetDequeuePointer.c)
 *     TR_Enable_Internal @ 0x1C0028DC4 (TR_Enable_Internal.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C003143C (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsEnable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rbx
  KSPIN_LOCK *v8; // r13
  unsigned int v9; // edx
  __int64 *v10; // rax
  _QWORD *v11; // rdx
  int v12; // ebp
  unsigned int v13; // esi
  __int64 DequeuePointer; // rax
  __int64 v15; // r8
  unsigned int i; // r14d
  __int64 v18; // rsi
  __int64 v19; // r15
  _QWORD *v20; // rdx
  struct _MDL *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // [rsp+28h] [rbp-A0h]
  __int64 v24; // [rsp+30h] [rbp-98h]
  __int64 v25; // [rsp+38h] [rbp-90h]
  int v26; // [rsp+50h] [rbp-78h] BYREF
  int v27; // [rsp+54h] [rbp-74h] BYREF
  _QWORD v28[5]; // [rsp+58h] [rbp-70h] BYREF

  memset(v28, 0, sizeof(v28));
  LOWORD(v28[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a3,
    v28);
  v5 = v28[1];
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C00432C8);
  v7 = *(_QWORD *)v6;
  v8 = *(KSPIN_LOCK **)(**(_QWORD **)v6 + 88LL);
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)v6 + 80LL),
    4u,
    0xCu,
    0x65u,
    (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 135LL),
    *(_DWORD *)(*(_QWORD *)v6 + 144LL),
    *(_DWORD *)(v6 + 8));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1304))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL),
    0LL,
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, int *, int *))(WdfFunctions_01015 + 1224))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL),
    &v27,
    &v26);
  if ( v27 || v26 )
  {
    LODWORD(v25) = v27;
    LODWORD(v24) = *(_DWORD *)(v7 + 144);
    LODWORD(v23) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v7 + 80),
      2u,
      0xCu,
      0x66u,
      (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
      v23,
      v24,
      v25,
      v26);
    *(_DWORD *)(v5 + 4) = -2147482880;
    v12 = -1073741811;
  }
  else
  {
    v9 = *(_DWORD *)(v6 + 8);
    if ( v9 && v9 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 80LL) + 112LL) )
    {
      *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a3,
                   off_1C0043070) = v6;
      v10 = CommonBuffer_AcquireBuffer(
              v8,
              16 * (unsigned int)(1LL << ((unsigned __int8)*(_DWORD *)(v6 + 12) + 1)),
              v7,
              0x31747045u);
      *(_QWORD *)(v6 + 32) = v10;
      if ( v10 )
      {
        *(_QWORD *)(v7 + 136) = v6;
        v13 = 1;
        if ( !*(_DWORD *)(v6 + 8) )
          return UsbDevice_ReconfigureEndpoint(
                   *(_QWORD *)(v7 + 16),
                   v7,
                   Endpoint_EndpointStaticStreamsEnableCompletion,
                   a3);
        while ( 1 )
        {
          v12 = TR_Enable_Internal(*(_QWORD *)(88LL * (v13 - 1) + *(_QWORD *)(v7 + 136) + 40));
          if ( v12 < 0 )
            break;
          DequeuePointer = Endpoint_GetDequeuePointer(v7, v13);
          v15 = v13++;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 136) + 32LL) + 16LL) + 16 * v15) = DequeuePointer;
          if ( v13 > *(_DWORD *)(v6 + 8) )
            return UsbDevice_ReconfigureEndpoint(
                     *(_QWORD *)(v7 + 16),
                     v7,
                     Endpoint_EndpointStaticStreamsEnableCompletion,
                     a3);
        }
        LODWORD(v25) = v13;
        LODWORD(v24) = *(_DWORD *)(v7 + 144);
        LODWORD(v23) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(v7 + 80),
          2u,
          0xCu,
          0x69u,
          (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
          v23,
          v24,
          v25,
          v12);
        *(_DWORD *)(v5 + 4) = -1073737728;
      }
      else
      {
        LODWORD(v24) = *(_DWORD *)(v7 + 144);
        LODWORD(v23) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v7 + 80),
          2u,
          0xCu,
          0x68u,
          (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
          v23,
          v24);
        *(_DWORD *)(v5 + 4) = -1073737728;
        v12 = -1073741670;
      }
    }
    else
    {
      LODWORD(v25) = *(_DWORD *)(v6 + 8);
      LODWORD(v24) = *(_DWORD *)(v7 + 144);
      LODWORD(v23) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v7 + 80),
        2u,
        0xCu,
        0x67u,
        (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
        v23,
        v24,
        v25);
      *(_DWORD *)(v5 + 4) = -2147482880;
      v12 = -1073741811;
    }
  }
  for ( i = 1; i <= *(_DWORD *)(v6 + 8); ++i )
  {
    LOBYTE(v11) = 1;
    v18 = *(_QWORD *)(88LL * (i - 1) + v6 + 40);
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 40) + 88LL);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v18 + 32) + 32LL))(v18, v11);
    v20 = (_QWORD *)(v18 + 200);
    _InterlockedExchange((volatile __int32 *)(v18 + 100), 0);
    if ( (_QWORD *)*v20 != v20 )
      CommonBuffer_ReleaseBuffers(v19, v20);
    v11 = (_QWORD *)(v18 + 216);
    if ( (_QWORD *)*v11 != v11 )
      CommonBuffer_ReleaseBuffers(v19, v11);
    v21 = *(struct _MDL **)(v18 + 112);
    if ( v21 )
    {
      IoFreeMdl(v21);
      *(_QWORD *)(v18 + 112) = 0LL;
    }
  }
  *(_QWORD *)(v7 + 136) = *(_QWORD *)(v7 + 128);
  v22 = *(_QWORD *)(v6 + 32);
  if ( v22 )
  {
    CommonBuffer_ReleaseBuffer((__int64)v8, v22);
    *(_QWORD *)(v6 + 32) = 0LL;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1232))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a3,
           (unsigned int)v12);
}
