/*
 * XREFs of DpiPowerArbiterThread @ 0x1C00DE0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C000CBD8 (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     _DpiPowerArbiterThread_::_18_::AUTO_RESOURCE_LOCK::AUTO_RESOURCE_LOCK @ 0x1C000CDA0 (_DpiPowerArbiterThread_--_18_--AUTO_RESOURCE_LOCK--AUTO_RESOURCE_LOCK.c)
 *     _DpiPowerArbiterThread_::_18_::AUTO_RESOURCE_LOCK::_AUTO_RESOURCE_LOCK @ 0x1C000CDD4 (_DpiPowerArbiterThread_--_18_--AUTO_RESOURCE_LOCK--_AUTO_RESOURCE_LOCK.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C0023868 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C002391C (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0028D14 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C0028DFC (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0061DC0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0061F00 (DxgkAcquireAdapterCoreSync.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     MonitorAdapterPowerChange @ 0x1C00BCAAC (MonitorAdapterPowerChange.c)
 *     DmmResetModeState @ 0x1C00BD4A0 (DmmResetModeState.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C00BD5B8 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C0129E94 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DxgkResumeMemorySegments @ 0x1C012BE10 (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1C012C590 (DxgkSuspendMemorySegments.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C013F7C0 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DmmAdapterPowerChange @ 0x1C0175260 (DmmAdapterPowerChange.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  bool v3; // zf
  void *v4; // r12
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  struct _LIST_ENTRY *PowerActionQueueEntry; // rbp
  int Blink; // r8d
  char v9; // r14
  char v10; // si
  bool v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // edx
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdi
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 (__fastcall *v52)(__int64, int); // rcx
  int v53; // eax
  __int64 v54; // rcx
  DXGADAPTER *v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  DXGGLOBAL *Global; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  char started; // al
  __int64 v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // rcx
  int v77; // esi
  _QWORD *v78; // rax
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rsi
  _QWORD *v84; // rax
  struct _ERESOURCE *v85; // [rsp+60h] [rbp+8h] BYREF

  v1 = StartContext[8];
  LODWORD(v2) = 0;
  v3 = *(_DWORD *)(v1 + 2584) == 6;
  *(_QWORD *)(v1 + 2560) = KeGetCurrentThread();
  if ( !v3 )
  {
    v4 = (void *)(v1 + 2536);
    while ( 1 )
    {
      v5 = KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      v2 = v5;
      if ( !v5 )
        break;
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v6);
      v20[4] = KeWaitForSingleObject;
      v20[3] = DpiPowerArbiterThread;
      v20[5] = v2;
      WdLogEvent5_WdError(v20);
LABEL_15:
      if ( *(_DWORD *)(v1 + 2584) == 6 )
        goto LABEL_107;
    }
    PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
    if ( !PowerActionQueueEntry )
      goto LABEL_15;
    while ( 1 )
    {
      Blink = (int)PowerActionQueueEntry[2].Blink;
      v9 = 0;
      v10 = 0;
      LODWORD(v2) = 0;
      v11 = Blink != 64;
      switch ( LODWORD(PowerActionQueueEntry[1].Blink) )
      {
        case 1:
          if ( *(_DWORD *)(v1 + 2584) != 1 )
          {
            DpiPowerArbiterThread_::_18_::AUTO_RESOURCE_LOCK::AUTO_RESOURCE_LOCK(&v85, (struct _ERESOURCE *)(v1 + 2400));
            DpiPowerArbiterThread_::_18_::AUTO_RESOURCE_LOCK::_AUTO_RESOURCE_LOCK(&v85);
            v12 = (int)PowerActionQueueEntry[2].Blink;
            v13 = *(_QWORD *)(v1 + 2504);
            if ( (v12 & 0x40) != 0 )
            {
              DxgkAcquireAdapterCoreSync(v13, 4);
              if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v1 + 2504), 2LL) )
              {
                v62 = (_QWORD *)WdLogNewEntry5_WdPower();
                v62[3] = v1;
                v62[4] = 0LL;
                v62[5] = 0LL;
                WdLogEvent5_WdPower(v62);
                DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
                LODWORD(v2) = -1073741823;
                break;
              }
              v63 = (_QWORD *)WdLogNewEntry5_WdPower();
              v63[3] = v1;
              v63[4] = 0LL;
              v63[5] = 0LL;
              WdLogEvent5_WdPower(v63);
            }
            else
            {
              v14 = 6;
              if ( (v12 & 0x18) == 0 )
                v14 = 3;
              DxgkAcquireAdapterCoreSync(v13, v14);
            }
            if ( *(_DWORD *)(v1 + 248) == 1 )
            {
              LOBYTE(v15) = 1;
              MonitorAdapterPowerChange(*(PERESOURCE **)(v1 + 2504), v15, v16, v17);
              LOBYTE(v64) = 1;
              DmmAdapterPowerChange(*(_QWORD *)(v1 + 2504), v64);
            }
            DmmResetModeState(*(_QWORD *)(v1 + 2504), 0xFFFFFFFD);
            v18 = (int)PowerActionQueueEntry[2].Blink;
            if ( (v18 & 0x20) != 0 )
            {
              v65 = *(_QWORD *)(v1 + 2504);
              if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v65) )
              {
                v70 = WdLogNewEntry5_WdAssertion(v67, v66, v68, v69);
                *(_QWORD *)(v70 + 24) = 13143LL;
                WdLogEvent5_WdAssertion(v70);
              }
              v71 = *(_QWORD *)(v65 + 1984);
              if ( v71 )
                ADAPTER_RENDER::FlushScheduler(v71, 6, 0xFFFFFFFF, 0);
            }
            else
            {
              if ( (v18 & 0x10) != 0 )
              {
                v19 = 3;
                goto LABEL_27;
              }
              if ( (v18 & 8) != 0 )
              {
                v19 = 2;
                goto LABEL_27;
              }
              if ( (v18 & 0x40) != 0 )
              {
                v72 = (_QWORD *)WdLogNewEntry5_WdPower();
                v72[3] = v1;
                v72[4] = 1LL;
                v72[5] = 0LL;
                WdLogEvent5_WdPower(v72);
                started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
                v74 = *(_QWORD *)(v1 + 2504);
                if ( !started )
                  goto LABEL_95;
                DXGADAPTER::ApplyCoreSyncAction(v74, 3);
                DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
                if ( *(_DWORD *)(v1 + 2584) != 1 )
                {
                  v75 = (_QWORD *)WdLogNewEntry5_WdPower();
                  v75[3] = v1;
                  v75[4] = 0LL;
                  v75[5] = 0LL;
                  WdLogEvent5_WdPower(v75);
                  v74 = *(_QWORD *)(v1 + 2504);
LABEL_95:
                  DxgkReleaseAdapterCoreSync(v74);
                  DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
                  break;
                }
              }
              else
              {
                v19 = 1;
LABEL_27:
                DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 2504), v19);
              }
            }
            *(_DWORD *)(v1 + 2584) = 1;
            break;
          }
          if ( *(_BYTE *)(v1 + 449) && *(_DWORD *)(v1 + 244) <= 1u && !*(_BYTE *)(v1 + 450) )
          {
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 5, 0);
            goto LABEL_10;
          }
          break;
        case 2:
          if ( *(_DWORD *)(v1 + 2584) == 1 )
          {
            *(_DWORD *)(v1 + 2584) = 2;
            if ( *(_BYTE *)(v1 + 449)
              && *(_DWORD *)(v1 + 244) <= 1u
              && !*(_BYTE *)(v1 + 450)
              && LODWORD(PowerActionQueueEntry[2].Blink) != 64 )
            {
              v61 = (_QWORD *)WdLogNewEntry5_WdPower();
              v61[3] = v1;
              v61[4] = 0LL;
              v61[5] = 0LL;
              WdLogEvent5_WdPower(v61);
              LODWORD(PowerActionQueueEntry[4].Blink) = 0;
              v11 = 0;
              KeSetEvent((PRKEVENT)&PowerActionQueueEntry[3], 0, 0);
            }
            LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 2504));
            if ( *(_BYTE *)(v1 + 449) && *(_DWORD *)(v1 + 244) <= 1u && !*(_BYTE *)(v1 + 450) )
            {
              if ( LODWORD(PowerActionQueueEntry[2].Blink) == 64 )
                DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
              KeSetEvent((PRKEVENT)(v1 + 2688), 0, 0);
              DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
            }
            goto LABEL_10;
          }
          break;
        case 3:
          if ( *(_DWORD *)(v1 + 2584) != 3 )
          {
            v55 = *(DXGADAPTER **)(v1 + 2504);
            if ( v55 )
            {
              DXGADAPTER::Stop(v55, *(_BYTE *)(v1 + 1063));
              if ( *(_DWORD *)(v1 + 2584) == 1 )
                LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 2504));
              if ( *(_BYTE *)(v1 + 449) )
                KeSetEvent((PRKEVENT)(v1 + 2688), 0, 0);
              Global = DXGGLOBAL::GetGlobal(v57, v56, v58, v59);
              DXGGLOBAL::NotifyAdapterRemoval(Global);
            }
          }
          *(_DWORD *)(v1 + 2584) = 3;
          goto LABEL_10;
        case 4:
          if ( (Blink & 1) != 0 )
          {
            DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 2504), 3);
            DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 2504), 1);
            goto LABEL_52;
          }
          if ( (Blink & 2) == 0 )
          {
            v49 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 2504), 2);
            v2 = v49;
            if ( v49 < 0 )
            {
              v51 = (_QWORD *)WdLogNewEntry5_WdError(v50);
              v52 = DxgkAcquireAdapterCoreSync;
              v51[3] = DpiPowerArbiterThread;
              goto LABEL_60;
            }
LABEL_52:
            v9 = 1;
          }
          if ( ((__int64)PowerActionQueueEntry[2].Blink & 1) == 0 )
          {
            v43 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 2504));
            v2 = v43;
            if ( v43 < 0 )
            {
              v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
              v48[4] = DxgkSuspendMemorySegments;
              v48[3] = DpiPowerArbiterThread;
              v48[5] = v2;
              WdLogEvent5_WdWarning(v48);
              goto LABEL_10;
            }
            v10 = 1;
          }
          if ( ((__int64)PowerActionQueueEntry[2].Blink & 4) != 0
            && (v53 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 1536))(*(_QWORD *)(v1 + 1512)), v2 = v53, v53 < 0) )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdError(v54);
            v51[3] = DpiPowerArbiterThread;
            v52 = *(__int64 (__fastcall **)(__int64, int))(v1 + 1536);
LABEL_60:
            v51[4] = v52;
            v51[5] = v2;
            WdLogEvent5_WdError(v51);
          }
          else
          {
            *(_DWORD *)(v1 + 2584) = 4;
            *(_DWORD *)(v1 + 2588) |= LODWORD(PowerActionQueueEntry[2].Blink);
          }
LABEL_10:
          if ( (int)v2 < 0 )
          {
            if ( v10 == 1 )
            {
              v77 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 2504));
              if ( v77 < 0 )
              {
                v78 = (_QWORD *)WdLogNewEntry5_WdError(v76);
                v78[4] = DxgkResumeMemorySegments;
                v78[5] = (int)v2;
                v78[3] = DpiPowerArbiterThread;
                WdLogEvent5_WdError(v78);
                LODWORD(v2) = v77;
              }
            }
            if ( v9 == 1 )
            {
              v79 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 2504));
              v83 = v79;
              if ( v79 < 0 )
              {
                v84 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v81, v80, v82);
                v84[6] = DxgkReleaseAdapterCoreSync;
                v84[3] = 275LL;
                v84[4] = 21LL;
                v84[5] = DpiPowerArbiterThread;
                v84[7] = v83;
                WdLogEvent5_WdCriticalError(v84);
              }
            }
          }
          break;
        case 5:
          v21 = *(_DWORD *)(v1 + 2588);
          if ( (v21 & 4) != 0 )
          {
            v22 = *(_QWORD *)(v1 + 1512);
            *(_DWORD *)(v1 + 2588) = v21 & 0xFFFFFFFB;
            v23 = (*(__int64 (__fastcall **)(__int64))(v1 + 1544))(v22);
            v27 = v23;
            if ( v23 < 0 )
            {
              v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
              v28[3] = 275LL;
              v28[4] = 21LL;
              v28[5] = DpiPowerArbiterThread;
              v28[6] = *(_QWORD *)(v1 + 1544);
              v28[7] = v27;
              WdLogEvent5_WdCriticalError(v28);
            }
          }
          v29 = *(_DWORD *)(v1 + 2588);
          v30 = *(_QWORD *)(v1 + 2504);
          if ( (v29 & 1) != 0 )
          {
            *(_DWORD *)(v1 + 2588) = v29 & 0xFFFFFFFE;
            v31 = DxgkReleaseAdapterCoreSync(v30);
            v2 = v31;
            if ( v31 < 0 )
            {
              v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v34);
              v35[6] = DxgkReleaseAdapterCoreSync;
              v35[3] = 275LL;
              v35[4] = 21LL;
              v35[5] = DpiPowerArbiterThread;
              v35[7] = v2;
              WdLogEvent5_WdCriticalError(v35);
            }
          }
          else
          {
            v36 = DxgkResumeMemorySegments(v30);
            v2 = v36;
            if ( v36 < 0 )
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdError(v37);
              v38[4] = DxgkResumeMemorySegments;
              v38[3] = DpiPowerArbiterThread;
              v38[5] = v2;
              WdLogEvent5_WdError(v38);
            }
            if ( (*(_DWORD *)(v1 + 2588) & 2) == 0 && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 2504)) < 0 )
            {
              v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39, v41);
              v42[6] = DxgkReleaseAdapterCoreSync;
              v42[3] = 275LL;
              v42[4] = 21LL;
              v42[5] = DpiPowerArbiterThread;
              v42[7] = v2;
              WdLogEvent5_WdCriticalError(v42);
            }
            *(_DWORD *)(v1 + 2588) &= ~2u;
          }
          *(_DWORD *)(v1 + 2584) = 5;
          goto LABEL_10;
        case 6:
          if ( *(_DWORD *)(v1 + 2584) == 1 )
            LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 2504));
          *(_DWORD *)(v1 + 2584) = 6;
          goto LABEL_10;
      }
      if ( v11 )
      {
        LODWORD(PowerActionQueueEntry[4].Blink) = v2;
        KeSetEvent((PRKEVENT)&PowerActionQueueEntry[3], 0, 0);
      }
      PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
      if ( !PowerActionQueueEntry )
      {
        v4 = (void *)(v1 + 2536);
        goto LABEL_15;
      }
    }
  }
LABEL_107:
  PsTerminateSystemThread(v2);
}
