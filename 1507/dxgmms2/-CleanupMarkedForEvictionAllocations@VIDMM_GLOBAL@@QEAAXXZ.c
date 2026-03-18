/*
 * XREFs of ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00338EC
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003369C (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0033820 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0035E44 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C004BD24 (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 */

void __fastcall VIDMM_GLOBAL::CleanupMarkedForEvictionAllocations(VIDMM_GLOBAL *this)
{
  __int64 v2; // rsi
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int8 v7; // bl
  __int64 v8; // rdx

  if ( qword_1C0027280 )
  {
    v2 = 0x8000000000000000uLL;
    if ( *((_BYTE *)this + 39954) )
    {
      v3 = *((_DWORD *)this + 926);
      v4 = 0LL;
      if ( v3 )
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v4);
          if ( (*(_DWORD *)(v5 + 56) & 0x1001) != 0 && *(_QWORD *)(v5 + 168) != v5 + 168 )
            break;
          v4 = (unsigned int)(v4 + 1);
          if ( (unsigned int)v4 >= v3 )
            goto LABEL_7;
        }
        *((_QWORD *)this + 878) = *((_QWORD *)this + 576);
        *((_BYTE *)this + 39954) = 0;
        v2 = -qword_1C0027280;
      }
    }
    else
    {
      v6 = *((_QWORD *)this + 576) - *((_QWORD *)this + 878);
      if ( v6 < qword_1C0027280 )
      {
        v2 = v6 - qword_1C0027280;
      }
      else
      {
        VIDMM_GLOBAL::StartPreparation((__int64)this, qword_1C0027280, 0LL, 0LL, 207);
        v7 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(this);
        VIDMM_GLOBAL::EndPreparation(this, v8, 0LL, 0, 0LL, 0LL);
        if ( !v7 )
          *((_BYTE *)this + 39954) = 1;
      }
    }
LABEL_7:
    VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v2, 2LL);
  }
}
