/*
 * XREFs of KiConvertDynamicHeteroPolicy @ 0x1401C96E4
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140082E30 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x1400832A0 (KiSelectReadyThread.c)
 *     KiFindReadyThread @ 0x140096A08 (KiFindReadyThread.c)
 *     KiGetHeteroCpuPolicyThread @ 0x1401C97D4 (KiGetHeteroCpuPolicyThread.c)
 *     KiSetHeteroPolicyThread @ 0x1401C9B74 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiConvertDynamicHeteroPolicy(__int64 a1, __int64 a2, struct _KPRCB *a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  int v4; // edx
  __int64 v5; // r8
  __int64 v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // ecx

  CurrentPrcb = a3;
  if ( (KiDynamicHeteroCpuPolicyMask & 1) == 0 || *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1498LL) != 2 )
  {
    if ( (KiDynamicHeteroCpuPolicyMask & 2) == 0 )
      return (unsigned int)KiDefaultDynamicHeteroCpuPolicy;
    v4 = *(char *)(a1 + 195);
    if ( *(char *)(a1 + 195) < 16 && *(_QWORD *)(a1 + 104) )
    {
      if ( !a3 )
        CurrentPrcb = KeGetCurrentPrcb();
      v5 = *(_QWORD *)(a1 + 104);
      if ( v5 )
      {
        v6 = CurrentPrcb->ScbOffset + v5;
        if ( v6 )
        {
          if ( (*(_BYTE *)(v6 + 112) & 8) != 0 )
            v4 = 1;
        }
      }
    }
    if ( v4 < KiDynamicHeteroCpuPolicyImportantPriority )
      return (unsigned int)KiDefaultDynamicHeteroCpuPolicy;
  }
  if ( (KiDynamicHeteroCpuPolicyMask & 4) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 80);
    v8 = *(_DWORD *)(a1 + 84);
    if ( v7 > v8 )
      v8 = v7;
    if ( v8 < KiDynamicHeteroCpuPolicyExpectedCycles )
      return (unsigned int)KiDynamicHeteroCpuPolicyImportantShort;
  }
  return (unsigned int)KiDynamicHeteroCpuPolicyImportant;
}
