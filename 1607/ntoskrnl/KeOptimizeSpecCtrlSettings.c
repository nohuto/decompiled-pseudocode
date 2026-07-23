/*
 * XREFs of KeOptimizeSpecCtrlSettings @ 0x1401D8F28
 * Callers:
 *     KiDynamicProcessorInitialization @ 0x1401D1D70 (KiDynamicProcessorInitialization.c)
 * Callees:
 *     HvlIsCoreSharingPossible @ 0x1401BA9F8 (HvlIsCoreSharingPossible.c)
 *     KiAddSpecCtrlSsbdBit @ 0x1401D954C (KiAddSpecCtrlSsbdBit.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1401D955C (KiDetectAmdNonArchSsbdSupport.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1401D9A18 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1401D9A4C (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x1401D9A70 (KiIsBranchConfusionPresent.c)
 *     KiIsSrsoMitigationDesired @ 0x1401D9B70 (KiIsSrsoMitigationDesired.c)
 *     KiIsTsaMitigationDesired @ 0x1401D9BF0 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x1401D9C04 (KiIsTsaMitigationSupported.c)
 *     KiIsTsaPresent @ 0x1401D9C80 (KiIsTsaPresent.c)
 *     KiSetVirtualMitigationControl @ 0x1401D9CE4 (KiSetVirtualMitigationControl.c)
 *     KiUpdateSpeculationControl @ 0x1401D9EB0 (KiUpdateSpeculationControl.c)
 */

ULONG_PTR __fastcall KeOptimizeSpecCtrlSettings(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v2; // r8
  char v3; // si
  unsigned int v4; // r10d
  __int16 v5; // r11
  int v6; // edi
  int v7; // edx
  unsigned int v8; // edx
  unsigned __int8 v9; // al
  unsigned __int16 *p_BpbKernelSpecCtrl; // r9
  unsigned __int16 *p_BpbNmiSpecCtrl; // r8
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // ecx
  int IsSrsoMitigationDesired; // eax
  int v16; // ecx
  unsigned __int16 *v17; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = (unsigned int)KiSpeculationFeatures;
  if ( ((CurrentPrcb->CoreProcessorSet - 1) & CurrentPrcb->CoreProcessorSet) != 0 )
  {
    v2 = KiSpeculationFeatures | 2u;
    KiSpeculationFeatures |= 2u;
  }
  v3 = HvlHypervisorConnected;
  if ( HvlHypervisorConnected && HvlIsCoreSharingPossible() )
  {
    v2 = (unsigned int)v2 | 2;
    KiSpeculationFeatures = v2;
  }
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    KiDetectAmdNonArchSsbdSupport(CurrentPrcb, &KiSpeculationFeatures, v2);
    LODWORD(v2) = KiSpeculationFeatures;
  }
  v4 = KiSsbdMsr;
  v5 = 128;
  v6 = KiFeatureSettings;
  if ( (v2 & 0x80u) != 0LL && (v2 & 0x100) == 0 )
  {
    if ( (KiFeatureSettings & 8) != 0 )
    {
      v7 = dword_1403AA26C;
      goto LABEL_12;
    }
    if ( (KiFeatureSettings & 0x10) != 0 )
    {
      v7 = dword_1403AA26C;
      if ( KiSsbdMsr == 72 )
      {
        v8 = dword_1403AA26C | 0x80;
        goto LABEL_16;
      }
LABEL_12:
      v8 = v7 | 0x40;
LABEL_16:
      dword_1403AA26C = v8;
      goto LABEL_18;
    }
  }
  v8 = dword_1403AA26C;
LABEL_18:
  if ( (v2 & 4) == 0 )
  {
    v8 |= 8u;
    dword_1403AA26C = v8;
  }
  if ( (KiFeatureSettings & 1) != 0 )
  {
    v8 |= 4u;
    dword_1403AA26C = v8;
  }
  else if ( (KiFeatureSettings & 4) != 0 )
  {
    v8 |= 4u;
    dword_1403AA26C = v8;
    if ( v3 )
    {
      if ( (HvlpFlags & 2) != 0 && HvlIsCoreSharingPossible() && (v2 & 0x40) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl = 2;
        CurrentPrcb->BpbUserSpecCtrl = 2;
        v8 = dword_1403AA26C;
        LODWORD(v2) = KiSpeculationFeatures;
      }
    }
  }
  if ( (v2 & 0x800000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x1000000) != 0 )
    {
      if ( (v6 & 0x8000000) != 0 )
      {
        v8 |= 0x20000u;
      }
      else
      {
        if ( KiKvaShadow )
          goto LABEL_36;
        v8 |= 0x80000u;
      }
    }
    else
    {
      v8 |= 0x40000u;
    }
    dword_1403AA26C = v8;
  }
