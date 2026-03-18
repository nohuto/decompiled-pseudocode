/*
 * XREFs of HUBPDO_BillboardCleanup @ 0x1C0013AB8
 * Callers:
 *     HUBPDO_EvtDeviceCleanup @ 0x1C00138C0 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C0066730 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBWNF_PublishBillboardDeviceState @ 0x1C00306D0 (HUBWNF_PublishBillboardDeviceState.c)
 */

void __fastcall HUBPDO_BillboardCleanup(__int64 a1)
{
  __int64 v1; // rax
  int v3; // eax
  int v4; // [rsp+28h] [rbp-30h]
  __int16 v5; // [rsp+38h] [rbp-20h]
  char v6; // [rsp+3Ah] [rbp-1Eh]
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF
  __int16 v8; // [rsp+48h] [rbp-10h]
  char v9; // [rsp+4Ah] [rbp-Eh]

  v1 = *(_QWORD *)(a1 + 2616);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 9) )
    {
      LOBYTE(v5) = 0;
      v8 = v5;
      v9 = v6;
      v7 = a1;
      v3 = HUBWNF_PublishBillboardDeviceState(&v7);
      if ( v3 < 0 )
      {
        v4 = v3;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          2u,
          0x4Du,
          (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
          v4);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2616) + 9LL) = 0;
    }
    ExFreePoolWithTag(**(PVOID **)(a1 + 2616), 0x68334855u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 2616), 0x68334855u);
    *(_QWORD *)(a1 + 2616) = 0LL;
  }
}
