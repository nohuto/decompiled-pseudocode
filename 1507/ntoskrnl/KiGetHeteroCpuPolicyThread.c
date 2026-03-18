/*
 * XREFs of KiGetHeteroCpuPolicyThread @ 0x140206F38
 * Callers:
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     KeClockInterruptNotify @ 0x1400A6130 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x1400AC2C0 (KiUpdateRunTime.c)
 *     KiHeteroChooseTargetProcessor @ 0x140206FF4 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetHeteroCpuPolicyThread(__int64 a1, struct _KPRCB *CurrentPrcb)
{
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // r8
  __int64 v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // ecx

  result = *(unsigned __int8 *)(a1 + 125);
  if ( *(unsigned __int8 *)(a1 + 125) >= 5u )
  {
    if ( (KiDynamicHeteroCpuPolicyMask & 1) != 0 && *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1490LL) == 2 )
      goto LABEL_17;
    if ( (KiDynamicHeteroCpuPolicyMask & 2) == 0 )
      return (unsigned int)KiDefaultDynamicHeteroCpuPolicy;
    v4 = *(char *)(a1 + 195);
    if ( *(char *)(a1 + 195) < 16 && *(_QWORD *)(a1 + 104) )
    {
      if ( !CurrentPrcb )
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
    if ( v4 >= KiDynamicHeteroCpuPolicyImportantPriority )
    {
LABEL_17:
      if ( (KiDynamicHeteroCpuPolicyMask & 4) == 0 )
        return (unsigned int)KiDynamicHeteroCpuPolicyImportant;
      v7 = *(_DWORD *)(a1 + 80);
      v8 = *(_DWORD *)(a1 + 84);
      if ( v7 > v8 )
        v8 = v7;
      if ( v8 < KiDynamicHeteroCpuPolicyExpectedCycles )
        return (unsigned int)KiDynamicHeteroCpuPolicyImportantShort;
      else
        return (unsigned int)KiDynamicHeteroCpuPolicyImportant;
    }
    else
    {
      return (unsigned int)KiDefaultDynamicHeteroCpuPolicy;
    }
  }
  return result;
}
