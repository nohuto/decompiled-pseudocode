/*
 * XREFs of UsbDevice_ReconfigureEndpoint @ 0x1C002E144
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0021640 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0021900 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Command_SendCommand @ 0x1C00184A4 (Command_SendCommand.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C002DE50 (UsbDevice_InitializeEndpointContext.c)
 */

void __fastcall UsbDevice_ReconfigureEndpoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rcx
  __int64 v7; // r12
  _DWORD *v8; // rbp
  _DWORD *v9; // rbx
  unsigned int v10; // esi
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
  v8 = *(_DWORD **)(*(_QWORD *)(a1 + 432) + 16LL);
  v9 = v8 + 16;
  if ( (*(_DWORD *)(v7 + 104) & 4) == 0 )
    v9 = v8 + 8;
  v10 = 0;
  v8[1] |= 1u;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v11 = *v9 | 0x4000000;
    *v9 = v11;
    *((_BYTE *)v9 + 7) = *(_BYTE *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 144) > 1u )
        *v9 = v11 | 0x2000000;
      v9[2] ^= (v9[2] ^ (*(_DWORD *)(a1 + 148) << 16)) & 0x30000;
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
                         off_1C0045250)
                     + 144) > 1u )
      {
        *v9 |= 0x2000000u;
      }
    }
  }
  v13 = *(_DWORD *)(a2 + 144);
  v14 = (unsigned int)(v13 - 1) + 2LL;
  if ( (*(_DWORD *)(v7 + 104) & 4) != 0 )
    v15 = v14 << 6;
  else
    v15 = 32 * v14;
  UsbDevice_InitializeEndpointContext(a1, a2, (__int64)v8 + v15);
  do
  {
    v16 = *(_DWORD *)(a1 + 152);
    if ( _bittest(&v16, v10) )
      *v9 = (v10 << 27) | *v9 & 0x7FFFFFF;
    ++v10;
  }
  while ( v10 < 0x20 );
  v8[1] |= 1 << v13;
  *v8 |= 1 << v13;
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
  *(_QWORD *)(a1 + 496) = v8;
  Command_SendCommand(v21, a1 + 456);
}
