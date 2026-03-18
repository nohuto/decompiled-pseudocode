/*
 * XREFs of ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C004FDA8
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C004F940 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005001C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4,
        char *a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        union _LARGE_INTEGER *a10,
        struct _MDL *a11)
{
  unsigned int v13; // r11d
  char *v14; // r10
  char *v15; // rdi
  LONGLONG QuadPart; // r15
  LONGLONG v17; // rbp
  char *v18; // r14
  char *i; // rbx
  char *v20; // r9
  char *v21; // rsi
  struct _DXGK_TRANSFERFLAGS v22; // [rsp+60h] [rbp-48h]
  char *v25; // [rsp+D0h] [rbp+28h]
  char v27; // [rsp+108h] [rbp+60h]

  v13 = a2;
  v14 = a5;
  v15 = &a5[a4];
  if ( a7 )
    QuadPart = a7->QuadPart;
  else
    QuadPart = 0LL;
  if ( a10 )
    v17 = a10->QuadPart;
  else
    v17 = 0LL;
  v18 = (char *)a3 + 184;
  for ( i = (char *)*((_QWORD *)a3 + 23); i != v18; i = *(char **)i )
  {
    v20 = (char *)*((_QWORD *)i + 4);
    if ( v15 <= v20 )
      break;
    v21 = &v20[*((_QWORD *)i + 8) - *((_QWORD *)i + 7)];
    if ( v14 < v21 )
    {
      v27 = 0;
      if ( v15 > v21 )
      {
        v25 = &v20[*((_QWORD *)i + 8) - *((_QWORD *)i + 7)];
        v27 = 1;
      }
      else
      {
        v25 = v15;
      }
      if ( v14 < v20 )
      {
        VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
          this,
          v13,
          a3,
          v20 - v14,
          v14,
          a6,
          v14 - a5 + QuadPart,
          a8,
          a9,
          v14 - a5 + v17,
          a11,
          (unsigned __int64)(v14 - a5) >> 12,
          v22,
          0LL);
        v20 = (char *)*((_QWORD *)i + 4);
        v14 = v20;
      }
      VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        this,
        a2,
        a3,
        v25 - v14,
        v20,
        a6,
        v14 - a5 + QuadPart,
        a8,
        a9,
        v14 - a5 + v17,
        a11,
        (unsigned __int64)(v14 - a5) >> 12,
        v22,
        *((_QWORD *)i + 5));
      if ( !v27 )
        return;
      v13 = a2;
      v14 = v21;
    }
  }
  VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
    this,
    v13,
    a3,
    v15 - v14,
    v14,
    a6,
    v15 - v14 + QuadPart,
    a8,
    a9,
    v15 - v14 + v17,
    a11,
    (unsigned __int64)(v15 - v14) >> 12,
    v22,
    0LL);
}
