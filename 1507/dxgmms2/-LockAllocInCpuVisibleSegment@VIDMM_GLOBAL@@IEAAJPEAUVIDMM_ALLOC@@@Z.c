/*
 * XREFs of ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C004ECE4
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C004EEA4 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C005BC7C (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C005BD24 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  struct _MDL *v6; // rax
  union _LARGE_INTEGER v7; // rbx
  struct _MDL *v8; // rbp
  int v10; // r14d

  v2 = *a2;
  v4 = **a2;
  v5 = *(_QWORD *)(v4 + 128);
  if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 284LL) & 4) != 0 )
  {
    v6 = VidMmiBuildMdlFromMdl(
           (PVOID)v2[2],
           *(_QWORD *)(v4 + 16),
           *(struct _MDL **)(v5 + 32),
           *(_QWORD *)(v4 + 136) / 4096LL);
    v7 = *(union _LARGE_INTEGER *)(v4 + 136);
  }
  else
  {
    v7.QuadPart = *(_QWORD *)(v5 + 32) + *(_QWORD *)(v4 + 136);
    v6 = VidMmiBuildMdlForContiguousMmIo((PVOID)v2[2], *(_QWORD *)(v4 + 8), v7);
  }
  v8 = v6;
  if ( !v6 )
    return 3221225495LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, __int64, __int64, struct _MDL *, _QWORD, _QWORD, _QWORD, _DWORD, __int64))(**(_QWORD **)(v2[1] + 24) + 48LL))(
          *(_QWORD *)(v2[1] + 24),
          this,
          v2[3],
          1LL,
          v6,
          *(_QWORD *)(v4 + 16),
          0LL,
          0LL,
          0,
          v4);
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    *((_BYTE *)v2 + 32) |= 1u;
    v2[10] = v7.QuadPart;
    *(_BYTE *)(v4 + 95) = 1;
  }
  return (unsigned int)v10;
}
