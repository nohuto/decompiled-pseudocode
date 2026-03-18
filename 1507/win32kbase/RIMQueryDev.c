/*
 * XREFs of RIMQueryDev @ 0x1C00828A4
 * Callers:
 *     RIMRefreshDeviceAttributes @ 0x1C006FF80 (RIMRefreshDeviceAttributes.c)
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C0077EB8 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C008299C (WPP_RECORDER_SF_DDDD.c)
 *     RIMGetKbdExId @ 0x1C0082A48 (RIMGetKbdExId.c)
 *     WPP_RECORDER_SF_qL @ 0x1C00C9404 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // eax
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // esi
  int v9; // r8d
  int v10; // r9d
  int v11; // ecx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp+8h]

  v3 = ZwDeviceIoControlFile(
         *(HANDLE *)(a2 + 224),
         0LL,
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)(a2 + 256),
         *(_DWORD *)(a1 + 80LL * *(unsigned __int8 *)(a2 + 48) + 160),
         0LL,
         0,
         (PVOID)(a2 + *(unsigned int *)(a1 + 80LL * *(unsigned __int8 *)(a2 + 48) + 164)),
         *(_DWORD *)(a1 + 80LL * *(unsigned __int8 *)(a2 + 48) + 168));
  *(_DWORD *)(a2 + 292) = v3;
  v7 = v3;
  if ( v3 < 0 )
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6, v13, a2, v3);
  if ( *(_BYTE *)(a2 + 48) == 1 )
  {
    if ( (int)RIMGetKbdExId(*(HANDLE *)(a2 + 224)) < 0 )
    {
      v11 = *(unsigned __int8 *)(a2 + 400);
      v12 = *(unsigned __int8 *)(a2 + 401);
      *(_DWORD *)(a2 + 428) = v11;
      *(_DWORD *)(a2 + 432) = v12;
      LODWORD(v15) = v12;
      LODWORD(v14) = v11;
      WPP_RECORDER_SF_qDD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2u,
        0x15u,
        (__int64)&WPP_ac6d5b2e09d75b11e5e55b95aa2457c4_Traceguids,
        a2,
        v14,
        v15);
    }
    else
    {
      WPP_RECORDER_SF_DDDD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int8 *)(a2 + 400),
        v9,
        v10,
        v13,
        *(_BYTE *)(a2 + 400),
        *(_BYTE *)(a2 + 401),
        v16,
        SBYTE4(v16));
      *(_QWORD *)(a2 + 428) = v16;
    }
  }
  *(_DWORD *)(a2 + 340) &= ~2u;
  return v7;
}
