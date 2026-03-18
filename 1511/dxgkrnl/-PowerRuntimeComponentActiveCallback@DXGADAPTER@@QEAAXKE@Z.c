/*
 * XREFs of ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0010894
 * Callers:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z @ 0x1C0002C94 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C0010830 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C001AA90 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIE@Z @ 0x1C001B724 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIE@Z.c)
 * Callees:
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C0002F20 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C000D0A4 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C00188CC (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0018B64 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, char a3, __int64 a4)
{
  unsigned int *v6; // rdi
  unsigned int v7; // eax
  unsigned int *v8; // rax
  __int64 v9; // rdx
  unsigned int **v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // edx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  void (__fastcall *v18)(_QWORD, __int64); // rax
  struct _KTHREAD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  char v24[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  char v27; // [rsp+58h] [rbp-40h]
  char v28[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v29; // [rsp+68h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+70h] [rbp-28h] BYREF
  char v31; // [rsp+88h] [rbp-10h]

  v6 = (unsigned int *)(*((_QWORD *)this + 253) + 520LL * a2);
  *((_BYTE *)v6 + 356) = a3;
  if ( *((_DWORD *)this + 40) == 1 )
  {
    v7 = v6[52];
    if ( v7 )
    {
      if ( v7 == 3 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 249)
                                                                                             + 424LL)
                                                                                 + 8LL)
                                                                     + 728LL))(
          *(_QWORD *)(*((_QWORD *)this + 249) + 432LL),
          *((unsigned __int16 *)v6 + 3),
          v6[53],
          *v6,
          a3);
    }
    else
    {
      LOBYTE(a4) = a3;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 249) + 400LL)
                                                                          + 8LL)
                                                              + 704LL))(
        *(_QWORD *)(*((_QWORD *)this + 249) + 408LL),
        *((unsigned __int16 *)v6 + 3),
        v6[53],
        a4);
    }
    if ( *((_BYTE *)v6 + 357) && (int)v6[97] > 0 )
    {
      DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v24, (KSPIN_LOCK *)this + 311, 1);
      if ( a3 )
      {
        v8 = v6 + 100;
        if ( *((_QWORD *)v6 + 50) )
        {
          v9 = *(_QWORD *)v8;
          v10 = (unsigned int **)*((_QWORD *)v6 + 51);
          if ( *(unsigned int **)(*(_QWORD *)v8 + 8LL) != v8 || *v10 != v8 )
            __fastfail(3u);
          *v10 = (unsigned int *)v9;
          *(_QWORD *)(v9 + 8) = v10;
          *(_QWORD *)v8 = 0LL;
        }
      }
      else if ( v6[104] )
      {
        if ( v6[96] )
        {
          v12 = v6[1];
          v6[96] = 0;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v12, **((_QWORD **)this + 289));
        }
        v13 = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v6 + 49) = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v6 + 49) = v13 + *(_QWORD *)(*((_QWORD *)this + 289) + 8LL);
        v14 = v6 + 100;
        if ( !*((_QWORD *)v6 + 50) )
        {
          v15 = *((_QWORD *)this + 309);
          *v14 = v15;
          *((_QWORD *)v6 + 51) = (char *)this + 2472;
          if ( *(DXGADAPTER **)(v15 + 8) != (DXGADAPTER *)((char *)this + 2472) )
            __fastfail(3u);
          *(_QWORD *)(v15 + 8) = v14;
          *((_QWORD *)this + 309) = v14;
        }
        if ( !*((_BYTE *)this + 2460) )
        {
          v16 = *((_QWORD *)this + 249);
          *((_BYTE *)this + 2460) = 1;
          v17 = *(_QWORD *)(*(_QWORD *)(v16 + 400) + 8LL);
          v18 = *(void (__fastcall **)(_QWORD, __int64))(v17 + 752);
          LOBYTE(v17) = 1;
          v18(*(_QWORD *)(v16 + 408), v17);
        }
      }
      else if ( v6[96] != 2 )
      {
        v11 = v6[1];
        v6[96] = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v11, *(_QWORD *)(*((_QWORD *)this + 289) + 32LL));
      }
      if ( v27 )
      {
        v27 = 0;
        *(_QWORD *)(v25 + 8) = 0LL;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    if ( !v6[52] && *((_QWORD *)this + 298) )
    {
      DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v28, (KSPIN_LOCK *)this + 311, 1);
      if ( a3 )
      {
        if ( !*((_DWORD *)this + 546) )
        {
          v20 = *((_QWORD *)this + 298) + 400LL;
          if ( *(_QWORD *)v20 )
          {
            v21 = *(_QWORD *)v20;
            v22 = *(_QWORD **)(*((_QWORD *)this + 298) + 408LL);
            if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 || *v22 != v20 )
              __fastfail(3u);
            *v22 = v21;
            *(_QWORD *)(v21 + 8) = v22;
            *(_QWORD *)(*((_QWORD *)this + 298) + 400LL) = 0LL;
          }
          if ( *((_DWORD *)this + 617) )
          {
            *((_DWORD *)this + 617) = 0;
            DXGADAPTER::UpdateLatencyTolerances(this);
          }
        }
        ++*((_DWORD *)this + 546);
      }
      else if ( (*((_DWORD *)this + 546))-- == 1 )
      {
        DXGADAPTER::ScheduleAdapterActivityCheck((struct _KTHREAD **)this, v19);
      }
      if ( v31 )
      {
        v31 = 0;
        *(_QWORD *)(v29 + 8) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v30);
      }
    }
  }
}
