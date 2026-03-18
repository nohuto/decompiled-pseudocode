/*
 * XREFs of ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C009DDE4
 * Callers:
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C009E400 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 *     ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAX@Z @ 0x1C009E5B0 (-ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::GetAllocationInfo(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned int *a5,
        int *a6)
{
  int v6; // edi
  unsigned __int64 v8; // r14
  void *v9; // rsi
  unsigned int v10; // ebx
  int v11; // ebp
  __int64 v13; // r8
  VIDMM_PROCESS_HEAP *v14; // r10
  __int64 v15; // rsi
  _QWORD *v16; // rax
  __int64 result; // rax

  v6 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v13 = 4LL;
  v14 = this;
  if ( (*(_DWORD *)a2 & 4) == 0 )
  {
    v8 = *((_QWORD *)a2 + 7);
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      this = (VIDMM_PROCESS_HEAP *)*((unsigned int *)a2 + 6);
      if ( (unsigned int)((_DWORD)this - 3) > 3 )
      {
        v10 = *((_DWORD *)a2 + 4);
        v9 = (void *)*((_QWORD *)a2 + 1);
        goto LABEL_11;
      }
    }
    else
    {
      v15 = *((_QWORD *)a2 + 1);
      this = (VIDMM_PROCESS_HEAP *)*(unsigned int *)(v15 + 80);
      if ( (unsigned int)((_DWORD)this - 3) > 3 )
      {
        v10 = ((~*(_BYTE *)(v15 + 64) & 2) << 9) | 4;
        v9 = (void *)(*((_QWORD *)a2 + 2) + *(_QWORD *)(v15 + 32));
        goto LABEL_11;
      }
    }
    v10 = 4;
    if ( (((_DWORD)this - 4) & 0xFFFFFFFD) != 0 )
      v10 = 1028;
    v9 = (void *)(*(__int64 (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *, _QWORD, unsigned __int64, int))(*(_QWORD *)v14 + 56LL))(
                   v14,
                   a2,
                   0LL,
                   v8,
                   1);
    if ( v9 )
    {
      v11 = 1;
      goto LABEL_11;
    }
  }
  v6 = -1071775472;
LABEL_11:
  if ( g_IsInternalReleaseOrDbg )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, v13, a4);
    v16[5] = v10;
    v16[6] = v11;
    v16[7] = v6;
    v16[3] = v9;
    v16[4] = v8;
  }
  result = (unsigned int)v6;
  *a3 = v8;
  *a4 = v9;
  *a5 = v10;
  *a6 = v11;
  return result;
}
