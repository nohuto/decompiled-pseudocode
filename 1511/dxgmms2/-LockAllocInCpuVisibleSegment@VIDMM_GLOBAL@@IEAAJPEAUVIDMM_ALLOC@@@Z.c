/*
 * XREFs of ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C007B314
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0043990 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C0080F38 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C0080FE0 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // r9
  struct _MDL *v6; // rax
  struct _MDL *v7; // rsi
  int v9; // ebp

  v2 = *a2;
  v4 = **a2;
  v5 = *(_QWORD *)(v4 + 128);
  if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 284LL) & 8) != 0 )
    v6 = VidMmiBuildMdlFromMdl(
           (PVOID)v2[2],
           *(_QWORD *)(v4 + 16),
           *(struct _MDL **)(v5 + 32),
           *(_QWORD *)(v4 + 136) / 4096LL);
  else
    v6 = VidMmiBuildMdlForContiguousMmIo(
           (PVOID)v2[2],
           *(_QWORD *)(v4 + 8),
           (union _LARGE_INTEGER)(*(_QWORD *)(v5 + 32) + *(_QWORD *)(v4 + 136)));
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, __int64, __int64, struct _MDL *, _QWORD, _QWORD, _QWORD, _DWORD, __int64))(**(_QWORD **)(v2[1] + 24) + 48LL))(
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
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    *((_BYTE *)v2 + 32) |= 1u;
    *(_BYTE *)(v4 + 95) = 1;
  }
  return (unsigned int)v9;
}
