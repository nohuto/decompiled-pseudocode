/*
 * XREFs of FsRtlHeatLogTierMove @ 0x14061F8F4
 * Callers:
 *     <none>
 * Callees:
 *     Template_xxxqqqq @ 0x1401B9E00 (Template_xxxqqqq.c)
 */

__int64 __fastcall FsRtlHeatLogTierMove(int *a1, _QWORD *a2, __int64 a3, int a4, int a5, int a6, const GUID *a7)
{
  int v11; // [rsp+48h] [rbp-10h]

  if ( (Microsoft_Windows_Storage_Tiering_IoHeatEnableBits & 0x10) != 0 )
  {
    v11 = *a1;
    Template_xxxqqqq((__int64)a1, (__int64)a2, a7, *a2, a2[1], a3, a4, a5, a6, v11);
  }
  return 0LL;
}
