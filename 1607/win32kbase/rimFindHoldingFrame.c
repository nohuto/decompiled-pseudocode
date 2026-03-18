/*
 * XREFs of rimFindHoldingFrame @ 0x1C000D380
 * Callers:
 *     RIMRemoveHoldingFrame @ 0x1C0009D38 (RIMRemoveHoldingFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C000F448 (RIMAbandonPointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00D9D18 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C00D9E08 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C00DA008 (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00DA060 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C00DA2AC (rimStorePointersInHoldingFrame.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall rimFindHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  __int64 v5; // r8
  _QWORD *v6; // rdx

  v2 = (_QWORD *)(a1 + 664);
  v3 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 16);
  do
  {
    v6 = v3;
    if ( v3[3] == v5 )
      break;
    v3 = (_QWORD *)*v3;
  }
  while ( v3 != v2 );
  if ( v3 == v2 )
    return 0LL;
  return v6;
}
