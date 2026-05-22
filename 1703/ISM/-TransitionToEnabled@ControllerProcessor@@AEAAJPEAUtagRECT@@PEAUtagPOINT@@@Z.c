/*
 * XREFs of ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180032FA4
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180032A9C (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180034614 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180035B88 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::TransitionToEnabled(
        ControllerProcessor *this,
        struct tagRECT *a2,
        struct tagPOINT *a3)
{
  unsigned int v3; // esi
  POINT v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r9d
  __int128 v11; // [rsp+30h] [rbp-18h]

  v3 = 0;
  if ( !a2 )
  {
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v3;
    v9 = 902;
    goto LABEL_20;
  }
  if ( a2->top >= a2->bottom || a2->left >= a2->right )
  {
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v3;
    v9 = 876;
LABEL_20:
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 12, v9, 87);
    return v3;
  }
  if ( a3 )
  {
    v6 = *a3;
    *(struct tagPOINT *)((char *)this + 316) = *a3;
    if ( !PtInRect(a2, v6) )
      *(struct tagPOINT *)((char *)this + 316) = ControllerProcessor::AdjustPointToBounds(
                                                   *(struct tagPOINT *)((char *)this + 316),
                                                   a2);
  }
  *(struct tagRECT *)((char *)this + 296) = *a2;
  LODWORD(v11) = (int)(float)((float)*((int *)this + 74) + 8.0);
  DWORD1(v11) = (int)(float)((float)*((int *)this + 75) + 8.0);
  DWORD2(v11) = (int)(float)((float)*((int *)this + 76) - 8.0);
  HIDWORD(v11) = (int)(float)((float)*((int *)this + 77) - 8.0);
  *((_OWORD *)this + 22) = v11;
  if ( !*((_BYTE *)this + 1272) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 3) + 40LL))(
           *((_QWORD *)this + 3),
           (char *)this + 1216,
           (char *)this + 48);
    v3 = v7;
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v8, &MinInput_Warning_CheckResult, 12, 894, v7);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    *((_BYTE *)this + 1272) = 1;
  }
  ControllerProcessor::UpdateManipulationInjectionRect(this);
  return v3;
}
