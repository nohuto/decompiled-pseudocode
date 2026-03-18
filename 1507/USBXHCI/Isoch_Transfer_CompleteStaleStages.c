/*
 * XREFs of Isoch_Transfer_CompleteStaleStages @ 0x1C0028104
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C00258F8 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0025BD4 (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C001FE54 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Stage_CompleteTD @ 0x1C0026914 (Isoch_Stage_CompleteTD.c)
 */

_DWORD *__fastcall Isoch_Transfer_CompleteStaleStages(__int64 a1, _BYTE *a2, _DWORD *a3)
{
  unsigned __int8 *v3; // rbx
  _DWORD *result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v6 = a1;
  v3 = a2 + 112;
  a2[117] = a2[116];
  a2[118] = a2[114];
  while ( 1 )
  {
    result = (_DWORD *)StageQueue_ForwardScanGetNextStage(v3);
    if ( !result || result == a3 )
      break;
    result[12] = result[11] + 1;
    Isoch_Stage_CompleteTD(result, 0x17u, 0LL, 1, &v6, &v7);
  }
  return result;
}
