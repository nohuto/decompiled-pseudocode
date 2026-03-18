/*
 * XREFs of ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C0074E18
 * Callers:
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C0075340 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 *     ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAX@Z @ 0x1C00754B0 (-ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::GetAllocationInfo(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned int *a5,
        int *a6)
{
  unsigned int v6; // edi
  unsigned __int64 v10; // rbp
  void *v11; // rax
  int v12; // ebx
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r8d
  __int64 result; // rax

  v6 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  if ( (*(_DWORD *)a2 & 4) != 0 )
    goto LABEL_12;
  v10 = *((_QWORD *)a2 + 7);
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v14 = *((_DWORD *)a2 + 6);
    if ( (unsigned int)(v14 - 3) > 3 )
    {
      v12 = *((_DWORD *)a2 + 4);
      v11 = (void *)*((_QWORD *)a2 + 1);
      goto LABEL_14;
    }
    v15 = v14 - 4;
  }
  else
  {
    v16 = *((_QWORD *)a2 + 1);
    v17 = *(_DWORD *)(v16 + 80);
    if ( (unsigned int)(v17 - 3) > 3 )
    {
      v12 = ((~*(_BYTE *)(v16 + 64) & 2) << 9) | 4;
      v11 = (void *)(*((_QWORD *)a2 + 2) + *(_QWORD *)(v16 + 32));
      goto LABEL_14;
    }
    v15 = v17 - 4;
  }
  v12 = 4;
  if ( (v15 & 0xFFFFFFFD) != 0 )
    v12 = 1028;
  v11 = (void *)(*(__int64 (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *, _QWORD, unsigned __int64, int))(*(_QWORD *)this + 56LL))(
                  this,
                  a2,
                  0LL,
                  v10,
                  1);
  if ( !v11 )
  {
LABEL_12:
    v6 = -1071775472;
    goto LABEL_14;
  }
  v13 = 1;
LABEL_14:
  *a3 = v10;
  *a4 = v11;
  result = v6;
  *a5 = v12;
  *a6 = v13;
  return result;
}
