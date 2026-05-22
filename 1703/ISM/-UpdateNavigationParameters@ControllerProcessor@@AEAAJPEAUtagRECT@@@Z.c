/*
 * XREFs of ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180032D1C
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180032A9C (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18003425C (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180034614 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180035B88 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::UpdateNavigationParameters(ControllerProcessor *this, struct tagRECT *a2)
{
  unsigned int v2; // esi
  __int64 left; // rcx
  struct tagPOINT v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  bool v9; // zf
  __int128 v11; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    left = (unsigned int)a2->left;
    if ( *((_QWORD *)this + 37) != *(_QWORD *)&a2->left
      || *((_DWORD *)this + 76) != a2->right
      || *((_DWORD *)this + 77) != a2->bottom )
    {
      if ( a2->top >= a2->bottom || (int)left >= a2->right )
      {
        v2 = -2147024809;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(left, &MinInput_Warning_CheckResult, 12, 791, 87);
      }
      else
      {
        if ( *((_DWORD *)this + 59) )
        {
          if ( !PtInRect(a2, *(POINT *)((char *)this + 316)) )
            *(struct tagPOINT *)((char *)this + 316) = ControllerProcessor::AdjustPointToBounds(
                                                         *(struct tagPOINT *)((char *)this + 316),
                                                         a2);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 33) + 24LL))(
            *((_QWORD *)this + 33),
            (char *)this + 316,
            (char *)this + 320);
          if ( !PtInRect(a2, *(POINT *)((char *)this + 316)) )
          {
            v6 = ControllerProcessor::AdjustPointToBounds(*(struct tagPOINT *)((char *)this + 316), a2);
            v7 = ControllerProcessor::SetPointerPosition(this, v6, 0);
            v2 = v7;
            if ( v7 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                Template_qqq(v8, &MinInput_Warning_CheckResult, 12, 803, v7);
              if ( IsDebuggerPresent() )
                __debugbreak();
              __fastfail(7u);
            }
          }
        }
        v9 = *((_DWORD *)this + 302) == 0;
        *(struct tagRECT *)((char *)this + 296) = *a2;
        LODWORD(v11) = (int)(float)((float)*((int *)this + 74) + 8.0);
        DWORD1(v11) = (int)(float)((float)*((int *)this + 75) + 8.0);
        DWORD2(v11) = (int)(float)((float)*((int *)this + 76) - 8.0);
        HIDWORD(v11) = (int)(float)((float)*((int *)this + 77) - 8.0);
        *((_OWORD *)this + 22) = v11;
        if ( v9 )
          ControllerProcessor::UpdateManipulationInjectionRect(this);
        else
          *((_BYTE *)this + 1212) = 1;
      }
    }
  }
  return v2;
}
