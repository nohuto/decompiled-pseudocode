/*
 * XREFs of KeOptimizeSpecCtrlSettings @ 0x140208044
 * Callers:
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 * Callees:
 *     KiAddSpecCtrlSsbdBit @ 0x1402085F0 (KiAddSpecCtrlSsbdBit.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x140208600 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x140208AA4 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x140208AD8 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x140208AFC (KiIsBranchConfusionPresent.c)
 *     KiIsSrsoMitigationDesired @ 0x140208C1C (KiIsSrsoMitigationDesired.c)
 *     KiIsTsaMitigationDesired @ 0x140208C9C (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x140208CB0 (KiIsTsaMitigationSupported.c)
 *     KiIsTsaPresent @ 0x140208D4C (KiIsTsaPresent.c)
 *     KiSetVirtualMitigationControl @ 0x140208DD4 (KiSetVirtualMitigationControl.c)
 *     KiUpdateSpeculationControl @ 0x140208FA0 (KiUpdateSpeculationControl.c)
 */

ULONG_PTR __fastcall KeOptimizeSpecCtrlSettings(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int16 v2; // ax
  unsigned int v3; // r10d
  int v4; // edi
  int v5; // ecx
  unsigned int v6; // ecx
  int v7; // r11d
  int v8; // edx
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
  v2 = KiSpeculationFeatures;
  if ( ((CurrentPrcb->CoreProcessorSet - 1) & CurrentPrcb->CoreProcessorSet) != 0 )
  {
    v2 = KiSpeculationFeatures | 2;
    LODWORD(KiSpeculationFeatures) = KiSpeculationFeatures | 2;
  }
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    KiDetectAmdNonArchSsbdSupport(CurrentPrcb, &KiSpeculationFeatures);
    v2 = KiSpeculationFeatures;
  }
  v3 = KiSsbdMsr;
  v4 = KiFeatureSettings;
  if ( (v2 & 0x80u) == 0 || (v2 & 0x100) != 0 )
    goto LABEL_13;
  if ( (KiFeatureSettings & 8) != 0 )
  {
    v5 = dword_1403D123C;
LABEL_9:
    v6 = v5 | 0x40;
    goto LABEL_14;
  }
  if ( (KiFeatureSettings & 0x10) == 0 )
  {
LABEL_13:
    v6 = dword_1403D123C;
  }
  else
  {
    v5 = dword_1403D123C;
    if ( KiSsbdMsr != 72 )
      goto LABEL_9;
    v6 = dword_1403D123C | 0x80;
  }
