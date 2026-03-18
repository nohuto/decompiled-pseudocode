/*
 * XREFs of ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0088DA0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004E990 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C004EB54 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005BEE4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0069218 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::EvictForDefragPass(VIDMM_GLOBAL *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 i; // rsi
  __int64 v6; // r13
  _QWORD *v7; // r14
  _QWORD **v8; // r15
  __int64 v9; // r9
  _QWORD **v10; // r15
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  VIDMM_DEVICE *v13; // rbp
  _QWORD *v14; // rdi
  _QWORD *v15; // rbp
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-48h]

  VIDMM_GLOBAL::StartPreparation((__int64)this, a2, 0LL, 0LL, 207);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * i);
    v7 = *(_QWORD **)(v6 + 128);
    while ( v7 != (_QWORD *)(v6 + 128) )
    {
      v8 = (_QWORD **)(v7 - 3);
      v7 = (_QWORD *)*v7;
      if ( !(unsigned __int8)PsIsSystemProcess(**v8) && !*(_BYTE *)((*v8)[4] + 288LL) )
      {
        v10 = v8 + 5;
        v11 = *v10;
        while ( v11 != v10 )
        {
          v12 = v11 - 2;
          v11 = (_QWORD *)*v11;
          v13 = (VIDMM_DEVICE *)v12[6];
          if ( !*((_QWORD *)v13 + 22) )
            VIDMM_DEVICE::PartiallySuspend((__int64 **)v12[6]);
          VIDMM_DEVICE::FaultAllAllocations(v13, v3, v4, v9);
        }
      }
    }
    v14 = (_QWORD *)(v6 + 168);
    while ( (_QWORD *)*v14 != v14 )
    {
      v15 = (_QWORD *)*v14;
      LOBYTE(v4) = 1;
      LOBYTE(v17) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(*v14 - 264LL) + 48LL))(
        *(_QWORD *)(*v14 - 264LL),
        *v14 - 400LL,
        v4,
        0LL,
        v17,
        0LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_p(v16, &EventEvictAllocation, v4, v15 - 50);
      }
    }
  }
  VIDMM_GLOBAL::EndPreparation(this, v3, 0LL, 0, 0LL, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
}
