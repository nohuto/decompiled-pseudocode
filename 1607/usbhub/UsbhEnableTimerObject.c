/*
 * XREFs of UsbhEnableTimerObject @ 0x1C001C9F0
 * Callers:
 *     UsbhSshExitSx @ 0x1C0002F34 (UsbhSshExitSx.c)
 *     UsbhHubStart @ 0x1C000AFA4 (UsbhHubStart.c)
 *     UsbhSshSuspendHub @ 0x1C0018F70 (UsbhSshSuspendHub.c)
 *     Usbh_SSH_Event @ 0x1C0019340 (Usbh_SSH_Event.c)
 *     UsbhSshSetPortsBusyState @ 0x1C00197A0 (UsbhSshSetPortsBusyState.c)
 *     UsbhHubSSH_PnpStart @ 0x1C001E450 (UsbhHubSSH_PnpStart.c)
 *     UsbhSshEnabled @ 0x1C001EB00 (UsbhSshEnabled.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C001F660 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhSshResumeDownstream @ 0x1C0021F00 (UsbhSshResumeDownstream.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C0023E60 (UsbhQueueWorkItemWithRetry.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C003DF44 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C003E024 (Usbh_PIND_Timeout_Action.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004B560 (UsbhDriverNotFoundWorker.c)
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C0009434 (UsbhReferenceListRemove.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhEtwWrite @ 0x1C001D860 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEnableTimerObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r12
  __int64 v8; // r13
  __int64 v10; // r14
  KIRQL v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __int16 v14; // cx
  int v15; // esi
  KIRQL v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  _QWORD *v28; // rdi
  __int16 v29; // ax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  KIRQL v37; // r12
  __int64 v38; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  ULONG TimeIncrement; // eax
  int v43; // r11d
  KIRQL v44; // [rsp+6Ch] [rbp-4Dh]

  v6 = (unsigned int)a4;
  v8 = (int)a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  if ( a2 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 3728));
    v14 = UsbhLogMask;
    v15 = 0;
    v44 = v11;
    v16 = v11;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
        *(_DWORD *)v18 = 827616869;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = a2;
        *(_QWORD *)(v18 + 24) = v8;
        v14 = UsbhLogMask;
      }
      if ( (v14 & 0x2000) != 0 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
          *(_DWORD *)v20 = 829451877;
          *(_QWORD *)(v20 + 24) = a5;
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_QWORD *)(v20 + 16) = v6;
          v14 = UsbhLogMask;
        }
        if ( (v14 & 0x2000) != 0 )
        {
          v21 = *(_QWORD *)(a1 + 64);
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
            *(_DWORD *)v22 = 846229093;
            *(_QWORD *)(v22 + 16) = a6;
            *(_QWORD *)(v22 + 8) = 0LL;
            *(_QWORD *)(v22 + 24) = 0LL;
          }
        }
      }
    }
    if ( dword_1C0067650 )
    {
      v23 = *(_DWORD **)(a1 + 64);
      if ( !v23 )
        UsbhTrapFatal_Dbg(a1, 0LL, v12, v13);
      if ( *v23 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v12, v13);
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_ENABLE_TIMER, 0LL);
      v16 = v44;
    }
    *(_DWORD *)(a2 + 28) = a6;
    *(_QWORD *)(a2 + 40) = a5;
    v24 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 32) = 0;
    *(_DWORD *)(a2 + 24) = v6;
    *(_DWORD *)(a2 + 16) = v8;
    *(_DWORD *)(a2 + 12) = v8;
    if ( v24 )
    {
      if ( v24 == 2 )
      {
        Log(a1, 0x2000, 1701729331, a2, v10 + 3744);
        *(_DWORD *)(a2 + 4) = v43;
      }
    }
    else
    {
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 844394085;
          *(_QWORD *)(v26 + 24) = v10 + 3744;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = a2;
        }
      }
      *(_DWORD *)(a2 + 4) = 1;
      v27 = *(_QWORD **)(v10 + 3752);
      v28 = (_QWORD *)(a2 + 56);
      if ( *v27 != v10 + 3744 )
        __fastfail(3u);
      *v28 = v10 + 3744;
      v28[1] = v27;
      *v27 = v28;
      *(_QWORD *)(v10 + 3752) = v28;
      v29 = UsbhLogMask;
      v30 = *(int *)(v10 + 3736);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
          *(_DWORD *)v32 = 1414819172;
          *(_QWORD *)(v32 + 8) = 0LL;
          *(_QWORD *)(v32 + 16) = a1;
          *(_QWORD *)(v32 + 24) = v30;
          v29 = UsbhLogMask;
        }
      }
      if ( *(_DWORD *)(v10 + 3736) == 2 )
      {
        if ( (v29 & 0x2000) != 0 )
        {
          v33 = *(_QWORD *)(a1 + 64);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
            *(_DWORD *)v34 = 809382500;
            *(_QWORD *)(v34 + 8) = 0LL;
            *(_QWORD *)(v34 + 16) = a1;
            *(_QWORD *)(v34 + 24) = 2LL;
          }
        }
        *(_DWORD *)(v10 + 3736) = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 3728), v16);
        v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        v38 = *(_QWORD *)(a1 + 64);
        if ( !v38 )
          UsbhTrapFatal_Dbg(a1, 0LL, v35, v36);
        if ( *(_DWORD *)v38 != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v35, v36);
        if ( *(_BYTE *)(v38 + 2480) )
        {
          PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
          if ( PoolWithTag )
          {
            *PoolWithTag = 0LL;
            PoolWithTag[3] = 0LL;
            PoolWithTag[4] = 0LL;
            PoolWithTag[5] = 0LL;
            *(_DWORD *)PoolWithTag = 1397515890;
            *((_DWORD *)PoolWithTag + 10) = 1380799588;
            PoolWithTag[2] = v10 + 3848;
            PoolWithTag[1] = a1;
            v40 = PoolWithTag + 3;
            v41 = *(_QWORD **)(v38 + 2520);
            if ( *v41 != v38 + 2512 )
              __fastfail(3u);
            *v40 = v38 + 2512;
            v40[1] = v41;
            *v41 = v40;
            *(_QWORD *)(v38 + 2520) = v40;
          }
          else
          {
            ++*(_DWORD *)(v38 + 2528);
          }
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v37);
        }
        else
        {
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v37);
          v15 = -1073741823;
        }
        if ( (v15 & 0xC0000000) != 0xC0000000 )
        {
          TimeIncrement = KeQueryTimeIncrement();
          if ( KeSetTimer((PKTIMER)(v10 + 3848), (LARGE_INTEGER)(int)(-149999 - TimeIncrement), (PKDPC)(v10 + 3784)) )
            UsbhReferenceListRemove(a1, v10 + 3848);
        }
        return;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 3728), v16);
  }
}