LABEL_14:
  if ( (v2 & 4) == 0 )
    v6 |= 8u;
  if ( (KiFeatureSettings & 1) != 0 || (KiFeatureSettings & 4) != 0 )
    v6 |= 4u;
  if ( (v6 & 4) != 0 || (v6 & 8) != 0 )
  {
    dword_1403D123C = v6 & 0xFFFFFF3F | ((unsigned __int8)v6 | (unsigned __int8)(v6 >> 1)) & 0x40;
    if ( (((unsigned __int8)v6 | (unsigned __int8)(v6 >> 1)) & 0x40) != 0 )
    {
      KiAddSpecCtrlSsbdBit(&CurrentPrcb->BpbKernelSpecCtrl);
      CurrentPrcb->BpbUserSpecCtrl = *v17;
    }
    goto LABEL_114;
  }
  v7 = 0x4000;
  dword_1403D123C = v6 | 0x10;
  CurrentPrcb->BpbFeatures |= 2u;
  v8 = KiSpeculationFeatures;
  if ( (KiSpeculationFeatures & 1) == 0 )
  {
    v12 = dword_1403D123C;
    goto LABEL_47;
  }
  v9 = 1;
  if ( (KiSpeculationFeatures & 0x4000) != 0 )
    v9 = 3;
  p_BpbKernelSpecCtrl = &CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbKernelSpecCtrl = v9;
  CurrentPrcb->BpbUserSpecCtrl = v9;
  if ( (dword_1403D123C & 0x40) != 0 || (dword_1403D123C & 0x80) != 0 )
  {
    KiAddSpecCtrlSsbdBit(&CurrentPrcb->BpbKernelSpecCtrl);
    CurrentPrcb->BpbUserSpecCtrl = *p_BpbKernelSpecCtrl;
  }
  p_BpbNmiSpecCtrl = &CurrentPrcb->BpbNmiSpecCtrl;
  CurrentPrcb->BpbNmiSpecCtrl = 1;
  v12 = dword_1403D123C;
  if ( (dword_1403D123C & 0x40) != 0 || (dword_1403D123C & 0x80) != 0 )
  {
    KiAddSpecCtrlSsbdBit(&CurrentPrcb->BpbNmiSpecCtrl);
    v12 = dword_1403D123C;
  }
  v8 = KiSpeculationFeatures;
  if ( ((unsigned int)KiSpeculationFeatures & v7) != 0 )
  {
    *p_BpbNmiSpecCtrl |= 2u;
    v12 = dword_1403D123C;
    v8 = KiSpeculationFeatures;
  }
  if ( (v8 & 0x2000) != 0 )
  {
    *p_BpbNmiSpecCtrl |= 0x80u;
    v12 = dword_1403D123C;
    v8 = KiSpeculationFeatures;
  }
  if ( (v8 & 0x2000000) != 0 )
  {
    if ( (v4 & 0x800000) == 0 )
    {
      v12 |= 0x100000u;
LABEL_43:
      dword_1403D123C = v12;
      goto LABEL_44;
    }
    if ( byte_1403D1240 )
    {
      dword_1403D123C = v12 | 0x800000;
      CurrentPrcb->BpbFeatures ^= (CurrentPrcb->BpbFeatures ^ (8 * byte_1403D1240)) & 0x18;
    }
    else
    {
      if ( (v8 & 0x4000000) == 0 )
      {
        v12 |= 0x200000u;
        goto LABEL_43;
      }
      dword_1403D123C = v12 | 0x400000;
      *p_BpbKernelSpecCtrl |= 0x400u;
      CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
      *p_BpbNmiSpecCtrl |= 0x400u;
    }
    v12 = dword_1403D123C;
    v8 = KiSpeculationFeatures;
  }
LABEL_44:
  if ( (v12 & 0x80) == 0 )
    goto LABEL_114;
LABEL_47:
  if ( (v8 & 0x10) != 0 )
  {
    CurrentPrcb->BpbNmiSpecCtrl = 1;
  }
  else
  {
    if ( (v8 & 0x42) != 0x42 )
      goto LABEL_52;
    CurrentPrcb->BpbNmiSpecCtrl = 2;
  }
  v8 = KiSpeculationFeatures;
  v12 = dword_1403D123C;
