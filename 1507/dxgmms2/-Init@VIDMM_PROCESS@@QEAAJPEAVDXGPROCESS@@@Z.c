/*
 * XREFs of ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C00365E0
 * Callers:
 *     VidMmCreateProcess @ 0x1C0005EE0 (VidMmCreateProcess.c)
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0005F40 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0005F60 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1C007386C (--0VIDMM_PROCESS_HEAP@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::Init(VIDMM_PROCESS *this, struct DXGPROCESS *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  VIDMM_PROCESS_HEAP *v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 result; // rax
  VIDMM_PROCESS_HEAP *v11; // rax
  char *v12; // rax
  char *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  DXGGLOBAL *Global; // rax
  unsigned __int64 MaximumAdapterCount; // rbx
  SIZE_T v18; // rax
  PVOID v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax

  *(_QWORD *)this = *((_QWORD *)a2 + 7);
  v4 = *((_QWORD *)a2 + 8);
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 1) = v4;
  v5 = operator new(0x40uLL, 0x34346956u, (POOL_TYPE)512);
  v7 = 0LL;
  v8 = v5;
  if ( v5 )
  {
    *v5 = this;
    v5[4] = v5 + 3;
    v5[3] = v5 + 3;
    v5[2] = v5 + 1;
    v5[1] = v5 + 1;
    v5[6] = v5 + 5;
    v5[5] = v5 + 5;
    KeInitializeSpinLock(v5 + 7);
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 5) = v8;
  if ( v8 )
  {
    if ( dword_1C00272F8 )
    {
      v12 = (char *)operator new(0x2B8uLL, 0x30316956u, (POOL_TYPE)512);
      v13 = v12;
      if ( v12 )
      {
        *((_QWORD *)v12 + 1) = 0LL;
        *(_QWORD *)v12 = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
        *((_DWORD *)v12 + 4) = 1;
        *((_QWORD *)v12 + 3) = v12;
        *((_QWORD *)v12 + 4) = 0LL;
        *((_QWORD *)v12 + 6) = v12 + 40;
        *((_QWORD *)v12 + 5) = v12 + 40;
        *((_QWORD *)v12 + 7) = 0LL;
        *((_QWORD *)v12 + 8) = 0LL;
        *((_QWORD *)v12 + 9) = 0LL;
        *((_DWORD *)v12 + 20) = 2;
        *((_QWORD *)v12 + 11) = v12;
        *((_QWORD *)v12 + 12) = 0LL;
        *((_QWORD *)v12 + 14) = v12 + 104;
        *((_QWORD *)v12 + 13) = v12 + 104;
        *((_QWORD *)v12 + 15) = 0LL;
        *((_QWORD *)v12 + 16) = 0LL;
        *((_QWORD *)v12 + 17) = 0LL;
        *((_DWORD *)v12 + 36) = 3;
        *((_QWORD *)v12 + 19) = v12;
        *((_QWORD *)v12 + 20) = 0LL;
        *((_QWORD *)v12 + 22) = v12 + 168;
        *((_QWORD *)v12 + 21) = v12 + 168;
        *((_QWORD *)v12 + 23) = 0LL;
        *((_QWORD *)v12 + 24) = 0LL;
        *((_QWORD *)v12 + 25) = 0LL;
        *((_DWORD *)v12 + 52) = 4;
        *((_QWORD *)v12 + 27) = v12;
        *((_QWORD *)v12 + 28) = 0LL;
        *((_QWORD *)v12 + 30) = v12 + 232;
        *((_QWORD *)v12 + 29) = v12 + 232;
        *((_QWORD *)v12 + 31) = 0LL;
        *((_QWORD *)v12 + 32) = 0LL;
        *((_QWORD *)v12 + 33) = 0LL;
        *((_DWORD *)v12 + 68) = 5;
        *((_QWORD *)v12 + 35) = v12;
        *((_QWORD *)v12 + 36) = 0LL;
        *((_QWORD *)v12 + 38) = v12 + 296;
        *((_QWORD *)v12 + 37) = v12 + 296;
        *((_QWORD *)v12 + 39) = 0LL;
        *((_QWORD *)v12 + 40) = 0LL;
        *((_QWORD *)v12 + 41) = 0LL;
        *((_DWORD *)v12 + 84) = 6;
        *((_QWORD *)v12 + 43) = v12;
        *((_QWORD *)v12 + 44) = 0LL;
        *((_QWORD *)v12 + 46) = v12 + 360;
        *((_QWORD *)v12 + 45) = v12 + 360;
        *((_QWORD *)v12 + 47) = 0LL;
        *((_QWORD *)v12 + 48) = 0LL;
        *((_QWORD *)v12 + 49) = 0LL;
        *((_QWORD *)v12 + 50) = 0LL;
        *((_QWORD *)v12 + 51) = 0LL;
        *((_QWORD *)v12 + 52) = 0LL;
        *((_QWORD *)v12 + 53) = 0LL;
        *((_DWORD *)v12 + 110) = 0;
        *((_DWORD *)v12 + 111) = -1;
        *((_DWORD *)v12 + 112) = 32;
        *((_QWORD *)v12 + 54) = 0LL;
        *((_DWORD *)v12 + 154) = 0;
        *((_DWORD *)v12 + 155) = 0;
        *((_QWORD *)v12 + 82) = 1LL;
        *((_DWORD *)v12 + 166) = 0;
        KeInitializeTimer((PKTIMER)(v12 + 456));
        KeInitializeDpc((PRKDPC)(v13 + 520), (PKDEFERRED_ROUTINE)VidMmRangeCurationDpc, v13);
        *((_QWORD *)v13 + 76) = v13;
        *((_QWORD *)v13 + 75) = VidMmRangeCurationThread;
        *((_QWORD *)v13 + 73) = 0LL;
        *((_QWORD *)v13 + 79) = v13 + 624;
        *((_QWORD *)v13 + 78) = v13 + 624;
        *((_QWORD *)v13 + 81) = v13 + 640;
        *((_QWORD *)v13 + 80) = v13 + 640;
        *((_QWORD *)v13 + 85) = 0LL;
        *((_QWORD *)v13 + 86) = 0LL;
      }
      else
      {
        v13 = 0LL;
      }
      *((_QWORD *)this + 3) = v13;
    }
    else
    {
      v11 = (VIDMM_PROCESS_HEAP *)operator new(0x140uLL, 0x30316956u, (POOL_TYPE)512);
      if ( v11 )
        v7 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v11);
      *((_QWORD *)this + 3) = v7;
    }
    v14 = *((_QWORD *)this + 3);
    if ( v14 )
    {
      result = (*(__int64 (__fastcall **)(__int64, VIDMM_PROCESS *))(*(_QWORD *)v14 + 8LL))(v14, this);
      if ( (int)result >= 0 )
      {
        Global = DXGGLOBAL::GetGlobal();
        MaximumAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global);
        v18 = 8 * MaximumAdapterCount;
        if ( !is_mul_ok(MaximumAdapterCount, 8uLL) )
          v18 = -1LL;
        v19 = operator new(v18, 0x33316956u, PagedPool);
        *((_QWORD *)this + 2) = v19;
        if ( v19 )
        {
          memset(v19, 0, 8 * MaximumAdapterCount);
          if ( *((_BYTE *)a2 + 313) )
          {
            *((_DWORD *)this + 12) |= 2u;
            g_pVidMmSystemProcess = this;
          }
          return 0LL;
        }
        else
        {
          _InterlockedIncrement(&dword_1C0027534);
          v21 = WdLogNewEntry5_WdLowResource(v20);
          *(_QWORD *)(v21 + 24) = 225LL;
          WdLogEvent5_WdLowResource(v21);
          return 3221225495LL;
        }
      }
    }
    else
    {
      _InterlockedIncrement(&dword_1C0027590);
      v15 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v15 + 24) = 203LL;
      WdLogEvent5_WdLowResource(v15);
      return 3221225495LL;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C0027544);
    v9 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v9 + 24) = 183LL;
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
  return result;
}
