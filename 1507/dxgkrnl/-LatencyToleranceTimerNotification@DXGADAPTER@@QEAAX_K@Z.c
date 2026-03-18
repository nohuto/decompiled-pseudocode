/*
 * XREFs of ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C00195D0
 * Callers:
 *     ?DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z @ 0x1C0125FC0 (-DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C0017A44 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001AE20 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C001AF60 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1C001B630 (TemplateEventDescriptor.c)
 */

void __fastcall DXGADAPTER::LatencyToleranceTimerNotification(KSPIN_LOCK *this, __int64 a2)
{
  _QWORD *v4; // r14
  _QWORD *v5; // r15
  _QWORD *v6; // rbp
  int v7; // eax
  int v8; // edi
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int v12; // eax
  KSPIN_LOCK v13; // rcx
  _QWORD *v14; // rbp
  __int64 v15; // rcx
  _QWORD *v16; // rax
  KSPIN_LOCK v17; // rcx
  __int64 v18; // rdx
  void (__fastcall *v19)(_QWORD, __int64); // rax
  __int64 v20; // rcx
  _BYTE v21[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  char v24; // [rsp+48h] [rbp-20h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    TemplateEventDescriptor(this, &Dxgk_LatencyToleranceTimer);
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v21, this + 309, 1);
  v4 = this + 307;
  v5 = (_QWORD *)this[307];
  while ( v5 != v4 )
  {
    v6 = v5 - 50;
    v5 = (_QWORD *)*v5;
    if ( *((_BYTE *)v6 + 356) || *((_DWORD *)v6 + 86) == *((_DWORD *)v6 + 2) - 1 )
    {
      v9 = v6 + 50;
      v10 = *v9;
      v11 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v11 != v9 )
        __fastfail(3u);
LABEL_26:
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *v9 = 0LL;
    }
    else if ( v6[49] <= a2 )
    {
      v7 = *((_DWORD *)v6 + 52);
      if ( v7 )
      {
        if ( v7 == 6 )
        {
          v12 = *((_DWORD *)this + 613);
          switch ( v12 )
          {
            case 0:
              *((_DWORD *)this + 613) = 1;
              v13 = this[291];
LABEL_18:
              v6[49] = a2 + v13;
              goto LABEL_19;
            case 1:
              *((_DWORD *)this + 613) = 2;
              v13 = this[293];
              goto LABEL_18;
            case 2:
              v14 = v6 + 50;
              *((_DWORD *)this + 613) = 3;
              v15 = *v14;
              v16 = (_QWORD *)v14[1];
              if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v16 != v14 )
                __fastfail(3u);
              *v16 = v15;
              *(_QWORD *)(v15 + 8) = v16;
              *v14 = 0LL;
LABEL_19:
              DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)this);
              break;
          }
        }
      }
      else
      {
        v8 = *((_DWORD *)v6 + 96) + 1;
        DXGADAPTER::SetPowerComponentLatencyCB(
          (DXGADAPTER *)this,
          *((_DWORD *)v6 + 1),
          *(_QWORD *)(this[287] + 16LL * v8));
        *((_DWORD *)v6 + 96) = v8;
        v6[49] = a2 + *(_QWORD *)(this[287] + 16LL * v8 + 8);
        if ( v8 == *((_DWORD *)v6 + 97) )
        {
          v9 = v6 + 50;
          v10 = *v9;
          v11 = (_QWORD *)v9[1];
          if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v11 != v9 )
            __fastfail(3u);
          goto LABEL_26;
        }
      }
    }
  }
  if ( (_QWORD *)*v4 == v4 )
    *((_BYTE *)this + 2444) = 0;
  v17 = this[248];
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 376) + 8LL);
  v19 = *(void (__fastcall **)(_QWORD, __int64))(v18 + 752);
  LOBYTE(v18) = *((_BYTE *)this + 2444);
  v19(*(_QWORD *)(v17 + 384), v18);
  if ( v24 )
  {
    v24 = 0;
    *(_QWORD *)(v22 + 8) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      TemplateEventDescriptor(v20, &Dxgk_LatencyToleranceTimerEnd);
  }
}
