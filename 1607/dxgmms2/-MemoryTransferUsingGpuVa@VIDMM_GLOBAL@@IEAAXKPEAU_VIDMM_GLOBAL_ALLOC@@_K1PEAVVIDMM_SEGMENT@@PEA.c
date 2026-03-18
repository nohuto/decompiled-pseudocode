/*
 * XREFs of ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0089E38
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051824 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0051250 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        union _LARGE_INTEGER *a10,
        struct _MDL *a11,
        unsigned int a12)
{
  unsigned int v14; // r11d
  unsigned __int64 v15; // r10
  union _LARGE_INTEGER *v16; // rsi
  LONGLONG QuadPart; // r12
  LONGLONG v18; // r15
  char *v19; // r14
  char *i; // rbx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rdi
  struct _DXGK_TRANSFERFLAGS v23; // [rsp+60h] [rbp-48h]
  char v26; // [rsp+D0h] [rbp+28h]
  union _LARGE_INTEGER *v27; // [rsp+E0h] [rbp+38h]

  v14 = a2;
  v15 = a5;
  v16 = (union _LARGE_INTEGER *)(a4 + a5);
  if ( a7 )
    QuadPart = a7->QuadPart;
  else
    QuadPart = 0LL;
  if ( a10 )
    v18 = a10->QuadPart;
  else
    v18 = 0LL;
  v19 = (char *)a3 + 192;
  for ( i = (char *)*((_QWORD *)a3 + 24); i != v19; i = *(char **)i )
  {
    v21 = *((_QWORD *)i + 4);
    if ( (unsigned __int64)v16 <= v21 )
      break;
    v22 = v21 + *((_QWORD *)i + 8) - *((_QWORD *)i + 7);
    if ( v15 < v22 )
    {
      v26 = 0;
      if ( (unsigned __int64)v16 > v22 )
      {
        v27 = (union _LARGE_INTEGER *)(v21 + *((_QWORD *)i + 8) - *((_QWORD *)i + 7));
        v26 = 1;
      }
      else
      {
        v27 = v16;
      }
      if ( v15 < v21 )
      {
        VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
          this,
          v14,
          (D3DGPU_VIRTUAL_ADDRESS *)a3,
          v21 - v15,
          v15,
          a6,
          v15 - a5 + QuadPart,
          a8,
          a9,
          v15 - a5 + v18,
          a11,
          a12 + ((v15 - a5) >> 12),
          v23,
          0LL);
        v21 = *((_QWORD *)i + 4);
        v15 = v21;
      }
      VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        this,
        a2,
        (D3DGPU_VIRTUAL_ADDRESS *)a3,
        (SIZE_T)v27 - v15,
        v21,
        a6,
        v15 - a5 + QuadPart,
        a8,
        a9,
        v15 - a5 + v18,
        a11,
        a12 + ((v15 - a5) >> 12),
        v23,
        *((_QWORD *)i + 5));
      if ( !v26 )
        return;
      v14 = a2;
      v15 = v22;
    }
  }
  VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
    this,
    v14,
    (D3DGPU_VIRTUAL_ADDRESS *)a3,
    (SIZE_T)v16 - v15,
    v15,
    a6,
    v15 - a5 + QuadPart,
    a8,
    a9,
    v15 - a5 + v18,
    a11,
    a12 + ((v15 - a5) >> 12),
    v23,
    0LL);
}
