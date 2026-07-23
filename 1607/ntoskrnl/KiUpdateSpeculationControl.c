/*
 * XREFs of KiUpdateSpeculationControl @ 0x1401D9EB0
 * Callers:
 *     SwapContext @ 0x140166570 (SwapContext.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1401D8F28 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1401715C0 (KiFlushCurrentRsb.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x1401D9D48 (KiUpdateSpecCtrlEnhancedIBRS.c)
 */

__int64 __fastcall KiUpdateSpeculationControl(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  unsigned __int16 BpbState; // dx
  unsigned __int16 BpbCurrentSpecCtrl; // di
  unsigned __int16 v5; // dx
  bool v6; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned int)dword_1403AA26C;
  if ( (dword_1403AA26C & 0x10) == 0 )
    return result;
  CurrentPrcb->BpbState &= 0xFED1u;
  BpbState = CurrentPrcb->BpbState;
  if ( (KiSpeculationFeatures & 1) != 0 )
    return KiUpdateSpecCtrlEnhancedIBRS((__int64)CurrentPrcb, a1);
  BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
  if ( (dword_1403AA26C & 0x40) != 0 && KiSsbdMsr == 72 )
  {
    CurrentPrcb->BpbKernelSpecCtrl = 4;
    BpbCurrentSpecCtrl |= 4u;
    CurrentPrcb->BpbUserSpecCtrl = 4;
  }
  else
  {
    CurrentPrcb->BpbKernelSpecCtrl = 0;
    CurrentPrcb->BpbUserSpecCtrl = 0;
  }
  if ( (KiSpeculationFeatures & 0x2000) != 0 )
    CurrentPrcb->BpbKernelSpecCtrl |= 0x80u;
  if ( (dword_1403AA26C & 0x800) != 0 )
    CurrentPrcb->BpbKernelSpecCtrl |= 2u;
  if ( (dword_1403AA26C & 0x400000) != 0 )
    CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
  if ( (dword_1403AA26C & 0x20) == 0 )
  {
    if ( *(_QWORD *)(a1 + 1976) )
    {
      if ( ((KiSpeculationFeatures & 0x8000) == 0 || (dword_1403AA26C & 0x1000) != 0 || (dword_1403AA26C & 0x2000) != 0)
        && ((KiSpeculationFeatures & 0x200000) == 0
         || (dword_1403AA26C & 0x8000) != 0
         || (dword_1403AA26C & 0x10000) != 0) )
      {
        if ( (KiSpeculationFeatures & 0x10) != 0 )
        {
          CurrentPrcb->BpbKernelSpecCtrl |= 1u;
          v6 = (KiSpeculationFeatures & 0x20) == 0;
        }
        else
        {
          if ( (KiSpeculationFeatures & 0x42) == 0x42 )
            CurrentPrcb->BpbKernelSpecCtrl |= 2u;
          BpbState |= 8u;
          CurrentPrcb->BpbState = BpbState;
          v6 = (KiSpeculationFeatures & 8) == 0;
        }
        if ( v6 )
          CurrentPrcb->BpbState = BpbState | 2;
      }
      else
      {
        v5 = BpbState | 8;
        CurrentPrcb->BpbState = v5;
        if ( (KiSpeculationFeatures & 8) == 0 )
          CurrentPrcb->BpbState = v5 | 2;
        if ( (KiSpeculationFeatures & 2) != 0 )
        {
          if ( (KiSpeculationFeatures & 0x40) != 0 )
          {
            CurrentPrcb->BpbKernelSpecCtrl |= 2u;
          }
          else if ( (KiSpeculationFeatures & 0x10) != 0 )
          {
            CurrentPrcb->BpbKernelSpecCtrl |= 1u;
          }
        }
      }
      if ( (CurrentPrcb->BpbFeatures & 0x18) != 0 )
        CurrentPrcb->BpbState |= 0x100u;
    }
    else if ( (KiSpeculationFeatures & 2) != 0 )
    {
      if ( (KiSpeculationFeatures & 0x40) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl |= 2u;
      }
      else if ( (KiSpeculationFeatures & 0x10) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl |= 1u;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 1976) && (dword_1403AA26C & 0x80) != 0 )
  {
    CurrentPrcb->BpbKernelSpecCtrl |= 4u;
    BpbCurrentSpecCtrl |= 4u;
  }
  if ( (KiSpeculationFeatures & 0x42) == 0x42
    && ((dword_1403AA26C & 1) != 0 || (*(_DWORD *)(a1 + 1740) & 0x1000000) != 0) )
  {
    CurrentPrcb->BpbUserSpecCtrl |= 2u;
  }
  if ( (dword_1403AA26C & 0x800) != 0 )
    CurrentPrcb->BpbUserSpecCtrl |= 2u;
  if ( (dword_1403AA26C & 0x80) != 0 && (*(_DWORD *)(a1 + 1740) & 0x2000000) != 0 )
    CurrentPrcb->BpbUserSpecCtrl |= 4u;
  if ( (dword_1403AA26C & 0x400000) != 0 )
    CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
  result = CurrentPrcb->TrappedSecurityDomain;
  if ( result && result != *(_QWORD *)(a1 + 1976) )
  {
    if ( (BpbCurrentSpecCtrl & 1) != 0 )
    {
      if ( (KiSpeculationFeatures & 2) != 0 )
      {
        if ( (KiSpeculationFeatures & 0x40) != 0 )
          BpbCurrentSpecCtrl = BpbCurrentSpecCtrl & 4 | 2;
      }
      else
      {
        BpbCurrentSpecCtrl &= 4u;
      }
      if ( (BpbCurrentSpecCtrl & 1) == 0 )
      {
        __writemsr(0x49u, 1uLL);
        if ( (KiSpeculationFeatures & 8) == 0 )
          KiFlushCurrentRsb();
        result = 65499LL;
        CurrentPrcb->TrappedSecurityDomain = 0LL;
        CurrentPrcb->BpbState &= 0xFFDBu;
        goto LABEL_71;
      }
LABEL_69:
      CurrentPrcb->BpbState |= 4u;
      result = (unsigned int)KiSpeculationFeatures;
      if ( (KiSpeculationFeatures & 8) == 0 )
        CurrentPrcb->BpbState |= 0x20u;
      goto LABEL_71;
    }
    result = (unsigned int)dword_1403AA26C;
    if ( (dword_1403AA26C & 0x20) != 0 )
      goto LABEL_69;
  }
LABEL_71:
  if ( (KiSpeculationFeatures & 0x2000) != 0 )
    BpbCurrentSpecCtrl |= 0x80u;
  if ( (dword_1403AA26C & 0x800) != 0 )
    BpbCurrentSpecCtrl |= 2u;
  if ( (dword_1403AA26C & 0x400000) != 0 )
  {
    result = 1024LL;
    BpbCurrentSpecCtrl |= 0x400u;
  }
  if ( BpbCurrentSpecCtrl != CurrentPrcb->BpbCurrentSpecCtrl )
  {
    result = BpbCurrentSpecCtrl;
    CurrentPrcb->BpbCurrentSpecCtrl = BpbCurrentSpecCtrl;
    __writemsr(0x48u, BpbCurrentSpecCtrl);
  }
  return result;
}
