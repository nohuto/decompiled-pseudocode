/*
 * XREFs of Endpoint_Enable @ 0x1C0021020
 * Callers:
 *     UsbDevice_UcxEvtEnable @ 0x1C00318F0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0031A90 (UsbDevice_UcxEvtEndpointsConfigure.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BF0 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00086D4 (WPP_RECORDER_SF_dddd.c)
 *     RtlStringCchPrintfA @ 0x1C0009824 (RtlStringCchPrintfA.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009960 (CommonBuffer_AcquireBuffer.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Endpoint_Disable_Internal @ 0x1C0020E04 (Endpoint_Disable_Internal.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0021D74 (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C00261D0 (WPP_RECORDER_SF_DDX.c)
 *     TR_Enable_Internal @ 0x1C0028794 (TR_Enable_Internal.c)
 *     TR_GetDequeuePointer @ 0x1C0028848 (TR_GetDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_Enable(_QWORD *a1)
{
  KSPIN_LOCK *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // r14
  _DWORD *PoolWithTag; // rax
  int v6; // edx
  __int64 v7; // r8
  _DWORD *v8; // rdi
  int v9; // edi
  __int64 *v10; // rax
  int v11; // eax
  unsigned __int16 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 *v17; // rax
  unsigned int v18; // esi
  __int64 DequeuePointer; // rax
  __int64 v20; // rdx
  __int64 v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+30h] [rbp-78h]
  __int64 v24; // [rsp+38h] [rbp-70h]
  _DWORD v25[4]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v26; // [rsp+60h] [rbp-48h]
  char v27; // [rsp+68h] [rbp-40h]
  int v28; // [rsp+6Ch] [rbp-3Ch]
  char pszDest[16]; // [rsp+70h] [rbp-38h] BYREF

  v2 = *(KSPIN_LOCK **)(*a1 + 88LL);
  WPP_RECORDER_SF_DDX(
    *(_QWORD *)(*a1 + 64LL),
    4,
    12,
    21,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    *(_BYTE *)(a1[2] + 135LL),
    *((_DWORD *)a1 + 36),
    a1[3]);
  v3 = ((__int64 (__fastcall *)(void *, _QWORD, __int64 (__fastcall *)()))qword_1C0042798)(
         WPP_MAIN_CB.Dpc.DpcData,
         a1[3],
         Endpoint_Enable);
  v4 = v3;
  if ( !*((_BYTE *)a1 + 37) )
  {
    v9 = TR_Enable_Internal(a1[11]);
    if ( v9 < 0 )
    {
      v12 = 24;
      LODWORD(v24) = v9;
      LODWORD(v23) = *((_DWORD *)a1 + 36);
      LODWORD(v22) = *(unsigned __int8 *)(a1[2] + 135LL);
      goto LABEL_9;
    }
    goto LABEL_11;
  }
  if ( !v3 )
  {
    if ( a1[16] )
      goto LABEL_7;
    PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, 0x80uLL, 0x49434858u);
    a1[16] = PoolWithTag;
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      a1[17] = PoolWithTag;
      memset(PoolWithTag, 0, 0x80uLL);
      v8[3] = 1;
      *(_QWORD *)v8 = a1;
      v8[2] = 1;
      *(_QWORD *)(a1[17] + 40LL) = a1[11];
      v10 = CommonBuffer_AcquireBuffer(
              v2,
              16 * (unsigned int)(1LL << ((unsigned __int8)v8[3] + 1)),
              (__int64)a1,
              0x31747045u);
      *((_QWORD *)v8 + 4) = v10;
      if ( v10 )
      {
LABEL_7:
        v11 = TR_Enable_Internal(a1[11]);
        v9 = v11;
        if ( v11 < 0 )
        {
          v12 = 22;
          LODWORD(v24) = v11;
          LODWORD(v23) = *((_DWORD *)a1 + 36);
          LODWORD(v22) = *(unsigned __int8 *)(a1[2] + 135LL);
LABEL_9:
          WPP_RECORDER_SF_ddd(
            *(_QWORD *)(*a1 + 64LL),
            2u,
            0xCu,
            v12,
            (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
            v22,
            v23,
            v24);
          goto LABEL_14;
        }
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[17] + 32LL) + 16LL) + 16LL) = TR_GetDequeuePointer(a1[11]);
        goto LABEL_11;
      }
    }
LABEL_5:
    v9 = -1073741670;
LABEL_15:
    LOBYTE(v6) = 1;
    Endpoint_Disable_Internal(a1, v6, v7);
    goto LABEL_26;
  }
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v3,
          off_1C00412F0);
  a1[17] = v15;
  v16 = v15;
  if ( !*(_QWORD *)(v15 + 32) )
  {
    v17 = CommonBuffer_AcquireBuffer(
            v2,
            16 * (unsigned int)(1LL << ((unsigned __int8)*(_DWORD *)(v15 + 12) + 1)),
            (__int64)a1,
            0x31747045u);
    *(_QWORD *)(v16 + 32) = v17;
    if ( !v17 )
      goto LABEL_5;
  }
  v18 = 1;
  if ( !*(_DWORD *)(v16 + 8) )
  {
LABEL_11:
    v13 = a1[2];
    v14 = *a1;
    v26 = 0LL;
    v25[1] = 0;
    v25[0] = 48;
    pszDest[0] = 0;
    v28 = 16;
    v27 = 0;
    v25[2] = 1024;
    v25[3] = 200;
    RtlStringCchPrintfA(
      pszDest,
      0x10uLL,
      "%02d SLT%02d DCI%02d",
      *(_DWORD *)(v14 + 144),
      *(unsigned __int8 *)(v13 + 135),
      *((_DWORD *)a1 + 36));
    if ( (unsigned int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v25, a1 + 10) )
    {
      v7 = *(_QWORD *)(*a1 + 64LL);
      a1[10] = v7;
    }
    v9 = 0;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v9 = TR_Enable_Internal(*(_QWORD *)(88LL * (v18 - 1) + a1[17] + 40));
    if ( v9 < 0 )
      break;
    DequeuePointer = Endpoint_GetDequeuePointer(a1, v18);
    v20 = v18++;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[17] + 32LL) + 16LL) + 16 * v20) = DequeuePointer;
    if ( v18 > *(_DWORD *)(v16 + 8) )
      goto LABEL_11;
  }
  LODWORD(v24) = v18 + 1;
  LODWORD(v23) = *((_DWORD *)a1 + 36);
  LODWORD(v22) = *(unsigned __int8 *)(a1[2] + 135LL);
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(*a1 + 64LL),
    2u,
    0xCu,
    0x17u,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    v22,
    v23,
    v24,
    v9);
LABEL_14:
  if ( v9 < 0 )
    goto LABEL_15;
  ESM_AddEvent(a1 + 34);
LABEL_26:
  if ( v4 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v4,
      Endpoint_Enable,
      927LL,
      "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.c");
  return (unsigned int)v9;
}
