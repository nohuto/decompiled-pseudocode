/*
 * XREFs of Isoch_CommonBufferCallback @ 0x1C002B020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0004C0C (WPP_RECORDER_SF_L.c)
 */

__int64 __fastcall Isoch_CommonBufferCallback(__int64 a1)
{
  int v3; // [rsp+28h] [rbp-10h]

  *(_DWORD *)(a1 + 288) = 0;
  v3 = *(_DWORD *)(a1 + 100);
  WPP_RECORDER_SF_L(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    4u,
    0xDu,
    0xCu,
    (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
    v3);
  return Isoch_MapTransfers(a1);
}
