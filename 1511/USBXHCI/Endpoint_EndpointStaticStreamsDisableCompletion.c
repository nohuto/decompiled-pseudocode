/*
 * XREFs of Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0021450
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BF0 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00086D4 (WPP_RECORDER_SF_dddd.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D504 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C001D5EC (CommonBuffer_ReleaseBuffers.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_EndpointStaticStreamsDisableCompletion(__int64 a1, int a2)
{
  __int64 v4; // rsi
  __int64 **v5; // rax
  _QWORD *v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned int v10; // ebp
  __int64 v11; // rsi
  __int64 v12; // r15
  _QWORD *v13; // rdx
  struct _MDL *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v19; // [rsp+28h] [rbp-A0h]
  int v20; // [rsp+28h] [rbp-A0h]
  int v21; // [rsp+30h] [rbp-98h]
  int v22; // [rsp+30h] [rbp-98h]
  int v23; // [rsp+38h] [rbp-90h]
  int v24; // [rsp+38h] [rbp-90h]
  int v25; // [rsp+40h] [rbp-88h]
  __int64 v26; // [rsp+50h] [rbp-78h]
  _QWORD v27[5]; // [rsp+58h] [rbp-70h] BYREF

  memset(v27, 0, sizeof(v27));
  LOWORD(v27[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a1,
    v27);
  v4 = v27[1];
  v26 = v27[1];
  v5 = (__int64 **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0041098);
  v7 = *v5;
  v8 = **v5;
  v9 = *(_QWORD *)(*(_QWORD *)v8 + 88LL);
  if ( a2 < 0 )
  {
    v16 = *(_QWORD *)(v8 + 128);
    v17 = *(_QWORD *)(*(_QWORD *)v8 + 88LL);
    *(_QWORD *)(v8 + 136) = v7;
    CommonBuffer_ReleaseBuffer(v17, *(_QWORD *)(v16 + 32));
    ExFreePoolWithTag(*(PVOID *)(v8 + 128), 0x49434858u);
    *(_QWORD *)(v8 + 128) = 0LL;
    v25 = a2;
    v24 = *((_DWORD *)v7 + 2);
    v22 = *(_DWORD *)(v8 + 144);
    v20 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v8 + 80),
      2u,
      0xCu,
      0x6Eu,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v20,
      v22,
      v24,
      v25);
    *(_DWORD *)(v4 + 4) = -2147481600;
  }
  else
  {
    v10 = 1;
    if ( *((_DWORD *)v7 + 2) )
    {
      do
      {
        LOBYTE(v6) = 1;
        v11 = v7[11 * v10 - 6];
        v12 = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 88LL);
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v11 + 32) + 32LL))(v11, v6);
        v13 = (_QWORD *)(v11 + 200);
        _InterlockedExchange((volatile __int32 *)(v11 + 100), 0);
        if ( (_QWORD *)*v13 != v13 )
          CommonBuffer_ReleaseBuffers(v12, v13);
        v6 = (_QWORD *)(v11 + 216);
        if ( (_QWORD *)*v6 != v6 )
          CommonBuffer_ReleaseBuffers(v12, v6);
        v14 = *(struct _MDL **)(v11 + 112);
        if ( v14 )
        {
          IoFreeMdl(v14);
          *(_QWORD *)(v11 + 112) = 0LL;
        }
        ++v10;
      }
      while ( v10 <= *((_DWORD *)v7 + 2) );
      v4 = v26;
    }
    v15 = v7[4];
    if ( v15 )
    {
      CommonBuffer_ReleaseBuffer(v9, v15);
      v7[4] = 0LL;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1232))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL));
    v23 = *((_DWORD *)v7 + 2);
    v21 = *(_DWORD *)(v8 + 144);
    v19 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v8 + 80),
      4u,
      0xCu,
      0x6Du,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v19,
      v21,
      v23);
    *(_DWORD *)(v4 + 4) = 0;
  }
  if ( a2 >= 0 )
    ESM_AddEvent((PVOID)(v8 + 272));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a1,
           (unsigned int)a2);
}
