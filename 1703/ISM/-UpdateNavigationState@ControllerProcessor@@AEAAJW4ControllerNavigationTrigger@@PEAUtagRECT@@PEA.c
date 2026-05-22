/*
 * XREFs of ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180032A9C
 * Callers:
 *     ?NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRect@@UControllerNavigationPoint@@@Z @ 0x180031010 (-NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRe.c)
 *     ?NavigationPause@ControllerNavigationManager@@UEAAJXZ @ 0x1800311A0 (-NavigationPause@ControllerNavigationManager@@UEAAJXZ.c)
 *     ?NavigationResume@ControllerNavigationManager@@UEAAJXZ @ 0x180031230 (-NavigationResume@ControllerNavigationManager@@UEAAJXZ.c)
 *     ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x180032A40 (-NavigationDisable@ControllerProcessor@@QEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180032D1C (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TransitionToDisabled@ControllerProcessor@@AEAAJXZ @ 0x180032F2C (-TransitionToDisabled@ControllerProcessor@@AEAAJXZ.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180032FA4 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180033154 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18003332C (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::UpdateNavigationState(
        ControllerProcessor *a1,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT *a4)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int updated; // eax
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // edx
  int v13; // edx

  v5 = 0;
  v6 = *((_DWORD *)a1 + 59);
  if ( !v6 )
  {
    if ( a2 )
    {
      v13 = a2 - 1;
      if ( !v13 )
      {
        updated = ControllerProcessor::TurnNavigationOff(a1);
        v5 = updated;
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_50;
          v11 = 696;
          goto LABEL_49;
        }
        goto LABEL_45;
      }
      if ( v13 != 1 )
        return v5;
      updated = ControllerProcessor::TurnNavigationOff(a1);
      if ( updated < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_50;
        v11 = 702;
        goto LABEL_49;
      }
      *((_DWORD *)a1 + 59) = 2;
      updated = ControllerProcessor::TransitionToDisabled(a1);
      v5 = updated;
      if ( updated >= 0 )
        return v5;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 704;
        goto LABEL_49;
      }
    }
    else
    {
      updated = ControllerProcessor::UpdateNavigationParameters(a1, a3);
      v5 = updated;
      if ( updated >= 0 )
        return v5;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 691;
        goto LABEL_49;
      }
    }
    goto LABEL_50;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a2 )
    {
      v12 = a2 - 2;
      if ( !v12 )
      {
        updated = ControllerProcessor::TransitionToDisabled(a1);
        v5 = updated;
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_50;
          v11 = 722;
          goto LABEL_49;
        }
LABEL_13:
        *((_DWORD *)a1 + 59) = 3;
        return v5;
      }
      if ( v12 != 1 )
        return v5;
      updated = ControllerProcessor::TurnNavigationOn(a1);
      v5 = updated;
      if ( updated >= 0 )
      {
        *((_DWORD *)a1 + 59) = 0;
        return v5;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 728;
        goto LABEL_49;
      }
    }
    else
    {
      updated = ControllerProcessor::UpdateNavigationParameters(a1, a3);
      v5 = updated;
      if ( updated >= 0 )
        return v5;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 717;
        goto LABEL_49;
      }
    }
LABEL_50:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
        return v5;
      goto LABEL_13;
    }
    updated = ControllerProcessor::TransitionToEnabled(a1, a3, a4);
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_50;
      v11 = 742;
      goto LABEL_49;
    }
    *((_DWORD *)a1 + 59) = 0;
    updated = ControllerProcessor::TurnNavigationOn(a1);
    v5 = updated;
    if ( updated >= 0 )
      return v5;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v11 = 744;
LABEL_49:
      Template_qqq(v10, &MinInput_Warning_CheckResult, 12, v11, updated);
      goto LABEL_50;
    }
    goto LABEL_50;
  }
  if ( v8 != 1 )
    return v5;
  if ( !a2 )
  {
    updated = ControllerProcessor::TransitionToEnabled(a1, a3, a4);
    v5 = updated;
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_50;
      v11 = 762;
      goto LABEL_49;
    }
LABEL_45:
    *((_DWORD *)a1 + 59) = 1;
    return v5;
  }
  if ( a2 == 3 )
    *((_DWORD *)a1 + 59) = 2;
  return v5;
}
