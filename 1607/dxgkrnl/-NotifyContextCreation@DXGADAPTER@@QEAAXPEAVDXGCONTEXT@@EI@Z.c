/*
 * XREFs of ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0008E04
 * Callers:
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C006E2C4 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00954B4 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B0184 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00B04D4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C000D8E0 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001CAA0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C001CC80 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyContextCreation(DXGADAPTER *this, struct DXGCONTEXT *a2, char a3, int a4)
{
  unsigned int i; // esi
  signed __int32 v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  void (__fastcall *v18)(_QWORD, __int64); // rax
  unsigned int v20; // edx
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  char v27; // [rsp+48h] [rbp-20h]

  if ( *((_DWORD *)a2 + 32) != 2 )
  {
    for ( i = 0; i < *((_DWORD *)this + 578); ++i )
    {
      v10 = *((_QWORD *)this + 271) + 520LL * i;
      if ( !*(_DWORD *)(v10 + 208)
        && (a4 == *(_DWORD *)(v10 + 212) && *((_DWORD *)a2 + 82) == *(unsigned __int16 *)(v10 + 6)
         || *(_BYTE *)(v10 + 358)) )
      {
        DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v24, (DXGADAPTER *)((char *)this + 2632), 1u);
        if ( a3 )
        {
          if ( ++*(_DWORD *)(v10 + 416) == 1 )
          {
            v11 = *(_DWORD *)(v10 + 4);
            *(_DWORD *)(v10 + 384) = 0;
            DXGADAPTER::SetPowerComponentLatencyCB(this, v11, **((_QWORD **)this + 307));
            if ( *(int *)(v10 + 388) > 0 )
            {
              v12 = MEMORY[0xFFFFF78000000320];
              *(_QWORD *)(v10 + 392) = MEMORY[0xFFFFF78000000320];
              *(_QWORD *)(v10 + 392) = v12 + *(_QWORD *)(*((_QWORD *)this + 307) + 8LL);
              v13 = (_QWORD *)(v10 + 400);
              if ( !*v13 )
              {
                v14 = (_QWORD *)((char *)this + 2616);
                v15 = *((_QWORD *)this + 327);
                if ( *(DXGADAPTER **)(v15 + 8) != (DXGADAPTER *)((char *)this + 2616) )
                  __fastfail(3u);
                *v13 = v15;
                v13[1] = v14;
                *(_QWORD *)(v15 + 8) = v13;
                *v14 = v13;
              }
              if ( !*((_BYTE *)this + 2604) )
              {
                v16 = *((_QWORD *)this + 267);
                *((_BYTE *)this + 2604) = 1;
                v17 = *(_QWORD *)(*(_QWORD *)(v16 + 376) + 8LL);
                v18 = *(void (__fastcall **)(_QWORD, __int64))(v17 + 752);
                LOBYTE(v17) = 1;
                v18(*(_QWORD *)(v16 + 384), v17);
              }
            }
          }
        }
        else if ( (*(_DWORD *)(v10 + 416))-- == 1 )
        {
          v20 = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 384) = 2;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v20, *(_QWORD *)(*((_QWORD *)this + 307) + 32LL));
          v21 = (_QWORD *)(v10 + 400);
          if ( *v21 )
          {
            v22 = *v21;
            v23 = (_QWORD *)v21[1];
            if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v23 != v21 )
              __fastfail(3u);
            *v23 = v22;
            *(_QWORD *)(v22 + 8) = v23;
            *v21 = 0LL;
          }
        }
        if ( v27 )
        {
          v27 = 0;
          *(_QWORD *)(v25 + 8) = 0LL;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
    }
    if ( a3 )
      v9 = _InterlockedIncrement((volatile signed __int32 *)this + 581);
    else
      v9 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 581, 0xFFFFFFFF);
    if ( v9 == 1 )
    {
      if ( *((_QWORD *)this + 272) )
        DXGADAPTER::UpdateLatencyTolerances(this);
    }
  }
}
