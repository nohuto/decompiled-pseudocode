/*
 * XREFs of ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0018B64
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0003040 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0010894 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C001ADB8 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C001B11C (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C007A060 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00BC6A0 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00BC830 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00D88B8 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C00188CC (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DXGADAPTER::UpdateLatencyTolerances(DXGADAPTER *this)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rbx
  int v5; // ecx
  int v6; // edx
  __int64 v7; // rsi
  DXGADAPTER *v8; // rbx
  char *v9; // rax
  KSPIN_LOCK *v10; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+48h] [rbp-10h]

  v10 = (KSPIN_LOCK *)((char *)this + 2488);
  v12 = 0;
  if ( *((struct _KTHREAD **)this + 312) != KeGetCurrentThread() )
  {
    KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
    v10[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v12 = 1;
  }
  if ( *((_QWORD *)this + 298) && *((_DWORD *)this + 30) != 1 )
  {
    if ( *((_BYTE *)this + 2466) )
    {
      if ( !*((_DWORD *)this + 545) )
      {
        v3 = *((_QWORD *)this + 299);
        v4 = *((_QWORD *)this + 305);
LABEL_21:
        if ( *((_BYTE *)this + 2464) )
          DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)this + 543), v3);
        v6 = *((_DWORD *)this + 544);
        if ( v6 != -1 )
          DXGADAPTER::SetPowerComponentLatencyCB(this, v6, v4);
        goto LABEL_25;
      }
      v2 = *((_DWORD *)this + 617);
      if ( v2 )
      {
        if ( v2 != 2 )
        {
          v4 = *((_QWORD *)this + 304);
          if ( v2 == 3 )
            v3 = *((_QWORD *)this + 296);
          else
            v3 = *((_QWORD *)this + 292);
          goto LABEL_21;
        }
        v3 = *((_QWORD *)this + 294);
        goto LABEL_19;
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 545) || (v5 = *((_DWORD *)this + 617), (unsigned int)(v5 - 2) <= 1) )
      {
        v3 = *((_QWORD *)this + 300);
        v4 = *((_QWORD *)this + 306);
        goto LABEL_21;
      }
      if ( v5 )
      {
        v3 = *((_QWORD *)this + 292);
LABEL_19:
        v4 = *((_QWORD *)this + 304);
        goto LABEL_21;
      }
    }
    v3 = *((_QWORD *)this + 290);
    v4 = *((_QWORD *)this + 303);
    goto LABEL_21;
  }
LABEL_25:
  if ( *((_DWORD *)this + 545) )
    v7 = *((_QWORD *)this + 301);
  else
    v7 = *((_QWORD *)this + 302);
  v8 = (DXGADAPTER *)*((_QWORD *)this + 316);
  while ( v8 != (DXGADAPTER *)((char *)this + 2528) )
  {
    v9 = (char *)v8 - 424;
    v8 = *(DXGADAPTER **)v8;
    if ( v7 == *((_QWORD *)v9 + 46) )
      break;
    DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)v9 + 1), v7);
  }
  if ( v12 )
  {
    v12 = 0;
    v10[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
