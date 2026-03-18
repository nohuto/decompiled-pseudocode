/*
 * XREFs of ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C0085C50
 * Callers:
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00858F8 (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00472BC (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@IEAAXEP6AXPEAX@Z0@Z @ 0x1C0047E98 (-FlushPagingBuffer@VIDMM_GLOBAL@@IEAAXEP6AXPEAX@Z0@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00490BC (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ValidateApertureCoherency(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        union _LARGE_INTEGER a3,
        unsigned int a4,
        struct _MDL *a5,
        unsigned int *a6,
        struct _MDL *a7,
        unsigned int *a8,
        unsigned __int8 a9)
{
  __int64 v9; // rax
  unsigned int v11; // ebx
  unsigned int *v13; // r12
  __int64 v14; // rsi
  unsigned int v15; // r14d
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // r15d
  signed __int64 v20; // r13
  unsigned int *v21; // r12
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int v36; // [rsp+58h] [rbp-61h]
  unsigned int v37; // [rsp+58h] [rbp-61h]
  union _LARGE_INTEGER v38; // [rsp+70h] [rbp-49h] BYREF
  __int64 v39; // [rsp+78h] [rbp-41h] BYREF
  __int64 v40; // [rsp+80h] [rbp-39h] BYREF
  union _LARGE_INTEGER v41; // [rsp+88h] [rbp-31h] BYREF
  union _LARGE_INTEGER v42; // [rsp+90h] [rbp-29h] BYREF
  unsigned int *v43; // [rsp+98h] [rbp-21h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp-19h]
  unsigned __int8 v45; // [rsp+A4h] [rbp-15h]
  __int64 v46; // [rsp+A8h] [rbp-11h]
  VIDMM_GLOBAL *v47; // [rsp+B0h] [rbp-9h]
  union _LARGE_INTEGER v48; // [rsp+100h] [rbp+47h] BYREF
  unsigned int v49; // [rsp+108h] [rbp+4Fh]

  v49 = a2;
  v9 = *((_QWORD *)this + 464);
  v11 = a9;
  v40 = 0LL;
  v39 = 0LL;
  v48.QuadPart = 0LL;
  v13 = a6;
  v47 = this;
  v14 = a4;
  v45 = a9;
  v46 = *(_QWORD *)(v9 + 8LL * a4);
  memset(a6, 186, 0x1000uLL);
  memset(a8, 205, 0x1000uLL);
  v15 = v11;
  v16 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v14);
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, struct _MDL *, _QWORD, __int64 *, union _LARGE_INTEGER *))(*(_QWORD *)v16 + 184LL))(
          v16,
          1LL,
          a5,
          v11,
          &v40,
          &v41);
  if ( v17 >= 0 )
  {
    v18 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v14);
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, struct _MDL *, _QWORD, __int64 *, union _LARGE_INTEGER *))(*(_QWORD *)v18 + 184LL))(
            v18,
            1LL,
            a7,
            v15,
            &v39,
            &v48);
    if ( v17 >= 0 )
    {
      v38 = a3;
      v19 = 0;
      v20 = (char *)v13 - (char *)a8;
      do
      {
        v21 = a8;
        v22 = 0LL;
        while ( 1 )
        {
          VIDMM_GLOBAL::FlushPagingBuffer(this, 1, 0LL, 0LL);
          v23 = *((_QWORD *)this + 464);
          v42 = v41;
          VIDMM_GLOBAL::MemoryTransferInternal(
            this,
            0,
            0LL,
            0x1000uLL,
            0LL,
            *(struct VIDMM_SEGMENT **)(v23 + 8 * v14),
            &v42,
            0LL,
            *(struct VIDMM_SEGMENT **)(v23 + 8LL * v49),
            &v38,
            0LL,
            v36,
            0);
          v24 = *((_QWORD *)this + 464);
          v42 = v48;
          VIDMM_GLOBAL::MemoryTransferInternal(
            this,
            0,
            0LL,
            0x1000uLL,
            0LL,
            *(struct VIDMM_SEGMENT **)(v24 + 8LL * v49),
            &v38,
            0LL,
            *(struct VIDMM_SEGMENT **)(v24 + 8 * v14),
            &v42,
            0LL,
            v37,
            0);
          v44 = v19 + 868941431;
          v43 = &a6[v22];
          VIDMM_GLOBAL::FlushPagingBuffer(this, 0, (void (*)(void *))VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource, &v43);
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
          v25 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v14);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 72LL))(v25);
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
          if ( *(unsigned int *)((char *)v21 + v20) != *v21 )
            break;
          v22 = (unsigned int)(v22 + 1);
          ++v21;
          if ( (unsigned int)v22 >= 0x400 )
            goto LABEL_12;
        }
        v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        v31 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v14);
        if ( (*(_DWORD *)(v31 + 56) & 0x1000) != 0 )
          v32 = 0;
        else
          v32 = *(_DWORD *)(v31 + 16) + 1;
        *(_QWORD *)(v30 + 24) = v32;
        WdLogEvent5_WdAssertion(v30);
        v17 = -1073741823;
LABEL_12:
        ++v19;
      }
      while ( v19 < 0xA );
    }
  }
  if ( v39 )
  {
    v33 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v14);
    (*(void (__fastcall **)(__int64, __int64, struct _MDL *))(*(_QWORD *)v33 + 192LL))(v33, 1LL, a7);
  }
  if ( v40 )
  {
    v34 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v14);
    (*(void (__fastcall **)(__int64, __int64, struct _MDL *))(*(_QWORD *)v34 + 192LL))(v34, 1LL, a5);
  }
  return (unsigned int)v17;
}
