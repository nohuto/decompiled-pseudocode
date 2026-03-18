/*
 * XREFs of xxxTrackMouseMove @ 0x1C007AAC8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0004758 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0064FB4 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _SetSystemTimer @ 0x1C0079ECC (_SetSystemTimer.c)
 *     xxxCancelMouseMoveTracking @ 0x1C007AECC (xxxCancelMouseMoveTracking.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C007B0FC (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C007B15C (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxResetTooltip @ 0x1C007B17C (xxxResetTooltip.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     ThreadLockExchangeAlways @ 0x1C00DF9CC (ThreadLockExchangeAlways.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0120C4C (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0121BE0 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01E1EC4 (GetActiveTrackPwnd.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C02279A0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, int a2, int a3)
{
  __int64 v3; // r15
  unsigned int v4; // edi
  struct tagWND *v7; // rsi
  __int64 v8; // rbx
  struct tagWND *v9; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND *v11; // r9
  int v12; // ecx
  BOOL v13; // r13d
  __int64 v14; // r15
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned __int16 *v21; // rax
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 ActiveTrackPwnd; // rdi
  int *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // [rsp+48h] [rbp-19h] BYREF
  __int64 v32; // [rsp+50h] [rbp-11h]
  _QWORD v33[3]; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v34[4]; // [rsp+78h] [rbp+17h] BYREF

  v3 = gptiCurrent;
  v4 = 0;
  v7 = a1;
  v8 = *(_QWORD *)(gptiCurrent + 416LL);
  v33[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v33;
  ++*((_DWORD *)a1 + 2);
  v33[1] = a1;
  if ( a3 == 512
    && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0
    && IsCompositionInputWindow(a1)
    && (*((_BYTE *)v7 + 291) & 4) == 0
    && *((_QWORD *)v7 + 11) == GetMessageWindow((__int64)v7) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v9);
    if ( CompositionInputWindowUIOwner )
    {
      v7 = CompositionInputWindowUIOwner;
      ThreadLockExchangeAlways(CompositionInputWindowUIOwner, v33);
      v3 = gptiCurrent;
    }
  }
  v11 = *(struct tagWND **)(v8 + 176);
  v12 = *(_DWORD *)(v8 + 32);
  v13 = v11 != v7;
  if ( (v12 & 0x5C0) != 0 && v11 )
  {
    v15 = *((_QWORD *)v11 + 2);
    v16 = *(_QWORD *)(v15 + 392);
    if ( *(_QWORD *)(*(_QWORD *)v3 + 392LL) == v16 )
    {
      v4 = 1024;
    }
    else if ( (v12 & 0x500) != 0 )
    {
      PostEventMessageEx(v15, v16, 11, (_DWORD)v11, v12, *(int *)(v8 + 184), 1024LL, 0LL);
      *(_DWORD *)(v8 + 32) &= 0xFFFFFAFF;
    }
    if ( a2 == 1 || a3 != 512 )
      v4 |= 0x100u;
    if ( v13 || (*(_DWORD *)(v8 + 184) == 1) != (a2 == 1) )
      v4 |= 0xC0u;
    PushW32ThreadLock(v8, v34, UserDereferenceObject);
    ObfReferenceObject((PVOID)v8);
    v14 = v8 + 176;
    v17 = *(_QWORD *)(v8 + 176);
    v31 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v31;
    v32 = v17;
    ++*(_DWORD *)(v17 + 8);
    xxxCancelMouseMoveTracking(*(unsigned int *)(v8 + 32), *(_QWORD *)(v8 + 176), *(unsigned int *)(v8 + 184), v4);
    ThreadUnlock1(v19, v18);
    *(_DWORD *)(v8 + 32) &= ~v4;
  }
  else
  {
    PushW32ThreadLock(v8, v34, UserDereferenceObject);
    ObfReferenceObject((PVOID)v8);
    v14 = v8 + 176;
  }
  if ( a2 != 1 && a3 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (_WORD)a2 == 69 && (unsigned int)xxxHotTrackMenu(v7, HIWORD(a2), 1) )
      *(_DWORD *)(v8 + 32) |= 0x400u;
    v20 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v8 + 104));
    if ( v20 )
    {
      v21 = IsTooltipHittest(v7, (unsigned __int16)a2);
      if ( v21 )
      {
        v31 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v31;
        v32 = v20;
        ++*(_DWORD *)(v20 + 8);
        v22 = (*(_BYTE *)(v20 + 55) & 0x10) == 0;
        *(_QWORD *)(v20 + 416) = v21;
        if ( v22 )
        {
          SetTooltipTimer((struct tagTOOLTIPWND *)v20, 1u, *(_DWORD *)(v20 + 376));
          v23 = 1;
        }
        else
        {
          xxxSetWindowPos(v20, 0, 0, 0, 0, 0, 151);
          v23 = xxxShowTooltip((struct tagTOOLTIPWND *)v20);
        }
        if ( v23 )
          *(_DWORD *)(v8 + 32) |= 0x300u;
      }
      else
      {
        v31 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v31;
        v32 = v20;
        ++*(_DWORD *)(v20 + 8);
        xxxResetTooltip((struct tagWND *)v20);
      }
      ThreadUnlock1(v25, v24);
    }
  }
  if ( v13 )
  {
    HMAssignmentLock(v14, v7);
    if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(v7, 0LL);
        if ( ActiveTrackPwnd )
        {
          v27 = (int *)UPDWORDPointer(8194LL);
          SetSystemTimer(ActiveTrackPwnd, 65527, *v27, (int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v8 + 184) = a2;
  PopAndFreeW32ThreadLock(v34);
  return ThreadUnlock1(v29, v28);
}
