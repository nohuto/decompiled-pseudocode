/*
 * XREFs of KiConvertDynamicHeteroPolicy @ 0x1401D7E4C
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x14005BD20 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x14005C1C0 (KiSelectReadyThread.c)
 *     KiGetHeteroCpuPolicyThread @ 0x1400CEF4C (KiGetHeteroCpuPolicyThread.c)
 *     KiSetHeteroPolicyThread @ 0x1401D8354 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiIsThreadRankBiased @ 0x1401DABB4 (KiIsThreadRankBiased.c)
 */

__int64 __fastcall KiConvertDynamicHeteroPolicy(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // r10
  int v5; // r9d
  int v6; // r11d
  unsigned int v7; // ecx

  v3 = KiDynamicHeteroCpuPolicyMask;
  v4 = a1;
  if ( (KiDynamicHeteroCpuPolicyMask & 1) != 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1466LL) == 2 )
      goto LABEL_8;
    v3 = KiDynamicHeteroCpuPolicyMask;
  }
  if ( (v3 & 2) == 0 )
    return (unsigned int)KiDefaultDynamicHeteroCpuPolicy;
  if ( (unsigned __int8)KiIsThreadRankBiased(a1, a3, a3, (unsigned int)*(char *)(a1 + 195)) )
    v5 = v6;
  if ( v5 < KiDynamicHeteroCpuPolicyImportantPriority )
    return (unsigned int)KiDefaultDynamicHeteroCpuPolicy;
LABEL_8:
  if ( (KiDynamicHeteroCpuPolicyMask & 4) == 0 )
    return (unsigned int)KiDynamicHeteroCpuPolicyImportant;
  v7 = *(_DWORD *)(v4 + 84);
  if ( *(_DWORD *)(v4 + 80) > v7 )
    v7 = *(_DWORD *)(v4 + 80);
  if ( v7 < KiDynamicHeteroCpuPolicyExpectedCycles )
    return (unsigned int)KiDynamicHeteroCpuPolicyImportantShort;
  else
    return (unsigned int)KiDynamicHeteroCpuPolicyImportant;
}