LABEL_52:
  if ( (v8 & v7) != 0 )
  {
    CurrentPrcb->BpbNmiSpecCtrl |= 2u;
    v12 = dword_1403D123C;
    LOWORD(v8) = KiSpeculationFeatures;
  }
  if ( (v8 & 0x2000) != 0 )
  {
    CurrentPrcb->BpbNmiSpecCtrl |= 0x80u;
    v12 = dword_1403D123C;
    LOWORD(v8) = KiSpeculationFeatures;
  }
  if ( (v12 & 0x40) != 0 || (v12 & 0x80) != 0 )
  {
    KiAddSpecCtrlSsbdBit(&CurrentPrcb->BpbNmiSpecCtrl);
    v12 = dword_1403D123C;
    LOWORD(v8) = KiSpeculationFeatures;
  }
  if ( (v8 & 1) == 0 )
  {
    if ( (v8 & 0x4002) == 2 && (HvlpFlags & 1) == 0 && (v8 & 0x50) != 0 )
    {
      dword_1403D123C = v12 | 2;
      CurrentPrcb->BpbFeatures |= 1u;
      v12 = dword_1403D123C;
      LOWORD(v8) = KiSpeculationFeatures;
    }
    if ( (v4 & 0x20) != 0 && (v8 & 0x42) == 0x42 )
    {
      v12 |= 1u;
      dword_1403D123C = v12;
    }
    if ( (v8 & 0x4042) == 0x4042 )
    {
      v12 |= 0x800u;
      dword_1403D123C = v12;
    }
    if ( CurrentPrcb->CpuVendor == 1 && (v8 & 0x10) == 0 && (v4 & 0x40) == 0 )
    {
      dword_1403D123C = v12 | 0x20;
      goto LABEL_114;
    }
    if ( (unsigned int)KiIsBranchConfusionPresent(CurrentPrcb) )
    {
      LODWORD(KiSpeculationFeatures) = KiSpeculationFeatures | 0x8000;
      if ( (unsigned int)KiIsBranchConfusionMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
      {
        if ( !(unsigned int)KiIsBranchConfusionMitigationSupported(v13, &KiSpeculationFeatures) )
          dword_1403D123C |= 0x2000u;
      }
      else
      {
        dword_1403D123C |= 0x1000u;
      }
    }
    if ( (unsigned int)KiIsTsaPresent(CurrentPrcb) )
    {
      LODWORD(KiSpeculationFeatures) = KiSpeculationFeatures | 0x8000000;
      if ( !(unsigned int)KiIsTsaMitigationDesired() )
      {
        v14 = dword_1403D123C | 0x1000000;
LABEL_83:
        dword_1403D123C = v14;
        goto LABEL_86;
      }
      if ( !(unsigned int)KiIsTsaMitigationSupported(CurrentPrcb) )
      {
        v14 = dword_1403D123C | 0x2000000;
        goto LABEL_83;
      }
      CurrentPrcb->BpbFeatures |= 0x20u;
    }
    v14 = dword_1403D123C;
LABEL_86:
    if ( (KiSpeculationFeatures & 0x200000) == 0 )
      goto LABEL_92;
    if ( (KiSpeculationFeatures & 4) != 0 )
    {
      IsSrsoMitigationDesired = KiIsSrsoMitigationDesired(CurrentPrcb, &KiSpeculationFeatures);
      v14 = dword_1403D123C;
      if ( IsSrsoMitigationDesired )
        goto LABEL_92;
      v14 = dword_1403D123C | 0x8000;
    }
    else
    {
      v14 |= 0x10000u;
    }
    dword_1403D123C = v14;
LABEL_92:
    if ( (KiSpeculationFeatures & 0x800000) == 0 )
      goto LABEL_100;
    if ( (KiSpeculationFeatures & 0x1000000) != 0 )
    {
      if ( (v4 & 0x8000000) != 0 )
      {
        v14 |= 0x20000u;
      }
      else
      {
        if ( KiKvaShadow )
          goto LABEL_100;
        v14 |= 0x80000u;
      }
    }
    else
    {
      v14 |= 0x40000u;
    }
    dword_1403D123C = v14;
LABEL_100:
    if ( (v14 & 0x80000) != 0 )
    {
      CurrentPrcb->VerwSelector = 24;
      CurrentPrcb->BpbState |= 0x80u;
      v14 = dword_1403D123C;
    }
    if ( (KiSpeculationFeatures & 0x2000000) == 0 )
      goto LABEL_111;
    if ( (v4 & 0x800000) == 0 )
    {
      v16 = v14 | 0x100000;
LABEL_110:
      dword_1403D123C = v16;
      goto LABEL_111;
    }
    if ( byte_1403D1240 )
    {
      dword_1403D123C = v14 | 0x800000;
      CurrentPrcb->BpbFeatures ^= (CurrentPrcb->BpbFeatures ^ (8 * byte_1403D1240)) & 0x18;
    }
    else
    {
      if ( (KiSpeculationFeatures & 0x4000000) == 0 )
      {
        v16 = v14 | 0x200000;
        goto LABEL_110;
      }
      dword_1403D123C = v14 | 0x400000;
      CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
      CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
      CurrentPrcb->BpbNmiSpecCtrl |= 0x400u;
    }
LABEL_111:
    KiUpdateSpeculationControl(KeGetCurrentThread()->ApcState.Process, 24LL);
    v3 = KiSsbdMsr;
  }
LABEL_114:
  BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = BpbKernelSpecCtrl;
  if ( BpbKernelSpecCtrl )
    __writemsr(0x48u, BpbKernelSpecCtrl);
  if ( (dword_1403D123C & 0x40) != 0 && v3 != 72 )
    __writemsr(v3, __readmsr(v3) | KiSsbdBit);
  KiSetVirtualMitigationControl(CurrentPrcb);
  return 0LL;
}