LABEL_36:
  if ( (v8 & 0x80000) != 0 )
  {
    CurrentPrcb->BpbState |= v5;
    CurrentPrcb->VerwSelector = 24;
    v8 = dword_1403AA26C;
  }
  if ( (v8 & 4) != 0 || (v8 & 8) != 0 )
  {
    dword_1403AA26C = v8 & 0xFFFFFF3F | ((unsigned __int8)v8 | (unsigned __int8)(v8 >> 1)) & 0x40;
    if ( (((unsigned __int8)v8 | (unsigned __int8)(v8 >> 1)) & 0x40) != 0 )
    {
      KiAddSpecCtrlSsbdBit(&CurrentPrcb->BpbKernelSpecCtrl);
      CurrentPrcb->BpbUserSpecCtrl = *v17;
    }
    goto LABEL_123;
  }
  dword_1403AA26C = v8 | 0x10;
  CurrentPrcb->BpbFeatures |= 2u;
  LOWORD(v8) = KiSpeculationFeatures;
  if ( (KiSpeculationFeatures & 1) == 0 )
  {
    v12 = dword_1403AA26C;
    goto LABEL_66;
  }
  v9 = 1;
  p_BpbKernelSpecCtrl = &CurrentPrcb->BpbKernelSpecCtrl;
  if ( (KiSpeculationFeatures & 0x4000) != 0 )
    v9 = 3;
  *p_BpbKernelSpecCtrl = v9;
  CurrentPrcb->BpbUserSpecCtrl = v9;
  if ( (dword_1403AA26C & 0x40) != 0 || ((unsigned __int8)dword_1403AA26C & (unsigned __int8)v5) != 0 )
  {
    KiAddSpecCtrlSsbdBit(&CurrentPrcb->BpbKernelSpecCtrl);
    CurrentPrcb->BpbUserSpecCtrl = *p_BpbKernelSpecCtrl;
  }
  p_BpbNmiSpecCtrl = &CurrentPrcb->BpbNmiSpecCtrl;
  CurrentPrcb->BpbNmiSpecCtrl = 1;
  v12 = dword_1403AA26C;
  if ( (dword_1403AA26C & 0x40) != 0 || ((unsigned __int8)dword_1403AA26C & (unsigned __int8)v5) != 0 )
  {
    KiAddSpecCtrlSsbdBit(&CurrentPrcb->BpbNmiSpecCtrl);
    v12 = dword_1403AA26C;
  }
  v8 = KiSpeculationFeatures;
  if ( (KiSpeculationFeatures & 0x4000) != 0 )
  {
    *p_BpbNmiSpecCtrl |= 2u;
    v12 = dword_1403AA26C;
    v8 = KiSpeculationFeatures;
  }
  if ( (v8 & 0x2000) != 0 )
  {
    *p_BpbNmiSpecCtrl |= v5;
    v12 = dword_1403AA26C;
    v8 = KiSpeculationFeatures;
  }
  if ( (v8 & 0x2000000) != 0 )
  {
    if ( (v6 & 0x800000) == 0 )
    {
      v12 |= 0x100000u;
LABEL_62:
      dword_1403AA26C = v12;
      goto LABEL_63;
    }
    if ( byte_1403AA270 )
    {
      dword_1403AA26C = v12 | 0x800000;
      CurrentPrcb->BpbFeatures ^= (CurrentPrcb->BpbFeatures ^ (8 * byte_1403AA270)) & 0x18;
    }
    else
    {
      if ( (v8 & 0x4000000) == 0 )
      {
        v12 |= 0x200000u;
        goto LABEL_62;
      }
      dword_1403AA26C = v12 | 0x400000;
      *p_BpbKernelSpecCtrl |= 0x400u;
      CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
      *p_BpbNmiSpecCtrl |= 0x400u;
    }
    v12 = dword_1403AA26C;
    LOWORD(v8) = KiSpeculationFeatures;
  }
LABEL_63:
  if ( ((unsigned __int8)v12 & (unsigned __int8)v5) == 0 )
    goto LABEL_123;
LABEL_66:
  if ( (v8 & 0x10) != 0 )
  {
    CurrentPrcb->BpbNmiSpecCtrl = 1;
  }
  else
  {
    if ( (v8 & 0x42) != 0x42 )
      goto LABEL_71;
    CurrentPrcb->BpbNmiSpecCtrl = 2;
  }
  LOWORD(v8) = KiSpeculationFeatures;
  v12 = dword_1403AA26C;
