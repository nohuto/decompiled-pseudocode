/*
 * XREFs of UsbDevice_ReconfigureEndpoint @ 0x1C002FC4C
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001B980 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001BC30 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Command_SendCommand @ 0x1C001278C (Command_SendCommand.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C002F964 (UsbDevice_InitializeEndpointContext.c)
 */

void __fastcall UsbDevice_ReconfigureEndpoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rcx
  __int64 v7; // r12
  unsigned int v8; // ebx
  _DWORD *v9; // rsi
  unsigned int *v10; // r14
  int v11; // r15d
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // [rsp+28h] [rbp-50h]
  int v18; // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+80h] [rbp+8h]

  v6 = *(__int64 **)(a1 + 8);
  v7 = v6[10];
  v19 = v6[14];
  v18 = *(_DWORD *)(a2 + 144);
  v17 = *(unsigned __int8 *)(a1 + 135);
  WPP_RECORDER_SF_dd(v6[8], 4u, 0xBu, 0x41u, (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids, v17, v18);
  memset(*(void **)(*(_QWORD *)(a1 + 432) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(a1 + 432) + 40LL));
  v8 = 0;
  v9 = *(_DWORD **)(*(_QWORD *)(a1 + 432) + 16LL);
  v10 = v9 + 16;
  if ( (*(_BYTE *)(v7 + 104) & 4) == 0 )
    v10 = v9 + 8;
  v9[1] |= 1u;
  v11 = *(_DWORD *)(a2 + 144);
  v12 = (unsigned int)(v11 - 1) + 2LL;
  if ( (*(_BYTE *)(v7 + 104) & 4) != 0 )
    v13 = v12 << 6;
  else
    v13 = 32 * v12;
  UsbDevice_InitializeEndpointContext(a1, a2, (__int64)v9 + v13);
  do
  {
    v14 = *(_DWORD *)(a1 + 152);
    if ( _bittest(&v14, v8) )
      *v10 = (v8 << 27) | *v10 & 0x7FFFFFF;
    ++v8;
  }
  while ( v8 < 0x20 );
  v9[1] |= 1 << v11;
  *v9 |= 1 << v11;
  memset((void *)(a1 + 456), 0, 0x50uLL);
  *(_QWORD *)(a1 + 504) = UsbDevice_ConfigureEndpointCompletion;
  v15 = *(_DWORD *)(a1 + 492) & 0xFFFF31FF;
  *(_QWORD *)(a1 + 512) = a1;
  *(_DWORD *)(a1 + 492) = v15 | 0x3000;
  *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 24LL);
  *(_QWORD *)(a1 + 536) = a3;
  *(_QWORD *)(a1 + 544) = a4;
  *(_QWORD *)(a1 + 480) = v16;
  *(_QWORD *)(a1 + 496) = v9;
  Command_SendCommand(v19, a1 + 456);
}
