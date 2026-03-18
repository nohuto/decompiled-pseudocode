/*
 * XREFs of HUBPDO_PublishBillboardDetails @ 0x1C00670AC
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0011FB0 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
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
  __int64 v9; // r10
  unsigned int v10; // r9d
  int v11; // edx
  unsigned __int8 v12; // cf
  int updated; // eax
  unsigned __int16 v14; // r9
  __int64 v15; // [rsp+28h] [rbp-60h]
  struct _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-38h] BYREF

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
      0x4Fu,
      (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
      v6);
    return;
  }
  memset(PoolWithTag, 0, v6);
  *v8 = *(_BYTE *)(v5 + 4);
  v8[1] = *(_BYTE *)(v5 + 5);
  RtlInitializeBitMap(&BitMapHeader, (PULONG)(v5 + 8), 0x20u);
  v9 = 0LL;
  if ( *(_BYTE *)(v5 + 4) )
  {
    v10 = 0;
    do
    {
      *(_WORD *)&v8[8 * v9 + 4] = *(_WORD *)(v5 + 4 * v9 + 44);
      v8[8 * v9 + 6] = *(_BYTE *)(v5 + 4 * v9 + 46);
      v11 = 2 * _bittest64((const signed __int64 *)BitMapHeader.Buffer, v10 + 1);
      v12 = _bittest64((const signed __int64 *)BitMapHeader.Buffer, v10);
      v10 += 2;
      *(_DWORD *)&v8[8 * v9 + 8] = v12 | v11;
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *(unsigned __int8 *)(v5 + 4) );
  }
  v17[2] = 0LL;
  v17[0] = 24LL;
  v17[1] = &DEVPKEY_Device_UsbBillboardInfo;
  updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64, unsigned int, _BYTE *))(WdfFunctions_01015 + 3480))(
              WdfDriverGlobals,
              v4,
              v17,
              4099LL,
              v6,
              v8);
  if ( updated < 0 )
  {
    v14 = 80;
LABEL_10:
    LODWORD(v15) = updated;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      2u,
      v14,
      (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
      v15);
    goto LABEL_11;
  }
  updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL, 0, 0);
  if ( updated < 0 )
  {
    v14 = 81;
    goto LABEL_10;
  }
LABEL_11:
  ExFreePoolWithTag(v8, 0x64334855u);
}
