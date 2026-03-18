/*
 * XREFs of ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0002AC4
 * Callers:
 *     ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0010CB0 (-DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C00029A0 (-ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z.c)
 *     TemplateEventDescriptor @ 0x1C001C07C (TemplateEventDescriptor.c)
 *     Template_pqq @ 0x1C001C1F0 (Template_pqq.c)
 */

void __fastcall DXGADAPTER::ProcessComponentIdleList(KSPIN_LOCK *this)
{
  __int64 v2; // rbx
  char *v3; // rsi
  char *v4; // rax
  char *v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r9
  _QWORD *v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // r8d
  _QWORD *i; // r14
  unsigned int v14; // r15d
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 2462) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      TemplateEventDescriptor(this, &Dxgk_ProcessComponentIdleList);
    v2 = MEMORY[0xFFFFF78000000014];
    KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 320, &LockHandle);
    v17[1] = v17;
    v3 = (char *)(this + 314);
    v17[0] = v17;
    v4 = (char *)this[314];
    while ( v4 != v3 )
    {
      v5 = v4 - 440;
      v4 = *(char **)v4;
      if ( *((_QWORD *)v5 + 61) > v2 )
        break;
      v6 = v5 + 440;
      v7 = *((_QWORD *)v5 + 55);
      v8 = (_QWORD *)*((_QWORD *)v5 + 56);
      if ( *(char **)(v7 + 8) != v5 + 440 || (_QWORD *)*v8 != v6 )
        __fastfail(3u);
      *v8 = v7;
      v9 = v5 + 456;
      *(_QWORD *)(v7 + 8) = v8;
      *v6 = 0LL;
      v10 = v17[0];
      v9[1] = v17;
      *v9 = v10;
      if ( *(_QWORD **)(v10 + 8) != v17 )
        __fastfail(3u);
      *(_QWORD *)(v10 + 8) = v9;
      v17[0] = v9;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    for ( i = (_QWORD *)v17[0]; i != v17; i = (_QWORD *)*i )
    {
      v14 = *((_DWORD *)i - 114);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        Template_pqq(v11, (unsigned int)&Dxgk_ReportPowerComponentState, v12, (_DWORD)this, v14, 0);
      PoFxIdleComponent(this[254], v14, 0LL);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 320, &LockHandle);
    *((_BYTE *)this + 2461) = 0;
    if ( *(char **)v3 != v3 )
    {
      v15 = *(_QWORD **)v3;
      if ( *(_QWORD *)(*(_QWORD *)v3 + 40LL) <= v2 )
      {
        v16 = v15[6] - v2;
      }
      else
      {
        v16 = v15[7];
        v15[5] = v2;
        v15[6] = v16 + v2;
      }
      DXGADAPTER::ScheduleComponentIdleListTimer((DXGADAPTER *)this, v16);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
