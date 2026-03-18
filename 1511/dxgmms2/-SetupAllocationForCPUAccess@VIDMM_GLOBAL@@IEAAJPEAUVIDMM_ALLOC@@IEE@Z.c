/*
 * XREFs of ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C007BFF8
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C004FE00 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSV.c)
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C0080F38 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C0080FE0 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SetupAllocationForCPUAccess(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  struct _MDL *v7; // rcx
  struct _MDL *v8; // rax
  __int64 v9; // rcx
  struct _MDL *v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = *a2;
  LODWORD(v3) = 0;
  v5 = **a2;
  v6 = *(_QWORD *)(v5 + 128);
  if ( (*(_DWORD *)(v6 + 56) & 4) == 0 || (**(_DWORD **)(v5 + 472) & 0x3A) != 0 )
    return 3221225473LL;
  v7 = *(struct _MDL **)(v6 + 32);
  if ( (v2[4] & 1) == 0 )
  {
    if ( VIDMM_GLOBAL::_Config >= 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 284LL) & 8) != 0 )
        v8 = VidMmiBuildMdlFromMdl((PVOID)v2[2], *(_QWORD *)(v5 + 16), v7, *(_QWORD *)(v5 + 136) / 4096LL);
      else
        v8 = VidMmiBuildMdlForContiguousMmIo(
               (PVOID)v2[2],
               *(_QWORD *)(v5 + 16),
               (union _LARGE_INTEGER)((char *)v7 + *(_QWORD *)(v5 + 136)));
      v10 = v8;
      if ( v8 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, __int64, __int64, struct _MDL *, _QWORD, _QWORD, _QWORD, _DWORD, __int64))(**(_QWORD **)(v2[1] + 24) + 48LL))(
                *(_QWORD *)(v2[1] + 24),
                this,
                v2[3],
                1LL,
                v8,
                *(_QWORD *)(v5 + 16),
                0LL,
                0LL,
                0,
                v5);
        v3 = v11;
        if ( v11 < 0 )
        {
          ExFreePoolWithTag(v10, 0);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_q(v12, &EventPerformanceWarning, v13, 7);
          }
          _InterlockedIncrement(&dword_1C002F5D0);
          v14 = WdLogNewEntry5_WdLowResource(v12);
          *(_QWORD *)(v14 + 24) = v3;
          WdLogEvent5_WdLowResource(v14);
        }
        else
        {
          *((_BYTE *)v2 + 32) |= 1u;
          *(_BYTE *)(v5 + 95) = 1;
        }
      }
      else
      {
        _InterlockedIncrement(&dword_1C002F5B0);
        v15 = WdLogNewEntry5_WdLowResource(v9);
        *(_QWORD *)(v15 + 24) = 17076LL;
        WdLogEvent5_WdLowResource(v15);
        LODWORD(v3) = -1073741801;
      }
    }
    else
    {
      LODWORD(v3) = -1073741823;
    }
  }
  return (unsigned int)v3;
}
