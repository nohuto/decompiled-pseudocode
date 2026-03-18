/*
 * XREFs of ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0003040
 * Callers:
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C005B400 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C006CFB8 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0084B64 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0084EB4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C000D0A4 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C00188CC (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0018B64 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyContextCreation(DXGADAPTER *this, struct DXGCONTEXT *a2, char a3, int a4)
{
  unsigned int i; // esi
  signed __int32 v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  void (__fastcall *v17)(_QWORD, __int64); // rax
  unsigned int v19; // edx
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  char v26; // [rsp+48h] [rbp-20h]

  if ( *((_DWORD *)a2 + 32) != 2 )
  {
    for ( i = 0; i < *((_DWORD *)this + 542); ++i )
    {
      v10 = *((_QWORD *)this + 253) + 520LL * i;
      if ( !*(_DWORD *)(v10 + 208)
        && (a4 == *(_DWORD *)(v10 + 212) && *((_DWORD *)a2 + 82) == *(unsigned __int16 *)(v10 + 6)
         || *(_BYTE *)(v10 + 358)) )
      {
        DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v23, (DXGADAPTER *)((char *)this + 2488), 1u);
        if ( a3 )
        {
          if ( ++*(_DWORD *)(v10 + 416) == 1 )
          {
            v11 = *(_DWORD *)(v10 + 4);
            *(_DWORD *)(v10 + 384) = 0;
            DXGADAPTER::SetPowerComponentLatencyCB(this, v11, **((_QWORD **)this + 289));
            if ( *(int *)(v10 + 388) > 0 )
            {
              v12 = MEMORY[0xFFFFF78000000320];
              *(_QWORD *)(v10 + 392) = MEMORY[0xFFFFF78000000320];
              *(_QWORD *)(v10 + 392) = v12 + *(_QWORD *)(*((_QWORD *)this + 289) + 8LL);
              v13 = (_QWORD *)(v10 + 400);
              if ( !*v13 )
              {
                v14 = *((_QWORD *)this + 309);
                *v13 = v14;
                v13[1] = (char *)this + 2472;
                if ( *(DXGADAPTER **)(v14 + 8) != (DXGADAPTER *)((char *)this + 2472) )
                  __fastfail(3u);
                *(_QWORD *)(v14 + 8) = v13;
                *((_QWORD *)this + 309) = v13;
              }
              if ( !*((_BYTE *)this + 2460) )
              {
                v15 = *((_QWORD *)this + 249);
                *((_BYTE *)this + 2460) = 1;
                v16 = *(_QWORD *)(*(_QWORD *)(v15 + 400) + 8LL);
                v17 = *(void (__fastcall **)(_QWORD, __int64))(v16 + 752);
                LOBYTE(v16) = 1;
                v17(*(_QWORD *)(v15 + 408), v16);
              }
            }
          }
        }
        else if ( (*(_DWORD *)(v10 + 416))-- == 1 )
        {
          v19 = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 384) = 2;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v19, *(_QWORD *)(*((_QWORD *)this + 289) + 32LL));
          v20 = (_QWORD *)(v10 + 400);
          if ( *v20 )
          {
            v21 = *v20;
            v22 = (_QWORD *)v20[1];
            if ( *(_QWORD **)(*v20 + 8LL) != v20 || (_QWORD *)*v22 != v20 )
              __fastfail(3u);
            *v22 = v21;
            *(_QWORD *)(v21 + 8) = v22;
            *v20 = 0LL;
          }
        }
        if ( v26 )
        {
          v26 = 0;
          *(_QWORD *)(v24 + 8) = 0LL;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
    }
    if ( a3 )
      v9 = _InterlockedIncrement((volatile signed __int32 *)this + 545);
    else
      v9 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 545, 0xFFFFFFFF);
    if ( v9 == 1 )
    {
      if ( *((_QWORD *)this + 254) )
        DXGADAPTER::UpdateLatencyTolerances(this);
    }
  }
}
