/*
 * XREFs of ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005B680
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     Template_qq @ 0x18000D5D4 (Template_qq.c)
 *     ?ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18005BA68 (-ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessDragContinue@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18005BB94 (-ProcessDragContinue@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessTap@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18005BD74 (-ProcessTap@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessDelayedTap@PTPProcessor@@AEAAJXZ @ 0x18005BED8 (-ProcessDelayedTap@PTPProcessor@@AEAAJXZ.c)
 *     ?DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x18005BFE8 (-DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 *     ?DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z @ 0x18005C0D0 (-DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPProcessor::OnInputReport(__int64 this, struct InputInfo *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  int v5; // r9d
  int v6; // r9d
  int v7; // ebp
  int v8; // r15d
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r9d
  int v21; // eax
  int v22; // eax
  int v23; // r9d

  v2 = 0;
  v4 = this;
  if ( (*(_DWORD *)a2 & 0x20) == 0 )
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 286;
LABEL_4:
      Template_qqq(this, &MinInput_Warning_CheckResult, 11, v5, v2);
      return v2;
    }
    return v2;
  }
  *(_DWORD *)a2 = 8;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(this + 640) + 24LL))(*(_QWORD *)(this + 640));
  v6 = *(_DWORD *)(v4 + 600);
  this = *(unsigned int *)(v4 + 592);
  v7 = v6 & 0x200801;
  v8 = v6 & 0x5020C0;
  if ( !(_DWORD)this )
  {
    if ( (*(_DWORD *)(v4 + 600) & 0x800) == 0 )
      this = (*(_DWORD *)(v4 + 600) & 0x400) != 0;
    if ( (_BYTE)this )
    {
      if ( *(_BYTE *)(v4 + 664) )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 656) + 96LL))(*(_QWORD *)(v4 + 656));
        v2 = v9;
        if ( v9 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v10, &MinInput_Warning_CheckResult, 11, 349, v9);
      }
      return v2;
    }
    if ( !v6 )
      return v2;
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      Template_qq(this, &MinInput_Log_PTPGesture, 11, v6);
    if ( *(_BYTE *)(v4 + 664) )
    {
      if ( (*(_DWORD *)(v4 + 600) & 0x100040) != 0 )
      {
        v11 = *(_QWORD *)(v4 + 656);
        *(_BYTE *)(v4 + 664) = 0;
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11);
        v2 = v12;
        if ( v12 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v13, &MinInput_Warning_CheckResult, 11, 366, v12);
          return v2;
        }
        *(_DWORD *)(v4 + 600) &= ~0x40u;
        *(_DWORD *)(v4 + 600) |= 0x100000u;
      }
      else
      {
        v16 = PTPProcessor::ProcessDelayedTap((PTPProcessor *)(v4 - 8));
        v2 = v16;
        if ( v16 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v17, &MinInput_Warning_CheckResult, 11, 378, v16);
          return v2;
        }
      }
    }
    if ( v7 )
    {
      v14 = PTPProcessor::ProcessTap((PTPProcessor *)(v4 - 8), a2);
      v2 = v14;
      if ( v14 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v15, &MinInput_Warning_CheckResult, 11, 384, v14);
        return v2;
      }
LABEL_49:
      *(_DWORD *)(v4 + 592) = 0;
      return v2;
    }
    if ( !v8 )
      return v2;
    v18 = PTPProcessor::ProcesssDragStart((PTPProcessor *)(v4 - 8), a2);
    v2 = v18;
    if ( v18 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v2;
      v20 = 389;
LABEL_53:
      Template_qqq(v19, &MinInput_Warning_CheckResult, 11, v20, v18);
      return v2;
    }
    goto LABEL_54;
  }
  if ( (_DWORD)this != 1 )
    return v2;
  if ( !*(_BYTE *)(v4 + 612) )
  {
    v18 = PTPProcessor::ProcessDragContinue((PTPProcessor *)(v4 - 8), a2);
    v2 = v18;
    if ( v18 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v2;
      v20 = 403;
      goto LABEL_53;
    }
LABEL_54:
    *(_DWORD *)(v4 + 592) = 1;
    return v2;
  }
  v21 = *(_DWORD *)(v4 + 596);
  if ( v21 == 2 )
  {
    v22 = PTPProcessor::DeliverMouseMessage((PTPProcessor *)(v4 - 8), a2, 2u, 0);
    v2 = v22;
    if ( v22 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_46;
      v23 = 566;
      goto LABEL_40;
    }
    goto LABEL_45;
  }
  if ( (unsigned int)(v21 - 3) > 1
    || (v22 = PTPProcessor::DeliverTouchpadGestureMessage((PTPProcessor *)(v4 - 8), a2, 1, 0), v2 = v22, v22 >= 0) )
  {
LABEL_45:
    *(_DWORD *)(v4 + 596) = 0;
    *(_DWORD *)(v4 + 604) = 0;
    *(_BYTE *)(v4 + 613) = 0;
    goto LABEL_46;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v23 = 571;
LABEL_40:
    Template_qqq(this, &MinInput_Warning_CheckResult, 11, v23, v22);
  }
LABEL_46:
  if ( (v2 & 0x80000000) == 0 )
    goto LABEL_49;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 398;
    goto LABEL_4;
  }
  return v2;
}
