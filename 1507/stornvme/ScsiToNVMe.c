/*
 * XREFs of ScsiToNVMe @ 0x1C00087C0
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001E50 (NVMeHwBuildIo.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0005E04 (GetSrbScsiData.c)
 *     SglToPrp @ 0x1C0005F6C (SglToPrp.c)
 *     SrbAssignQueueId @ 0x1C0006344 (SrbAssignQueueId.c)
 *     ScsiReportLunsCommand @ 0x1C00064D0 (ScsiReportLunsCommand.c)
 *     ScsiInquiryRequest @ 0x1C0006D50 (ScsiInquiryRequest.c)
 *     ScsiReadCapacityRequest @ 0x1C0006ED4 (ScsiReadCapacityRequest.c)
 *     ScsiModeSenseRequest @ 0x1C00073B4 (ScsiModeSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0007544 (ScsiModeSelectRequest.c)
 *     ScsiLogSenseRequest @ 0x1C0007B8C (ScsiLogSenseRequest.c)
 *     ScsiReadWriteRequest @ 0x1C0007CB0 (ScsiReadWriteRequest.c)
 *     ScsiUnmapRequest @ 0x1C0007E34 (ScsiUnmapRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0008030 (ScsiStartStopUnitRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C00080E4 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0008204 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0008324 (ScsiSanitizeRequest.c)
 *     NVMeSplitIoCommand @ 0x1C00086C4 (NVMeSplitIoCommand.c)
 *     NVMeSetSenseData @ 0x1C000D36C (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiToNVMe(__int64 a1, __int64 a2)
{
  __int64 SrbScsiData; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  bool v7; // bp
  unsigned __int8 *v8; // r8
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int started; // eax
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // edi
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  bool v26; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+58h] [rbp+10h] BYREF

  v27 = 0;
  SrbScsiData = GetSrbScsiData(a2, &v27, 0LL, 0LL, 0LL);
  LOBYTE(v6) = *(_BYTE *)(a2 + 2);
  v7 = 0;
  v26 = 0;
  v8 = (unsigned __int8 *)SrbScsiData;
  if ( (_BYTE)v6 == 40 )
    v9 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v9 = *(unsigned __int8 *)(a2 + 7);
  if ( *(_QWORD *)(a1 + 8 * v9 + 1168) == v5 || (v5 = v27, v27 < 6) || !v8 )
  {
    LOBYTE(v5) = 32;
    LOBYTE(v6) = 8;
    NVMeSetSenseData(a2, v6, v8, v5);
    return 3238002695LL;
  }
  v10 = *v8;
  if ( v10 > 0x48 )
  {
    if ( *v8 > 0x8Fu )
    {
      v22 = v10 - 158;
      if ( !v22 )
        goto LABEL_55;
      v23 = v22 - 2;
      if ( !v23 )
      {
        started = ScsiReportLunsCommand(a1, a2);
        goto LABEL_56;
      }
      v24 = v23 - 2;
      if ( !v24 )
      {
        started = ScsiSecurityProtocolInRequest(a1, a2, v8);
        goto LABEL_56;
      }
      if ( v24 == 19 )
      {
        started = ScsiSecurityProtocolOutRequest(a1, a2, v8);
        goto LABEL_56;
      }
    }
    else
    {
      if ( v10 == 143 )
        goto LABEL_45;
      v17 = v10 - 77;
      if ( !v17 )
      {
        started = ScsiLogSenseRequest(a1, a2, v8, v27);
        goto LABEL_56;
      }
      v18 = v17 - 8;
      if ( !v18 )
        goto LABEL_43;
      v19 = v18 - 5;
      if ( !v19 )
        goto LABEL_42;
      v20 = v19 - 46;
      if ( !v20 || v20 == 2 )
      {
LABEL_41:
        started = ScsiReadWriteRequest(a1, a2, v8, v27, &v26);
        v7 = v26;
        goto LABEL_56;
      }
    }
LABEL_51:
    LOBYTE(v5) = 32;
    LOBYTE(v6) = 6;
    NVMeSetSenseData(a2, v6, v8, v5);
    v21 = -1056964601;
    goto LABEL_57;
  }
  if ( v10 == 72 )
  {
    started = ScsiSanitizeRequest(a1, a2, (__int64)v8);
    goto LABEL_56;
  }
  if ( *v8 <= 0x25u )
  {
    if ( v10 != 37 )
    {
      if ( *v8 )
      {
        v11 = v10 - 18;
        if ( !v11 )
        {
          started = ScsiInquiryRequest(a1, a2, (__int64)v8, v27);
          goto LABEL_56;
        }
        v12 = v11 - 3;
        if ( v12 )
        {
          v13 = v12 - 5;
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              started = ScsiStartStopUnitRequest(a1, a2, (__int64)v8, v27);
LABEL_56:
              v21 = started;
              goto LABEL_57;
            }
            goto LABEL_51;
          }
LABEL_42:
          started = ScsiModeSenseRequest(a1, a2, v8);
          goto LABEL_56;
        }
LABEL_43:
        started = ScsiModeSelectRequest(a1, a2, (char *)v8);
        goto LABEL_56;
      }
      goto LABEL_45;
    }
LABEL_55:
    started = ScsiReadCapacityRequest(a1, a2, v8, v27);
    goto LABEL_56;
  }
  if ( ((v10 - 40) & 0xFFFFFFFD) == 0 )
    goto LABEL_41;
  if ( v10 != 47 )
  {
    if ( v10 != 53 )
    {
      if ( v10 == 66 )
      {
        started = ScsiUnmapRequest(a1, a2, (__int64)v8);
        goto LABEL_56;
      }
      goto LABEL_51;
    }
    if ( (_BYTE)v6 == 40 )
      v15 = *(_QWORD *)(a2 + 104);
    else
      v15 = *(_QWORD *)(a2 + 56);
    if ( (v15 & 0xFFF) != 0 )
      v15 = v15 - (v15 & 0xFFF) + 4096;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1072) + 525LL) & 1) != 0 )
    {
      *(_WORD *)(v15 + 4166) = 0;
      SrbAssignQueueId(a1, a2);
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v16 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v16 = *(unsigned __int8 *)(a2 + 7);
      *(_BYTE *)(v15 + 4096) = 0;
      *(_DWORD *)(v15 + 4100) = v16 + 1;
      goto LABEL_46;
    }
  }
LABEL_45:
  *(_BYTE *)(a2 + 3) = 1;
LABEL_46:
  v21 = 0;
LABEL_57:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    SglToPrp(a1, a2, (__int64)v8);
    if ( v7 )
      NVMeSplitIoCommand(a1, a2);
  }
  return v21;
}
