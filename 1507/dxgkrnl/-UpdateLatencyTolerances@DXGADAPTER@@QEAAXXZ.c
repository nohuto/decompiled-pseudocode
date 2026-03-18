/*
 * XREFs of ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C001AF60
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C000239C (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C00195D0 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C0019934 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0019C38 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078A80 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00AAB50 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00AACE0 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00C0304 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001AE20 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
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

  v10 = (KSPIN_LOCK *)((char *)this + 2472);
  v12 = 0;
  if ( *((struct _KTHREAD **)this + 310) != KeGetCurrentThread() )
  {
    KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
    v10[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v12 = 1;
  }
  if ( *((_QWORD *)this + 296) && *((_DWORD *)this + 30) != 1 )
  {
    if ( *((_BYTE *)this + 2449) )
    {
      if ( !*((_DWORD *)this + 541) )
      {
        v3 = *((_QWORD *)this + 297);
        v4 = *((_QWORD *)this + 303);
LABEL_21:
        if ( *((_BYTE *)this + 2448) )
          DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)this + 539), v3);
        v6 = *((_DWORD *)this + 540);
        if ( v6 != -1 )
          DXGADAPTER::SetPowerComponentLatencyCB(this, v6, v4);
        goto LABEL_25;
      }
      v2 = *((_DWORD *)this + 613);
      if ( v2 )
      {
        if ( v2 != 2 )
        {
          v4 = *((_QWORD *)this + 302);
          if ( v2 == 3 )
            v3 = *((_QWORD *)this + 294);
          else
            v3 = *((_QWORD *)this + 290);
          goto LABEL_21;
        }
        v3 = *((_QWORD *)this + 292);
        goto LABEL_19;
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 541) || (v5 = *((_DWORD *)this + 613), (unsigned int)(v5 - 2) <= 1) )
      {
        v3 = *((_QWORD *)this + 298);
        v4 = *((_QWORD *)this + 304);
        goto LABEL_21;
      }
      if ( v5 )
      {
        v3 = *((_QWORD *)this + 290);
LABEL_19:
        v4 = *((_QWORD *)this + 302);
        goto LABEL_21;
      }
    }
    v3 = *((_QWORD *)this + 288);
    v4 = *((_QWORD *)this + 301);
    goto LABEL_21;
  }
LABEL_25:
  if ( *((_DWORD *)this + 541) )
    v7 = *((_QWORD *)this + 299);
  else
    v7 = *((_QWORD *)this + 300);
  v8 = (DXGADAPTER *)*((_QWORD *)this + 314);
  while ( v8 != (DXGADAPTER *)((char *)this + 2512) )
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
