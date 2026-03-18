/*
 * XREFs of DpiPowerArbiterThread @ 0x1C00FBF50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C000F078 (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C0029F64 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0029FAC (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C002FD3C (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C002FE24 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
 *     MonitorAdapterPowerChange @ 0x1C00E0964 (MonitorAdapterPowerChange.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C00E09D0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     DmmResetModeState @ 0x1C00E2B30 (DmmResetModeState.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C0145A64 (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01468D0 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C0149C04 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DxgkResumeMemorySegments @ 0x1C0149F80 (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1C0149FE0 (DxgkSuspendMemorySegments.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0169704 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DmmAdapterPowerChange @ 0x1C01A3260 (DmmAdapterPowerChange.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  int v5; // ebx
  struct _LIST_ENTRY *PowerActionQueueEntry; // rax
  struct _LIST_ENTRY *v7; // rbp
  int Blink; // edx
  char v9; // r14
  int v10; // ecx
  char v11; // r15
  bool v12; // r12
  int v13; // eax
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r9
  int v18; // eax
  int v19; // edx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
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
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  DXGADAPTER *v54; // rcx
  DXGADAPTER *v55; // rcx
  DXGGLOBAL *Global; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rax
  char started; // al
  __int64 v67; // rcx
  _QWORD *v68; // rax
  int v69; // edx
  __int64 v70; // rcx
  int v71; // ebx
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rbx
  _QWORD *v78; // rax

  v1 = StartContext[8];
  LODWORD(v2) = 0;
  *(_QWORD *)(v1 + 3744) = KeGetCurrentThread();
LABEL_2:
  while ( *(_DWORD *)(v1 + 3768) != 7 )
  {
    v3 = KeWaitForSingleObject((PVOID)(v1 + 3720), Executive, 0, 0, 0LL);
    v2 = v3;
    if ( !v3 )
    {
      while ( 1 )
      {
        PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
        v7 = PowerActionQueueEntry;
        if ( !PowerActionQueueEntry )
          goto LABEL_2;
        Blink = (int)PowerActionQueueEntry[2].Blink;
        v9 = 0;
        v10 = (int)PowerActionQueueEntry[1].Blink;
        v11 = 0;
        LODWORD(v2) = 0;
        v12 = Blink != 64;
        if ( v10 != 1 )
          break;
        if ( ((*(_DWORD *)(v1 + 3768) - 1) & 0xFFFFFFFD) != 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3584), 1u);
          ExReleaseResourceLite((PERESOURCE)(v1 + 3584));
          KeLeaveCriticalRegion();
          v13 = (int)v7[2].Blink;
          v14 = *(_QWORD *)(v1 + 3688);
          if ( (v13 & 0x40) != 0 )
          {
            DxgkAcquireAdapterCoreSync(v14, 4);
            if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v1 + 3688), 2LL) )
            {
              v58 = (_QWORD *)WdLogNewEntry5_WdPower();
              v58[3] = v1;
              v58[4] = 0LL;
              v58[5] = 0LL;
              WdLogEvent5_WdPower(v58);
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
              LODWORD(v2) = -1073741823;
              goto LABEL_10;
            }
            v59 = (_QWORD *)WdLogNewEntry5_WdPower();
            v59[3] = v1;
            v59[4] = 0LL;
            v59[5] = 0LL;
            WdLogEvent5_WdPower(v59);
          }
          else
          {
            v15 = 6;
            if ( (v13 & 0x18) == 0 )
              v15 = 3;
            DxgkAcquireAdapterCoreSync(v14, v15);
          }
          if ( *(_DWORD *)(v1 + 284) == 1 )
          {
            LOBYTE(v16) = 1;
            MonitorAdapterPowerChange(*(PERESOURCE **)(v1 + 3688), v16, (__int64)v7[5].Flink, v17);
            LOBYTE(v60) = 1;
            DmmAdapterPowerChange(*(_QWORD *)(v1 + 3688), v60);
          }
          DmmResetModeState(*(_QWORD *)(v1 + 3688), 0xFFFFFFFD);
          v18 = (int)v7[2].Blink;
          if ( (v18 & 0x20) != 0 )
          {
            v61 = *(_QWORD *)(v1 + 3688);
            if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v61) )
            {
              v63 = WdLogNewEntry5_WdAssertion(v62);
              *(_QWORD *)(v63 + 24) = 3158LL;
              WdLogEvent5_WdAssertion(v63);
            }
            v64 = *(_QWORD *)(v61 + 2136);
            if ( v64 )
              ADAPTER_RENDER::FlushScheduler(v64, 6, 0xFFFFFFFF, 0);
          }
          else
          {
            if ( (v18 & 0x10) != 0 )
            {
              v19 = 3;
              goto LABEL_24;
            }
            if ( (v18 & 8) != 0 )
            {
              v19 = 2;
              goto LABEL_24;
            }
            if ( (v18 & 0x40) != 0 )
            {
              v65 = (_QWORD *)WdLogNewEntry5_WdPower();
              v65[5] = 0LL;
              v65[3] = v1;
              v65[4] = 1LL;
              WdLogEvent5_WdPower(v65);
              started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
              v67 = *(_QWORD *)(v1 + 3688);
              if ( !started )
              {
                v69 = 2;
                goto LABEL_100;
              }
              DXGADAPTER::ApplyCoreSyncAction(v67, 3);
              DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
              if ( *(_DWORD *)(v1 + 3768) != 1 )
              {
                v68 = (_QWORD *)WdLogNewEntry5_WdPower();
                v68[3] = v1;
                v68[4] = 0LL;
                v68[5] = 0LL;
                WdLogEvent5_WdPower(v68);
                v67 = *(_QWORD *)(v1 + 3688);
                v69 = 5;
LABEL_100:
                DxgkReleaseAdapterCoreSync(v67, v69);
                DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
                goto LABEL_10;
              }
            }
            else
            {
              v19 = 1;
LABEL_24:
              DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3688), v19);
            }
          }
          *(_DWORD *)(v1 + 3768) = 1;
          goto LABEL_10;
        }
        if ( *(_BYTE *)(v1 + 481) && *(_DWORD *)(v1 + 280) <= 1u && !*(_BYTE *)(v1 + 482) )
        {
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 5, 0);
LABEL_9:
          if ( (int)v2 < 0 )
          {
            if ( v11 == 1 )
            {
              v71 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 3688));
              if ( v71 < 0 )
              {
                v72 = WdLogNewEntry5_WdError(v70);
                *(_QWORD *)(v72 + 24) = (int)v2;
                WdLogEvent5_WdError(v72);
                LODWORD(v2) = v71;
              }
            }
            if ( v9 == 1 )
            {
              v73 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3688), 5);
              v77 = v73;
              if ( v73 < 0 )
              {
                v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v75, v74, v76);
                v78[3] = 275LL;
                v78[4] = 21LL;
                v78[5] = v77;
                WdLogEvent5_WdCriticalError(v78);
              }
            }
          }
        }
LABEL_10:
        if ( v12 )
        {
          LODWORD(v7[4].Blink) = v2;
          KeSetEvent((PRKEVENT)&v7[3], 0, 0);
        }
      }
      if ( v10 == 2 )
      {
        if ( *(_DWORD *)(v1 + 3768) != 1 )
          goto LABEL_10;
        *(_DWORD *)(v1 + 3768) = 2;
        v5 = (int)PowerActionQueueEntry[2].Blink;
        if ( *(_BYTE *)(v1 + 481) && *(_DWORD *)(v1 + 280) <= 1u && !*(_BYTE *)(v1 + 482) && v5 != 64 )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdPower();
          v57[3] = v1;
          v57[4] = 0LL;
          v57[5] = 0LL;
          WdLogEvent5_WdPower(v57);
          LODWORD(v7[4].Blink) = 0;
          v12 = 0;
          KeSetEvent((PRKEVENT)&v7[3], 0, 0);
          v7 = 0LL;
        }
        LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3688), 5);
        if ( *(_BYTE *)(v1 + 481) && *(_DWORD *)(v1 + 280) <= 1u && !*(_BYTE *)(v1 + 482) )
        {
          if ( v5 == 64 )
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
          KeSetEvent((PRKEVENT)(v1 + 3880), 0, 0);
          DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
        }
        goto LABEL_9;
      }
      if ( v10 <= 2 )
        goto LABEL_10;
      if ( v10 <= 4 )
      {
        if ( *(_DWORD *)(v1 + 3768) == 3 || !*(_QWORD *)(v1 + 3688) )
        {
          *(_DWORD *)(v1 + 3768) = 3;
        }
        else
        {
          if ( v10 == 4 )
          {
            KeClearEvent((PRKEVENT)(v1 + 3904));
            LODWORD(v7[4].Blink) = 0;
            v12 = 0;
            KeSetEvent((PRKEVENT)&v7[3], 0, 0);
            v7 = 0LL;
          }
          v54 = *(DXGADAPTER **)(v1 + 3688);
          if ( v54 )
            DXGADAPTER::PrepareToRemove(v54);
          if ( *(_QWORD *)(v1 + 488) )
          {
            KeSetEvent((PRKEVENT)(v1 + 3880), 0, 0);
            PoFxUnregisterDevice(*(_QWORD *)(v1 + 488));
            *(_QWORD *)(*(_QWORD *)(v1 + 3688) + 2176LL) = 0LL;
            *(_QWORD *)(v1 + 488) = 0LL;
          }
          if ( *(_DWORD *)(v1 + 3768) == 1 )
            LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3688), 2);
          v55 = *(DXGADAPTER **)(v1 + 3688);
          if ( v55 )
            DXGADAPTER::Stop(v55, *(_BYTE *)(v1 + 1148), *(_BYTE *)(v1 + 1149));
          Global = DXGGLOBAL::GetGlobal((__int64)v55);
          DXGGLOBAL::NotifyAdapterRemoval(Global);
          *(_DWORD *)(v1 + 3768) = 3;
          KeSetEvent((PRKEVENT)(v1 + 3904), 0, 0);
        }
        goto LABEL_9;
      }
      if ( v10 != 5 )
      {
        if ( v10 == 6 )
        {
          v21 = *(_DWORD *)(v1 + 3772);
          if ( (v21 & 4) != 0 )
          {
            v22 = *(_QWORD *)(v1 + 2696);
            *(_DWORD *)(v1 + 3772) = v21 & 0xFFFFFFFB;
            v23 = (*(__int64 (__fastcall **)(__int64))(v1 + 2728))(v22);
            v27 = v23;
            if ( v23 < 0 )
            {
              v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
              v28[3] = 275LL;
              v28[4] = 21LL;
              v28[5] = *(_QWORD *)(v1 + 2728);
              v28[6] = v27;
              WdLogEvent5_WdCriticalError(v28);
            }
          }
          v29 = *(_DWORD *)(v1 + 3772);
          v30 = *(_QWORD *)(v1 + 3688);
          if ( (v29 & 1) != 0 )
          {
            *(_DWORD *)(v1 + 3772) = v29 & 0xFFFFFFFE;
            v31 = DxgkReleaseAdapterCoreSync(v30, 5);
            v2 = v31;
            if ( v31 < 0 )
            {
              v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v34);
              v35[3] = 275LL;
              v35[4] = 21LL;
              v35[5] = v2;
              WdLogEvent5_WdCriticalError(v35);
            }
          }
          else
          {
            v36 = DxgkResumeMemorySegments(v30);
            v2 = v36;
            if ( v36 < 0 )
            {
              v38 = WdLogNewEntry5_WdError(v37);
              *(_QWORD *)(v38 + 24) = v2;
              WdLogEvent5_WdError(v38);
            }
            if ( (*(_DWORD *)(v1 + 3772) & 2) == 0 && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3688), 2) < 0 )
            {
              v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39, v41);
              v42[3] = 275LL;
              v42[4] = 21LL;
              v42[5] = v2;
              WdLogEvent5_WdCriticalError(v42);
            }
            *(_DWORD *)(v1 + 3772) &= ~2u;
          }
          *(_DWORD *)(v1 + 3768) = 6;
        }
        else
        {
          if ( v10 != 7 )
            goto LABEL_10;
          if ( *(_DWORD *)(v1 + 3768) == 1 )
            LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3688), 5);
          *(_DWORD *)(v1 + 3768) = 7;
        }
        goto LABEL_9;
      }
      if ( (Blink & 1) != 0 )
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3688), 3);
        DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3688), 1);
        goto LABEL_50;
      }
      if ( (Blink & 2) == 0 )
      {
        v49 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3688), 2);
        v2 = v49;
        if ( v49 < 0 )
        {
          v51 = WdLogNewEntry5_WdError(v50);
          *(_QWORD *)(v51 + 24) = v2;
          goto LABEL_58;
        }
LABEL_50:
        v9 = 1;
      }
      if ( ((__int64)v7[2].Blink & 1) == 0 )
      {
        v43 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 3688));
        v2 = v43;
        if ( v43 < 0 )
        {
          v48 = WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
          *(_QWORD *)(v48 + 24) = v2;
          WdLogEvent5_WdWarning(v48);
          goto LABEL_9;
        }
        v11 = 1;
      }
      if ( ((__int64)v7[2].Blink & 4) == 0
        || (v52 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 2720))(*(_QWORD *)(v1 + 2696)), v2 = v52, v52 >= 0) )
      {
        *(_DWORD *)(v1 + 3768) = 5;
        *(_DWORD *)(v1 + 3772) |= LODWORD(v7[2].Blink);
        goto LABEL_9;
      }
      v51 = WdLogNewEntry5_WdError(v53);
      *(_QWORD *)(v51 + 24) = *(_QWORD *)(v1 + 2720);
      *(_QWORD *)(v51 + 32) = v2;
LABEL_58:
      WdLogEvent5_WdError(v51);
      goto LABEL_9;
    }
    v20 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v20 + 24) = v2;
    WdLogEvent5_WdError(v20);
  }
  PsTerminateSystemThread(v2);
}
