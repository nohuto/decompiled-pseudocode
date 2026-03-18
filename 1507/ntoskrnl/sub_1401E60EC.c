/*
 * XREFs of sub_1401E60EC @ 0x1401E60EC
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140163754 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140115984 (MmMapIoSpaceEx.c)
 *     HvlpGetVpIndexFromApicId @ 0x1401E65FC (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1401E6A38 (HvlpMapStatisticsPage.c)
 *     sub_1401E7744 @ 0x1401E7744 (sub_1401E7744.c)
 */

__int64 __fastcall sub_1401E60EC(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // edi
  int v4; // esi
  int *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v2 = HvlpLogicalProcessorCount;
  v4 = a1;
  v5 = &HvlpLogicalProcessorRegions[26 * HvlpLogicalProcessorCount];
  if ( (HvlpRootFlags & 0x20) != 0 )
  {
    v9 = HvlpLogicalProcessorCount;
    result = sub_1401E7744((unsigned int)HvlpLogicalProcessorCount, (unsigned int)a1, a2, v5 + 12);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    result = HvlpGetVpIndexFromApicId(a1, &v9);
    if ( (int)result < 0 )
      return result;
    v2 = v9;
  }
  if ( (HvlpRootFlags & 0x10) != 0 )
  {
    v8[1] = 0LL;
    v8[0] = v2;
    result = HvlpMapStatisticsPage(2LL, v8, &v10);
    if ( (int)result < 0 )
      return result;
    v7 = MmMapIoSpaceEx(v10, 4096LL, 2u);
    if ( !v7 )
      return 3221225626LL;
    *((_QWORD *)v5 + 4) = v7;
  }
  v5[6] = -1;
  v5[1] = v2;
  v5[2] = v4;
  *((_WORD *)v5 + 6) = a2;
  if ( ++HvlpNodes[2 * a2] == 1 )
    ++HvlpNodeCount;
  *v5 = 1;
  return 0LL;
}
