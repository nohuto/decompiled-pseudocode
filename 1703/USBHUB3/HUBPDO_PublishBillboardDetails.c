/*
 * XREFs of HUBPDO_PublishBillboardDetails @ 0x1C006AE50
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0013100 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

void __fastcall HUBPDO_PublishBillboardDetails(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v5; // rdi
  unsigned int v6; // ebp
  _BYTE *PoolWithTag; // rax
  _BYTE *v8; // rbx
  __int64 i; // r10
  int updated; // eax
  unsigned __int16 v11; // r9
  __int64 v12; // [rsp+28h] [rbp-60h]
  struct _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v14[4]; // [rsp+50h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  v5 = **(_QWORD **)(v3 + 2616);
  v6 = 8 * *(unsigned __int8 *)(v5 + 4) + 4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x64334855u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      2u,
      0x50u,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
      v6);
    return;
  }
  memset(PoolWithTag, 0, v6);
  *v8 = *(_BYTE *)(v5 + 4);
  v8[1] = *(_BYTE *)(v5 + 5);
  RtlInitializeBitMap(&BitMapHeader, (PULONG)(v5 + 8), 0x20u);
  for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v5 + 4); i = (unsigned int)(i + 1) )
  {
    *(_WORD *)&v8[8 * i + 4] = *(_WORD *)(v5 + 4 * i + 44);
    v8[8 * i + 6] = *(_BYTE *)(v5 + 4 * i + 46);
    *(_DWORD *)&v8[8 * i + 8] = _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i)) | (2 * _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i + 1)));
  }
  v14[2] = 0LL;
  v14[0] = 24LL;
  v14[1] = &DEVPKEY_Device_UsbBillboardInfo;
  updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64, unsigned int, _BYTE *))(WdfFunctions_01015 + 3480))(
              WdfDriverGlobals,
              v4,
              v14,
              4099LL,
              v6,
              v8);
  if ( updated < 0 )
  {
    v11 = 81;
LABEL_9:
    LODWORD(v12) = updated;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      2u,
      v11,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
      v12);
    goto LABEL_10;
  }
  updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL, 0, 0);
  if ( updated < 0 )
  {
    v11 = 82;
    goto LABEL_9;
  }
LABEL_10:
  ExFreePoolWithTag(v8, 0x64334855u);
}
