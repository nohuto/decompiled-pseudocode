/*
 * XREFs of ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007AA08
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0046760 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0046924 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006179C (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007F850 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::EvictForDefragPass(VIDMM_GLOBAL *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 i; // rsi
  __int64 v6; // r13
  _QWORD *v7; // r14
  _QWORD **v8; // r15
  _QWORD **v9; // r15
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  VIDMM_DEVICE *v12; // rbp
  _QWORD *v13; // rdi
  _QWORD *v14; // rbp
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-48h]

  VIDMM_GLOBAL::StartPreparation((__int64)this, a2, 0LL, 0LL, 207);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * i);
    v7 = *(_QWORD **)(v6 + 128);
    while ( v7 != (_QWORD *)(v6 + 128) )
    {
      v8 = (_QWORD **)(v7 - 3);
      v7 = (_QWORD *)*v7;
      if ( !(unsigned __int8)PsIsSystemProcess(**v8) && !*(_BYTE *)((*v8)[4] + 312LL) )
      {
        v9 = v8 + 5;
        v10 = *v9;
        while ( v10 != v9 )
        {
          v11 = v10 - 2;
          v10 = (_QWORD *)*v10;
          v12 = (VIDMM_DEVICE *)v11[6];
          if ( !*((_QWORD *)v12 + 21) )
            VIDMM_DEVICE::PartiallySuspend((VIDMM_DEVICE *)v11[6]);
          VIDMM_DEVICE::FaultAllAllocations(v12);
        }
      }
    }
    v13 = (_QWORD *)(v6 + 168);
    while ( (_QWORD *)*v13 != v13 )
    {
      v14 = (_QWORD *)*v13;
      LOBYTE(v4) = 1;
      LOBYTE(v16) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(*v13 - 256LL) + 48LL))(
        *(_QWORD *)(*v13 - 256LL),
        *v13 - 384LL,
        v4,
        0LL,
        v16,
        0LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_p(v15, &EventEvictAllocation, v4, v14 - 48);
      }
    }
  }
  VIDMM_GLOBAL::EndPreparation(this, v3, 0LL, 0, 0LL, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
}
