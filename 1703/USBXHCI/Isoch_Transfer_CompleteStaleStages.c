/*
 * XREFs of Isoch_Transfer_CompleteStaleStages @ 0x1C0002884
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C090 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C00286C0 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002AF8 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Stage_CompleteTD @ 0x1C000CF90 (Isoch_Stage_CompleteTD.c)
 */

__int64 __fastcall Isoch_Transfer_CompleteStaleStages(__int64 a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // rbx
  __int64 result; // rax
  int v6; // r9d
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+48h] [rbp+10h] BYREF

  v7 = a1;
  v3 = a2 + 112;
  a2[117] = a2[116];
  a2[118] = a2[114];
  while ( 1 )
  {
    result = StageQueue_ForwardScanGetNextStage(v3);
    if ( !result || result == a3 )
      break;
    LOBYTE(v6) = 1;
    *(_DWORD *)(result + 48) = *(_DWORD *)(result + 44) + 1;
    Isoch_Stage_CompleteTD(result, 23, 0, v6, (__int64)&v7, (__int64)&v8);
  }
  return result;
}
