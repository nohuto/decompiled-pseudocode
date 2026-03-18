/*
 * XREFs of Isoch_CommonBufferCallback @ 0x1C00243D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00024B0 (WPP_RECORDER_SF_L.c)
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
    (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
    v3);
  return Isoch_MapTransfers(a1);
}
