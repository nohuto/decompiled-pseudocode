/*
 * XREFs of ?ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18005BA68
 * Callers:
 *     ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005B680 (-OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?UpdateLastRecognizedPTPGesture@PTPProcessor@@AEAAXK@Z @ 0x18005B9B8 (-UpdateLastRecognizedPTPGesture@PTPProcessor@@AEAAXK@Z.c)
 *     ?DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x18005BFE8 (-DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 *     ?DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z @ 0x18005C0D0 (-DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z.c)
 */

__int64 __fastcall PTPProcessor::ProcesssDragStart(PTPProcessor *this, struct InputInfo *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r9d

  v2 = *((_DWORD *)this + 152);
  v3 = 0;
  if ( (v2 & 0x40) == 0 )
  {
    if ( (v2 & 0x100000) != 0 )
    {
      *((_DWORD *)this + 151) = 2;
      v5 = PTPProcessor::DeliverMouseMessage(this, a2, 1u, 1);
      v3 = v5;
      if ( v5 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v3;
        v7 = 467;
        goto LABEL_5;
      }
    }
    else if ( (v2 & 0x2080) != 0 )
    {
      *((_DWORD *)this + 151) = 3;
      v5 = PTPProcessor::DeliverTouchpadGestureMessage(this, a2, 0, 1);
      v3 = v5;
      if ( v5 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v3;
        v7 = 472;
        goto LABEL_5;
      }
    }
    else if ( (v2 & 0x400000) != 0 )
    {
      *((_DWORD *)this + 151) = 4;
      v5 = PTPProcessor::DeliverTouchpadGestureMessage(this, a2, 0, 1);
      v3 = v5;
      if ( v5 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v3;
        v7 = 477;
        goto LABEL_5;
      }
    }
LABEL_18:
    PTPProcessor::UpdateLastRecognizedPTPGesture(this, *((_DWORD *)this + 152));
    return v3;
  }
  *((_DWORD *)this + 151) = 1;
  v5 = PTPProcessor::DeliverMouseMessage(this, a2, 0, 1);
  v3 = v5;
  if ( v5 >= 0 )
    goto LABEL_18;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 462;
LABEL_5:
    Template_qqq(v6, &MinInput_Warning_CheckResult, 11, v7, v5);
  }
  return v3;
}
