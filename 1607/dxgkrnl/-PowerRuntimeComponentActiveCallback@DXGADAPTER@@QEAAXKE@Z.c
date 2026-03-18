/*
 * XREFs of ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0010FA4
 * Callers:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0008B04 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C0010F40 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C001E2C8 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C0020C10 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C0008D30 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C000D8E0 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001CAA0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C001CC80 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, char a3, __int64 a4)
{
  unsigned int *v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // edx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  struct _KTHREAD *v12; // rdx
  unsigned int *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int **v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  void (__fastcall *v22)(_QWORD, __int64); // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  char v25[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  char v28; // [rsp+58h] [rbp-40h]
  char v29[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v30; // [rsp+68h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+70h] [rbp-28h] BYREF
  char v32; // [rsp+88h] [rbp-10h]

  v6 = (unsigned int *)(*((_QWORD *)this + 271) + 520LL * a2);
  *((_BYTE *)v6 + 356) = a3;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    v15 = v6[52];
    if ( v15 )
    {
      if ( v15 == 3 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 267)
                                                                                             + 400LL)
                                                                                 + 8LL)
                                                                     + 744LL))(
          *(_QWORD *)(*((_QWORD *)this + 267) + 408LL),
          *((unsigned __int16 *)v6 + 3),
          v6[53],
          *v6,
          a3);
    }
    else
    {
      LOBYTE(a4) = a3;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 267) + 376LL)
                                                                          + 8LL)
                                                              + 704LL))(
        *(_QWORD *)(*((_QWORD *)this + 267) + 384LL),
        *((unsigned __int16 *)v6 + 3),
        v6[53],
        a4);
    }
    if ( *((_BYTE *)v6 + 357) && (int)v6[97] > 0 )
    {
      DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v25, (KSPIN_LOCK *)this + 329, 1);
      if ( a3 )
      {
        v14 = v6 + 100;
        if ( *((_QWORD *)v6 + 50) )
        {
          v16 = *(_QWORD *)v14;
          v17 = (unsigned int **)*((_QWORD *)v6 + 51);
          if ( *(unsigned int **)(*(_QWORD *)v14 + 8LL) != v14 || *v17 != v14 )
            __fastfail(3u);
          *v17 = (unsigned int *)v16;
          *(_QWORD *)(v16 + 8) = v17;
          *(_QWORD *)v14 = 0LL;
        }
      }
      else if ( v6[104] )
      {
        if ( v6[96] )
        {
          v9 = v6[1];
          v6[96] = 0;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v9, **((_QWORD **)this + 307));
        }
        v10 = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v6 + 49) = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v6 + 49) = v10 + *(_QWORD *)(*((_QWORD *)this + 307) + 8LL);
        v11 = v6 + 100;
        if ( !*((_QWORD *)v6 + 50) )
        {
          v18 = (_QWORD *)((char *)this + 2616);
          v19 = *((_QWORD *)this + 327);
          if ( *(DXGADAPTER **)(v19 + 8) != (DXGADAPTER *)((char *)this + 2616) )
            __fastfail(3u);
          *v11 = v19;
          *((_QWORD *)v6 + 51) = v18;
          *(_QWORD *)(v19 + 8) = v11;
          *v18 = v11;
        }
        if ( !*((_BYTE *)this + 2604) )
        {
          v20 = *((_QWORD *)this + 267);
          *((_BYTE *)this + 2604) = 1;
          v21 = *(_QWORD *)(*(_QWORD *)(v20 + 376) + 8LL);
          v22 = *(void (__fastcall **)(_QWORD, __int64))(v21 + 752);
          LOBYTE(v21) = 1;
          v22(*(_QWORD *)(v20 + 384), v21);
        }
      }
      else if ( v6[96] != 2 )
      {
        v8 = v6[1];
        v6[96] = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v8, *(_QWORD *)(*((_QWORD *)this + 307) + 32LL));
      }
      if ( v28 )
      {
        v28 = 0;
        *(_QWORD *)(v26 + 8) = 0LL;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    if ( !v6[52] && *((_QWORD *)this + 316) )
    {
      DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v29, (KSPIN_LOCK *)this + 329, 1);
      if ( a3 )
      {
        if ( !*((_DWORD *)this + 582) )
        {
          v7 = *((_QWORD *)this + 316) + 400LL;
          if ( *(_QWORD *)v7 )
          {
            v23 = *(_QWORD *)v7;
            v24 = *(_QWORD **)(*((_QWORD *)this + 316) + 408LL);
            if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v24 != v7 )
              __fastfail(3u);
            *v24 = v23;
            *(_QWORD *)(v23 + 8) = v24;
            *(_QWORD *)(*((_QWORD *)this + 316) + 400LL) = 0LL;
          }
          if ( *((_DWORD *)this + 653) )
          {
            *((_DWORD *)this + 653) = 0;
            DXGADAPTER::UpdateLatencyTolerances(this);
          }
        }
        ++*((_DWORD *)this + 582);
      }
      else if ( (*((_DWORD *)this + 582))-- == 1 )
      {
        DXGADAPTER::ScheduleAdapterActivityCheck((struct _KTHREAD **)this, v12);
      }
      if ( v32 )
      {
        v32 = 0;
        *(_QWORD *)(v30 + 8) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v31);
      }
    }
  }
}