LABEL_71:
  if ( (v8 & 0x4000) != 0 )
  {
    CurrentPrcb->BpbNmiSpecCtrl |= 2u;
    v12 = dword_1403AA26C;
    LOWORD(v8) = KiSpeculationFeatures;
  }
  if ( (v8 & 0x2000) != 0 )
  {
    CurrentPrcb->BpbNmiSpecCtrl |= v5;
    v12 = dword_1403AA26C;
    LOWORD(v8) = KiSpeculationFeatures;
  }
  if ( (v12 & 0x40) != 0 || ((unsigned __int8)v12 & (unsigned __int8)v5) != 0 )
  {
    KiAddSpecCtrlSsbdBit(&CurrentPrcb->BpbNmiSpecCtrl);
    v12 = dword_1403AA26C;
    LOWORD(v8) = KiSpeculationFeatures;
  }
  if ( (v8 & 1) == 0 )
  {
    if ( (v8 & 0x4002) == 2 && !v3 && (v8 & 0x50) != 0 )
    {
      dword_1403AA26C = v12 | 2;
      CurrentPrcb->BpbFeatures |= 1u;
      v12 = dword_1403AA26C;
      LOWORD(v8) = KiSpeculationFeatures;
    }
    if ( (v6 & 0x20) != 0 && (v8 & 0x42) == 0x42 )
    {
      v12 |= 1u;
      dword_1403AA26C = v12;
    }
    if ( (v8 & 0x4042) == 0x4042 )
    {
      v12 |= 0x800u;
      dword_1403AA26C = v12;
    }
    if ( CurrentPrcb->CpuVendor == 1 && (v8 & 0x10) == 0 && (v6 & 0x40) == 0 )
    {
      dword_1403AA26C = v12 | 0x20;
      goto LABEL_123;
    }
    if ( (unsigned int)KiIsBranchConfusionPresent(CurrentPrcb) )
    {
      KiSpeculationFeatures |= 0x8000u;
      if ( (unsigned int)KiIsBranchConfusionMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
      {
        if ( !(unsigned int)KiIsBranchConfusionMitigationSupported(v13, &KiSpeculationFeatures) )
          dword_1403AA26C |= 0x2000u;
      }
      else
      {
        dword_1403AA26C |= 0x1000u;
      }
    }
    if ( (unsigned int)KiIsTsaPresent(CurrentPrcb) )
    {
      KiSpeculationFeatures |= 0x8000000u;
      if ( !(unsigned int)KiIsTsaMitigationDesired() )
      {
        v14 = dword_1403AA26C | 0x1000000;
LABEL_102:
        dword_1403AA26C = v14;
        goto LABEL_105;
      }
      if ( !(unsigned int)KiIsTsaMitigationSupported(CurrentPrcb) )
      {
        v14 = dword_1403AA26C | 0x2000000;
        goto LABEL_102;
      }
      CurrentPrcb->BpbFeatures |= 0x20u;
    }
    v14 = dword_1403AA26C;
LABEL_105:
    if ( (KiSpeculationFeatures & 0x200000) == 0 )
      goto LABEL_111;
    if ( (KiSpeculationFeatures & 4) != 0 )
    {
      IsSrsoMitigationDesired = KiIsSrsoMitigationDesired(CurrentPrcb, &KiSpeculationFeatures);
      v14 = dword_1403AA26C;
      if ( IsSrsoMitigationDesired )
        goto LABEL_111;
      v14 = dword_1403AA26C | 0x8000;
    }
    else
    {
      v14 |= 0x10000u;
    }
    dword_1403AA26C = v14;
LABEL_111:
    if ( (KiSpeculationFeatures & 0x2000000) != 0 )
    {
      if ( (v6 & 0x800000) == 0 )
      {
        v16 = v14 | 0x100000;
LABEL_119:
        dword_1403AA26C = v16;
        goto LABEL_120;
      }
      if ( byte_1403AA270 )
      {
        dword_1403AA26C = v14 | 0x800000;
        CurrentPrcb->BpbFeatures ^= (CurrentPrcb->BpbFeatures ^ (8 * byte_1403AA270)) & 0x18;
      }
      else
      {
        if ( (KiSpeculationFeatures & 0x4000000) == 0 )
        {
          v16 = v14 | 0x200000;
          goto LABEL_119;
        }
        dword_1403AA26C = v14 | 0x400000;
        CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
        CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
        CurrentPrcb->BpbNmiSpecCtrl |= 0x400u;
      }
    }
LABEL_120:
    KiUpdateSpeculationControl(KeGetCurrentThread()->ApcState.Process);
    v4 = KiSsbdMsr;
  }
LABEL_123:
  BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = BpbKernelSpecCtrl;
  if ( BpbKernelSpecCtrl )
    __writemsr(0x48u, BpbKernelSpecCtrl);
  if ( (dword_1403AA26C & 0x40) != 0 && v4 != 72 )
    __writemsr(v4, __readmsr(v4) | KiSsbdBit);
  KiSetVirtualMitigationControl(CurrentPrcb);
  return 0LL;
}
