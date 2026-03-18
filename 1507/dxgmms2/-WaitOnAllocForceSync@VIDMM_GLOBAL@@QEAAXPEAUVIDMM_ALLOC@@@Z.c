/*
 * XREFs of ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C002F4B0
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0031084 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSV.c)
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C0031520 (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z.c)
 * Callees:
 *     VidSchFlushDevice @ 0x1C002F300 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::WaitOnAllocForceSync(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL);
  if ( v4 )
  {
    v5 = (_DWORD *)*((_QWORD *)a2 + 12);
    v8 = 0LL;
    v6 = *(_QWORD *)(v4 + 544);
    v7 = ((*v5 & 0x80000 | ((unsigned int)(*v5 | (*v5 >> 1)) >> 11) & 0x80000) ^ 0x80000 | 0x40000) >> 18;
    VidSchFlushDevice(v6, (int *)&v7, 0x80000LL, a4);
  }
}
