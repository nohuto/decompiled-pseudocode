/*
 * XREFs of Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0021CE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BE0 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0008CB4 (WPP_RECORDER_SF_dddd.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D968 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C001DA50 (CommonBuffer_ReleaseBuffers.c)
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_EndpointStaticStreamsEnableCompletion(__int64 a1, int a2)
{
  __int64 v4; // r14
  __int64 **v5; // rax
  _QWORD *v6; // rdx
  __int64 *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rbp
  _QWORD *v12; // rdx
  _QWORD *v13; // rdx
  struct _MDL *v14; // rcx
  unsigned int v15; // ebp
  __int64 v16; // rbx
  __int64 v17; // r14
  _QWORD *v18; // rdx
  struct _MDL *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  PWDF_DRIVER_GLOBALS v22; // rcx
  int v24; // [rsp+28h] [rbp-A0h]
  int v25; // [rsp+28h] [rbp-A0h]
  int v26; // [rsp+30h] [rbp-98h]
  int v27; // [rsp+30h] [rbp-98h]
  int v28; // [rsp+38h] [rbp-90h]
  int v29; // [rsp+38h] [rbp-90h]
  int v30; // [rsp+40h] [rbp-88h]
  __int64 v31; // [rsp+50h] [rbp-78h]
  _QWORD v32[5]; // [rsp+58h] [rbp-70h] BYREF

  memset(v32, 0, sizeof(v32));
  LOWORD(v32[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a1,
    v32);
  v4 = v32[1];
  v31 = v32[1];
  v5 = (__int64 **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0043070);
  v7 = *v5;
  v8 = **v5;
  v9 = *(_QWORD *)(*(_QWORD *)v8 + 88LL);
  if ( a2 < 0 )
  {
    v15 = 1;
    if ( *((_DWORD *)v7 + 2) )
    {
      do
      {
        LOBYTE(v6) = 1;
        v16 = v7[11 * v15 - 6];
        v17 = *(_QWORD *)(*(_QWORD *)(v16 + 40) + 88LL);
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v16 + 32) + 32LL))(v16, v6);
        v18 = (_QWORD *)(v16 + 200);
        _InterlockedExchange((volatile __int32 *)(v16 + 100), 0);
        if ( (_QWORD *)*v18 != v18 )
          CommonBuffer_ReleaseBuffers(v17, v18);
        v6 = (_QWORD *)(v16 + 216);
        if ( (_QWORD *)*v6 != v6 )
          CommonBuffer_ReleaseBuffers(v17, v6);
        v19 = *(struct _MDL **)(v16 + 112);
        if ( v19 )
        {
          IoFreeMdl(v19);
          *(_QWORD *)(v16 + 112) = 0LL;
        }
        ++v15;
      }
      while ( v15 <= *((_DWORD *)v7 + 2) );
      v4 = v31;
    }
    v20 = v7[4];
    if ( v20 )
    {
      CommonBuffer_ReleaseBuffer(v9, v20);
      v7[4] = 0LL;
    }
    *(_QWORD *)(v8 + 136) = *(_QWORD *)(v8 + 128);
    v30 = a2;
    v29 = *((_DWORD *)v7 + 2);
    v27 = *(_DWORD *)(v8 + 144);
    v25 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v8 + 80),
      2u,
      0xCu,
      0x6Bu,
      (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
      v25,
      v27,
      v29,
      v30);
    v21 = WdfFunctions_01015;
    v22 = WdfDriverGlobals;
    *(_DWORD *)(v4 + 4) = -2147481600;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v21 + 1232))(v22, *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL));
  }
  else
  {
    v10 = *(_QWORD *)(v8 + 88);
    LOBYTE(v6) = 1;
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 88LL);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v10 + 32) + 32LL))(v10, v6);
    v12 = (_QWORD *)(v10 + 200);
    _InterlockedExchange((volatile __int32 *)(v10 + 100), 0);
    if ( (_QWORD *)*v12 != v12 )
      CommonBuffer_ReleaseBuffers(v11, v12);
    v13 = (_QWORD *)(v10 + 216);
    if ( (_QWORD *)*v13 != v13 )
      CommonBuffer_ReleaseBuffers(v11, v13);
    v14 = *(struct _MDL **)(v10 + 112);
    if ( v14 )
    {
      IoFreeMdl(v14);
      *(_QWORD *)(v10 + 112) = 0LL;
    }
    CommonBuffer_ReleaseBuffer(v9, *(_QWORD *)(*(_QWORD *)(v8 + 128) + 32LL));
    ExFreePoolWithTag(*(PVOID *)(v8 + 128), 0x49434858u);
    *(_QWORD *)(v8 + 128) = 0LL;
    v28 = *((_DWORD *)v7 + 2);
    v26 = *(_DWORD *)(v8 + 144);
    v24 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v8 + 80),
      4u,
      0xCu,
      0x6Au,
      (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
      v24,
      v26,
      v28);
    *(_DWORD *)(v4 + 4) = 0;
  }
  if ( a2 >= 0 )
    ESM_AddEvent((PVOID)(v8 + 272));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a1,
           (unsigned int)a2);
}
