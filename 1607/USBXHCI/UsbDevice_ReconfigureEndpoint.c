/*
 * XREFs of UsbDevice_ReconfigureEndpoint @ 0x1C003143C
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0025280 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0025530 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     Command_SendCommand @ 0x1C001C18C (Command_SendCommand.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C0031154 (UsbDevice_InitializeEndpointContext.c)
 */

void __fastcall UsbDevice_ReconfigureEndpoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rcx
  __int64 v7; // r12
  unsigned int v8; // esi
  _DWORD *v9; // rbp
  _DWORD *v10; // rbx
  int v11; // ecx
  __int64 v12; // rdx
  int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // r8
  int v19; // [rsp+28h] [rbp-50h]
  int v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+80h] [rbp+8h]

  v6 = *(__int64 **)(a1 + 8);
  v7 = v6[10];
  v21 = v6[14];
  v20 = *(_DWORD *)(a2 + 144);
  v19 = *(unsigned __int8 *)(a1 + 135);
  WPP_RECORDER_SF_dd(v6[8], 4u, 0xBu, 0x41u, (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids, v19, v20);
  memset(*(void **)(*(_QWORD *)(a1 + 432) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(a1 + 432) + 40LL));
  v8 = 0;
  v9 = *(_DWORD **)(*(_QWORD *)(a1 + 432) + 16LL);
  v10 = v9 + 16;
  if ( (*(_BYTE *)(v7 + 104) & 4) == 0 )
    v10 = v9 + 8;
  v9[1] |= 1u;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v11 = *v10 | 0x4000000;
    *v10 = v11;
    *((_BYTE *)v10 + 7) = *(_BYTE *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 144) > 1u )
        *v10 = v11 | 0x2000000;
      v10[2] ^= (v10[2] ^ (*(_DWORD *)(a1 + 148) << 16)) & 0x30000;
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(a1 + 136) )
  {
    v12 = *(_QWORD *)(a1 + 24);
    if ( v12 )
    {
      if ( *(int *)(a1 + 20) < 2
        && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         v12,
                         off_1C0043250)
                     + 144) > 1u )
      {
        *v10 |= 0x2000000u;
      }
    }
  }
  v13 = *(_DWORD *)(a2 + 144);
  v14 = (unsigned int)(v13 - 1) + 2LL;
  if ( (*(_BYTE *)(v7 + 104) & 4) != 0 )
    v15 = v14 << 6;
  else
    v15 = 32 * v14;
  UsbDevice_InitializeEndpointContext(a1, a2, (__int64)v9 + v15);
  do
  {
    v16 = *(_DWORD *)(a1 + 152);
    if ( _bittest(&v16, v8) )
      *v10 = (v8 << 27) | *v10 & 0x7FFFFFF;
    ++v8;
  }
  while ( v8 < 0x20 );
  v9[1] |= 1 << v13;
  *v9 |= 1 << v13;
  memset((void *)(a1 + 456), 0, 0x50uLL);
  *(_QWORD *)(a1 + 504) = UsbDevice_ConfigureEndpointCompletion;
  v17 = *(_DWORD *)(a1 + 492) & 0xFFFF31FF;
  *(_QWORD *)(a1 + 512) = a1;
  *(_DWORD *)(a1 + 492) = v17 | 0x3000;
  *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 24LL);
  *(_QWORD *)(a1 + 536) = a3;
  *(_QWORD *)(a1 + 544) = a4;
  *(_QWORD *)(a1 + 480) = v18;
  *(_QWORD *)(a1 + 496) = v9;
  Command_SendCommand(v21, a1 + 456);
}
