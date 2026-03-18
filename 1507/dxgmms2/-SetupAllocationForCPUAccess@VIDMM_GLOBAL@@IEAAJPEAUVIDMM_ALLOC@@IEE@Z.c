/*
 * XREFs of ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C0053634
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0031084 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSV.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C005BC7C (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C005BD24 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SetupAllocationForCPUAccess(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v6; // r8
  struct _MDL *v7; // r8
  char *v8; // rbx
  void *v9; // rcx
  struct _MDL *v10; // rax
  __int64 v11; // rcx
  struct _MDL *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax

  v2 = *a2;
  LODWORD(v3) = 0;
  v5 = **a2;
  v6 = *(_QWORD *)(v5 + 128);
  if ( (*(_DWORD *)(v6 + 56) & 4) == 0 || (**(_DWORD **)(v5 + 472) & 0x3A) != 0 )
    return 3221225473LL;
  v7 = *(struct _MDL **)(v6 + 32);
  v8 = (char *)v7 + *(_QWORD *)(v5 + 136);
  if ( (v2[4] & 1) == 0 )
  {
    if ( VIDMM_GLOBAL::_Config >= 0 )
    {
      v9 = (void *)v2[2];
      if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 284LL) & 4) != 0 )
      {
        v10 = VidMmiBuildMdlFromMdl(v9, *(_QWORD *)(v5 + 16), v7, *(_QWORD *)(v5 + 136) / 4096LL);
        v8 = *(char **)(v5 + 136);
      }
      else
      {
        v10 = VidMmiBuildMdlForContiguousMmIo(
                v9,
                *(_QWORD *)(v5 + 16),
                (union _LARGE_INTEGER)((char *)v7 + *(_QWORD *)(v5 + 136)));
      }
      v12 = v10;
      if ( v10 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, __int64, __int64, struct _MDL *, _QWORD, _QWORD, _QWORD, _DWORD, __int64))(**(_QWORD **)(v2[1] + 24) + 48LL))(
                *(_QWORD *)(v2[1] + 24),
                this,
                v2[3],
                1LL,
                v10,
                *(_QWORD *)(v5 + 16),
                0LL,
                0LL,
                0,
                v5);
        v3 = v13;
        if ( v13 < 0 )
        {
          ExFreePoolWithTag(v12, 0);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_q(v14, &EventPerformanceWarning, v15, 7);
          }
          _InterlockedIncrement(&dword_1C00275C0);
          v16 = WdLogNewEntry5_WdLowResource(v14);
          *(_QWORD *)(v16 + 24) = v3;
          WdLogEvent5_WdLowResource(v16);
        }
        else
        {
          *((_BYTE *)v2 + 32) |= 1u;
          v2[10] = (__int64)v8;
          *(_BYTE *)(v5 + 95) = 1;
        }
      }
      else
      {
        _InterlockedIncrement(&dword_1C00275A0);
        v17 = WdLogNewEntry5_WdLowResource(v11);
        *(_QWORD *)(v17 + 24) = 16753LL;
        WdLogEvent5_WdLowResource(v17);
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
