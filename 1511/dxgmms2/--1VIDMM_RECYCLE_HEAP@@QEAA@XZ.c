/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C005D324
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C005A9B0 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?UnmapTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C006DF00 (-UnmapTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP(
        VIDMM_RECYCLE_HEAP *this,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  struct _MDL *v20; // [rsp+20h] [rbp-8h]

  v5 = (_QWORD *)*((_QWORD *)this + 5);
  if ( v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v5 )
        {
          v8 = v5;
          v5 = (_QWORD *)*v5;
          *v8 = 0LL;
        }
        if ( !v5[1] )
          break;
        v9 = v5;
        v5 = (_QWORD *)v5[1];
        v9[1] = 0LL;
      }
      v10 = v5[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v5, 0LL, a3, a4, v20);
      v11 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v11 )
        break;
      v5 = (_QWORD *)v11;
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  v6 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v6 )
        {
          v12 = v6;
          v6 = (_QWORD *)*v6;
          *v12 = 0LL;
        }
        if ( !v6[1] )
          break;
        v13 = v6;
        v6 = (_QWORD *)v6[1];
        v13[1] = 0LL;
      }
      v14 = v6[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v6, 0LL, a3, a4, v20);
      v15 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v15 )
        break;
      v6 = (_QWORD *)v15;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v7 )
        {
          v16 = v7;
          v7 = (_QWORD *)*v7;
          *v16 = 0LL;
        }
        if ( !v7[1] )
          break;
        v17 = v7;
        v7 = (_QWORD *)v7[1];
        v17[1] = 0LL;
      }
      v18 = v7[2];
      VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource((VIDMM_SYSMEM_SEGMENT *)v7, 0LL, a3, a4, v20);
      v19 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v19 )
        break;
      v7 = (_QWORD *)v19;
    }
  }
  *((_QWORD *)this + 7) = 0LL;
}
