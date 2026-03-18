/*
 * XREFs of ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C008AD18
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0057750 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSV.c)
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00921C4 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C009226C (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SetupAllocationForCPUAccess(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r14
  __int64 v5; // rdi
  VIDMM_GLOBAL *v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rbx
  union _LARGE_INTEGER v9; // rbx
  void *v10; // rcx
  struct _MDL *v11; // rax
  __int64 v12; // rcx
  struct _MDL *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = *a2;
  LODWORD(v5) = 0;
  v6 = this;
  v7 = **a2;
  v8 = *(_QWORD *)(v7 + 136);
  if ( (*(_DWORD *)(v8 + 56) & 4) == 0
    || (this = (VIDMM_GLOBAL *)**(unsigned int **)(v7 + 504), ((unsigned __int8)this & 0x3A) != 0) )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    return 3221225473LL;
  }
  else
  {
    v9.QuadPart = *(_QWORD *)(v7 + 144) + *(_QWORD *)(v8 + 32);
    if ( (v4[4] & 1) == 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      if ( (*((_DWORD *)v6 + 1616) & 0x1000) != 0 )
      {
        LODWORD(v5) = -1073741823;
      }
      else
      {
        v10 = (void *)v4[2];
        if ( (*(_DWORD *)(*((_QWORD *)v6 + 3) + 300LL) & 8) != 0 )
          v11 = VidMmiBuildMdlFromMdl(
                  v10,
                  *(_QWORD *)(v7 + 16),
                  *(struct _MDL **)(*(_QWORD *)(v7 + 136) + 32LL),
                  (v9.QuadPart - *(_QWORD *)(*(_QWORD *)(v7 + 136) + 32LL)) / 4096);
        else
          v11 = VidMmiBuildMdlForContiguousMmIo(v10, *(_QWORD *)(v7 + 16), v9);
        v13 = v11;
        if ( v11 )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, __int64, __int64, struct _MDL *, _QWORD, _QWORD, _QWORD, _DWORD, __int64))(**(_QWORD **)(v4[1] + 24) + 48LL))(
                  *(_QWORD *)(v4[1] + 24),
                  v6,
                  v4[3],
                  1LL,
                  v11,
                  *(_QWORD *)(v7 + 16),
                  0LL,
                  0LL,
                  0,
                  v7);
          v5 = v14;
          if ( v14 < 0 )
          {
            ExFreePoolWithTag(v13, 0);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v15, &EventPerformanceWarning, v16, 7);
            }
            _InterlockedIncrement(dword_1C0035650);
            v17 = WdLogNewEntry5_WdLowResource(v15);
            *(_QWORD *)(v17 + 24) = v5;
            WdLogEvent5_WdLowResource(v17);
          }
          else
          {
            *((_BYTE *)v4 + 32) |= 1u;
            *(_BYTE *)(v7 + 98) = 1;
          }
        }
        else
        {
          _InterlockedIncrement(&dword_1C0035630);
          v18 = WdLogNewEntry5_WdLowResource(v12);
          *(_QWORD *)(v18 + 24) = 18016LL;
          WdLogEvent5_WdLowResource(v18);
          LODWORD(v5) = -1073741801;
        }
      }
    }
    return (unsigned int)v5;
  }
}
