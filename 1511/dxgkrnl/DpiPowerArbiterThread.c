/*
 * XREFs of DpiPowerArbiterThread @ 0x1C00E8F50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C000D670 (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     sub_1C000D8F0 @ 0x1C000D8F0 (sub_1C000D8F0.c)
 *     sub_1C000D924 @ 0x1C000D924 (sub_1C000D924.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C0023418 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0023460 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00288D4 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C00289BC (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA040 (DxgkAcquireAdapterCoreSync.c)
 *     MonitorAdapterPowerChange @ 0x1C00CB10C (MonitorAdapterPowerChange.c)
 *     DmmResetModeState @ 0x1C00CC0D8 (DmmResetModeState.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C00CC154 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C012D328 (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C0130524 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DxgkResumeMemorySegments @ 0x1C0132360 (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1C0132AE0 (DxgkSuspendMemorySegments.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0145C98 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DmmAdapterPowerChange @ 0x1C017983C (DmmAdapterPowerChange.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  bool v3; // zf
  void *v4; // r12
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  struct _LIST_ENTRY *PowerActionQueueEntry; // rbp
  int Blink; // edx
  char v10; // r14
  int v11; // ecx
  char v12; // si
  bool v13; // r15
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  int v42; // eax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 (__fastcall *v45)(__int64, int); // rcx
  int v46; // eax
  __int64 v47; // rcx
  DXGADAPTER *v48; // rcx
  DXGADAPTER *v49; // rcx
  DXGGLOBAL *Global; // rax
  _QWORD *v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // edx
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // edx
  _QWORD *v67; // rax
  char started; // al
  __int64 v69; // rcx
  _QWORD *v70; // rax
  int v71; // edx
  __int64 v72; // rcx
  int v73; // esi
  _QWORD *v74; // rax
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rsi
  _QWORD *v80; // rax
  struct _ERESOURCE *v81; // [rsp+60h] [rbp+8h] BYREF

  v1 = StartContext[8];
  LODWORD(v2) = 0;
  v3 = *(_DWORD *)(v1 + 2624) == 7;
  *(_QWORD *)(v1 + 2600) = KeGetCurrentThread();
  if ( !v3 )
  {
    v4 = (void *)(v1 + 2576);
    while ( 1 )
    {
      v5 = KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      v2 = v5;
      if ( v5 )
      {
        v7 = (_QWORD *)WdLogNewEntry5_WdError(v6);
        v7[4] = KeWaitForSingleObject;
        v7[3] = DpiPowerArbiterThread;
        v7[5] = v2;
        WdLogEvent5_WdError(v7);
        goto LABEL_113;
      }
      PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
      if ( PowerActionQueueEntry )
        break;
LABEL_113:
      if ( *(_DWORD *)(v1 + 2624) == 7 )
        goto LABEL_114;
    }
    while ( 1 )
    {
      Blink = (int)PowerActionQueueEntry[2].Blink;
      v10 = 0;
      v11 = (int)PowerActionQueueEntry[1].Blink;
      v12 = 0;
      LODWORD(v2) = 0;
      v13 = Blink != 64;
      if ( v11 == 1 )
      {
        if ( ((*(_DWORD *)(v1 + 2624) - 1) & 0xFFFFFFFD) != 0 )
        {
          sub_1C000D8F0(&v81, (struct _ERESOURCE *)(v1 + 2440));
          sub_1C000D924(&v81);
          v52 = (int)PowerActionQueueEntry[2].Blink;
          v53 = *(_QWORD *)(v1 + 2544);
          if ( (v52 & 0x40) != 0 )
          {
            DxgkAcquireAdapterCoreSync(v53, 4);
            if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v1 + 2544), 2LL) )
            {
              v54 = (_QWORD *)WdLogNewEntry5_WdPower();
              v54[3] = v1;
              v54[4] = 0LL;
              v54[5] = 0LL;
              WdLogEvent5_WdPower(v54);
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
              LODWORD(v2) = -1073741823;
              goto LABEL_109;
            }
            v55 = (_QWORD *)WdLogNewEntry5_WdPower();
            v55[3] = v1;
            v55[4] = 0LL;
            v55[5] = 0LL;
            WdLogEvent5_WdPower(v55);
          }
          else
          {
            v59 = 6;
            if ( (v52 & 0x18) == 0 )
              v59 = 3;
            DxgkAcquireAdapterCoreSync(v53, v59);
          }
          if ( *(_DWORD *)(v1 + 284) == 1 )
          {
            LOBYTE(v56) = 1;
            MonitorAdapterPowerChange(*(PERESOURCE **)(v1 + 2544), v56, v57, v58);
            LOBYTE(v60) = 1;
            DmmAdapterPowerChange(*(_QWORD *)(v1 + 2544), v60);
          }
          DmmResetModeState(*(_QWORD *)(v1 + 2544), 0xFFFFFFFD);
          v61 = (int)PowerActionQueueEntry[2].Blink;
          if ( (v61 & 0x20) != 0 )
          {
            v62 = *(_QWORD *)(v1 + 2544);
            if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v62) )
            {
              v64 = WdLogNewEntry5_WdAssertion(v63);
              *(_QWORD *)(v64 + 24) = 13510LL;
              WdLogEvent5_WdAssertion(v64);
            }
            v65 = *(_QWORD *)(v62 + 1992);
            if ( v65 )
              ADAPTER_RENDER::FlushScheduler(v65, 6, 0xFFFFFFFF, 0);
            goto LABEL_97;
          }
          if ( (v61 & 0x10) != 0 )
          {
            v66 = 3;
LABEL_96:
            DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 2544), v66);
LABEL_97:
            *(_DWORD *)(v1 + 2624) = 1;
            goto LABEL_109;
          }
          if ( (v61 & 8) != 0 )
          {
            v66 = 2;
            goto LABEL_96;
          }
          if ( (v61 & 0x40) == 0 )
          {
            v66 = 1;
            goto LABEL_96;
          }
          v67 = (_QWORD *)WdLogNewEntry5_WdPower();
          v67[3] = v1;
          v67[4] = 1LL;
          v67[5] = 0LL;
          WdLogEvent5_WdPower(v67);
          started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
          v69 = *(_QWORD *)(v1 + 2544);
          if ( started )
          {
            DXGADAPTER::ApplyCoreSyncAction(v69, 3);
            DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
            if ( *(_DWORD *)(v1 + 2624) == 1 )
              goto LABEL_97;
            v70 = (_QWORD *)WdLogNewEntry5_WdPower();
            v70[3] = v1;
            v70[4] = 0LL;
            v70[5] = 0LL;
            WdLogEvent5_WdPower(v70);
            v69 = *(_QWORD *)(v1 + 2544);
            v71 = 5;
          }
          else
          {
            v71 = 2;
          }
          DxgkReleaseAdapterCoreSync(v69, v71);
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
        }
        else if ( *(_BYTE *)(v1 + 481) && *(_DWORD *)(v1 + 280) <= 1u && !*(_BYTE *)(v1 + 482) )
        {
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 5, 0);
          goto LABEL_102;
        }
      }
      else if ( v11 == 2 )
      {
        if ( *(_DWORD *)(v1 + 2624) == 1 )
        {
          *(_DWORD *)(v1 + 2624) = 2;
          if ( *(_BYTE *)(v1 + 481)
            && *(_DWORD *)(v1 + 280) <= 1u
            && !*(_BYTE *)(v1 + 482)
            && LODWORD(PowerActionQueueEntry[2].Blink) != 64 )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdPower();
            v51[3] = v1;
            v51[4] = 0LL;
            v51[5] = 0LL;
            WdLogEvent5_WdPower(v51);
            LODWORD(PowerActionQueueEntry[4].Blink) = 0;
            v13 = 0;
            KeSetEvent((PRKEVENT)&PowerActionQueueEntry[3], 0, 0);
          }
          LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 2544), 5);
          if ( *(_BYTE *)(v1 + 481) && *(_DWORD *)(v1 + 280) <= 1u && !*(_BYTE *)(v1 + 482) )
          {
            if ( LODWORD(PowerActionQueueEntry[2].Blink) == 64 )
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
            KeSetEvent((PRKEVENT)(v1 + 2728), 0, 0);
            DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
          }
          goto LABEL_102;
        }
      }
      else if ( v11 > 2 )
      {
        if ( v11 <= 4 )
        {
          if ( *(_DWORD *)(v1 + 2624) == 3 || !*(_QWORD *)(v1 + 2544) )
          {
            *(_DWORD *)(v1 + 2624) = 3;
          }
          else
          {
            if ( v11 == 4 )
            {
              KeClearEvent((PRKEVENT)(v1 + 2752));
              LODWORD(PowerActionQueueEntry[4].Blink) = 0;
              v13 = 0;
              KeSetEvent((PRKEVENT)&PowerActionQueueEntry[3], 0, 0);
            }
            v48 = *(DXGADAPTER **)(v1 + 2544);
            if ( v48 )
              DXGADAPTER::PrepareToRemove(v48);
            if ( *(_QWORD *)(v1 + 488) )
            {
              KeSetEvent((PRKEVENT)(v1 + 2728), 0, 0);
              PoFxUnregisterDevice(*(_QWORD *)(v1 + 488));
              *(_QWORD *)(*(_QWORD *)(v1 + 2544) + 2032LL) = 0LL;
              *(_QWORD *)(v1 + 488) = 0LL;
            }
            if ( *(_DWORD *)(v1 + 2624) == 1 )
              LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 2544), 2);
            v49 = *(DXGADAPTER **)(v1 + 2544);
            if ( v49 )
              DXGADAPTER::Stop(v49, *(_BYTE *)(v1 + 1096));
            Global = DXGGLOBAL::GetGlobal((__int64)v49);
            DXGGLOBAL::NotifyAdapterRemoval(Global);
            *(_DWORD *)(v1 + 2624) = 3;
            KeSetEvent((PRKEVENT)(v1 + 2752), 0, 0);
          }
          goto LABEL_102;
        }
        switch ( v11 )
        {
          case 5:
            if ( (Blink & 1) != 0 )
            {
              DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 2544), 3);
              DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 2544), 1);
              goto LABEL_31;
            }
            if ( (Blink & 2) == 0 )
            {
              v42 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 2544), 2);
              v2 = v42;
              if ( v42 < 0 )
              {
                v44 = (_QWORD *)WdLogNewEntry5_WdError(v43);
                v45 = DxgkAcquireAdapterCoreSync;
                v44[3] = DpiPowerArbiterThread;
                goto LABEL_38;
              }
LABEL_31:
              v10 = 1;
            }
            if ( ((__int64)PowerActionQueueEntry[2].Blink & 1) == 0 )
            {
              v36 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 2544));
              v2 = v36;
              if ( v36 < 0 )
              {
                v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
                v41[4] = DxgkSuspendMemorySegments;
                v41[3] = DpiPowerArbiterThread;
                v41[5] = v2;
                WdLogEvent5_WdWarning(v41);
                goto LABEL_102;
              }
              v12 = 1;
            }
            if ( ((__int64)PowerActionQueueEntry[2].Blink & 4) != 0
              && (v46 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 1576))(*(_QWORD *)(v1 + 1552)), v2 = v46, v46 < 0) )
            {
              v44 = (_QWORD *)WdLogNewEntry5_WdError(v47);
              v44[3] = DpiPowerArbiterThread;
              v45 = *(__int64 (__fastcall **)(__int64, int))(v1 + 1576);
LABEL_38:
              v44[4] = v45;
              v44[5] = v2;
              WdLogEvent5_WdError(v44);
            }
            else
            {
              *(_DWORD *)(v1 + 2624) = 5;
              *(_DWORD *)(v1 + 2628) |= LODWORD(PowerActionQueueEntry[2].Blink);
            }
LABEL_102:
            if ( (int)v2 < 0 )
            {
              if ( v12 == 1 )
              {
                v73 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 2544));
                if ( v73 < 0 )
                {
                  v74 = (_QWORD *)WdLogNewEntry5_WdError(v72);
                  v74[4] = DxgkResumeMemorySegments;
                  v74[5] = (int)v2;
                  v74[3] = DpiPowerArbiterThread;
                  WdLogEvent5_WdError(v74);
                  LODWORD(v2) = v73;
                }
              }
              if ( v10 == 1 )
              {
                v75 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 2544), 5);
                v79 = v75;
                if ( v75 < 0 )
                {
                  v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v77, v76, v78);
                  v80[6] = DxgkReleaseAdapterCoreSync;
                  v80[3] = 275LL;
                  v80[4] = 21LL;
                  v80[5] = DpiPowerArbiterThread;
                  v80[7] = v79;
                  WdLogEvent5_WdCriticalError(v80);
                }
              }
            }
            break;
          case 6:
            v14 = *(_DWORD *)(v1 + 2628);
            if ( (v14 & 4) != 0 )
            {
              v15 = *(_QWORD *)(v1 + 1552);
              *(_DWORD *)(v1 + 2628) = v14 & 0xFFFFFFFB;
              v16 = (*(__int64 (__fastcall **)(__int64))(v1 + 1584))(v15);
              v20 = v16;
              if ( v16 < 0 )
              {
                v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v19);
                v21[3] = 275LL;
                v21[4] = 21LL;
                v21[5] = DpiPowerArbiterThread;
                v21[6] = *(_QWORD *)(v1 + 1584);
                v21[7] = v20;
                WdLogEvent5_WdCriticalError(v21);
              }
            }
            v22 = *(_DWORD *)(v1 + 2628);
            v23 = *(_QWORD *)(v1 + 2544);
            if ( (v22 & 1) != 0 )
            {
              *(_DWORD *)(v1 + 2628) = v22 & 0xFFFFFFFE;
              v24 = DxgkReleaseAdapterCoreSync(v23, 5);
              v2 = v24;
              if ( v24 < 0 )
              {
                v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27);
                v28[6] = DxgkReleaseAdapterCoreSync;
                v28[3] = 275LL;
                v28[4] = 21LL;
                v28[5] = DpiPowerArbiterThread;
                v28[7] = v2;
                WdLogEvent5_WdCriticalError(v28);
              }
            }
            else
            {
              v29 = DxgkResumeMemorySegments(v23);
              v2 = v29;
              if ( v29 < 0 )
              {
                v31 = (_QWORD *)WdLogNewEntry5_WdError(v30);
                v31[4] = DxgkResumeMemorySegments;
                v31[3] = DpiPowerArbiterThread;
                v31[5] = v2;
                WdLogEvent5_WdError(v31);
              }
              if ( (*(_DWORD *)(v1 + 2628) & 2) == 0 && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 2544), 2) < 0 )
              {
                v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v34);
                v35[6] = DxgkReleaseAdapterCoreSync;
                v35[3] = 275LL;
                v35[4] = 21LL;
                v35[5] = DpiPowerArbiterThread;
                v35[7] = v2;
                WdLogEvent5_WdCriticalError(v35);
              }
              *(_DWORD *)(v1 + 2628) &= ~2u;
            }
            *(_DWORD *)(v1 + 2624) = 6;
            goto LABEL_102;
          case 7:
            if ( *(_DWORD *)(v1 + 2624) == 1 )
              LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 2544), 5);
            *(_DWORD *)(v1 + 2624) = 7;
            goto LABEL_102;
        }
      }
LABEL_109:
      if ( v13 )
      {
        LODWORD(PowerActionQueueEntry[4].Blink) = v2;
        KeSetEvent((PRKEVENT)&PowerActionQueueEntry[3], 0, 0);
      }
      PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
      if ( !PowerActionQueueEntry )
      {
        v4 = (void *)(v1 + 2576);
        goto LABEL_113;
      }
    }
  }
LABEL_114:
  PsTerminateSystemThread(v2);
}
