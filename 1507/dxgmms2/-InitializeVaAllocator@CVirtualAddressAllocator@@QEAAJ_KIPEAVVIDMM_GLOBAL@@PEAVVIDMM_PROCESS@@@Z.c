/*
 * XREFs of ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0060960
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0036B28 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C005EA30 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0006100 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     Template_ppp @ 0x1C000FB18 (Template_ppp.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0037C64 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0037D34 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C005C900 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0060BFC (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::InitializeVaAllocator(
        CVirtualAddressAllocator *this,
        __int64 a2,
        unsigned int a3,
        struct VIDMM_GLOBAL *a4,
        struct VIDMM_PROCESS *a5)
{
  __int64 *v5; // rsi
  __int64 v6; // rdi
  __int64 v10; // r15
  VIDMM_DEVICE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  VIDMM_DEVICE *v16; // rax
  __int64 v17; // rax
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct VIDMM_VAD *Vad; // r15
  __int64 v25; // rax
  unsigned int v26; // r12d
  __int64 v27; // r14
  SIZE_T v28; // rax
  PVOID v29; // rax
  __int64 v30; // r8
  __int64 v31; // rcx
  char *v32; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  int v35; // eax

  v5 = (__int64 *)((char *)this + 8);
  *((_QWORD *)this + 9) = a5;
  v6 = 0LL;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 8) = a4;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v10 = a3;
  if ( (*((_DWORD *)a5 + 12) & 2) == 0 )
  {
    v11 = (VIDMM_DEVICE *)operator new(0xF8uLL, 0x4B677844u, PagedPool);
    if ( v11 )
      v16 = VIDMM_DEVICE::VIDMM_DEVICE(v11, a4, 0LL);
    else
      v16 = 0LL;
    *((_QWORD *)this + 10) = v16;
    if ( !v16 || (int)VIDMM_DEVICE::Init(v16, a5, v14, v15) < 0 )
      goto LABEL_6;
    if ( dword_1C00273B0 == 2 )
    {
      if ( (*((_BYTE *)a4 + 40552) & 0x20) != 0 )
      {
LABEL_11:
        v19 = 0;
LABEL_12:
        *((_DWORD *)this + 30) ^= (*((_DWORD *)this + 30) ^ v19) & 1;
        goto LABEL_16;
      }
    }
    else if ( !dword_1C00273B0 )
    {
      goto LABEL_11;
    }
    v19 = 1;
    goto LABEL_12;
  }
  *((_QWORD *)this + 10) = *((_QWORD *)a4 + 5001);
  *((_DWORD *)this + 30) = *((_DWORD *)this + 30) & 0xFFFFFFFA | 4;
LABEL_16:
  *((_DWORD *)this + 30) ^= ((unsigned __int8)*((_DWORD *)this + 30) ^ (unsigned __int8)(2 * *((_DWORD *)this + 30))) & 2;
  Vad = CVirtualAddressAllocator::AllocateVad(v10, a2, *((unsigned int *)a4 + 1604));
  if ( !Vad )
  {
    v25 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
    *(_QWORD *)(v25 + 24) = 2033LL;
    WdLogEvent5_WdAssertion(v25);
    return 3221225495LL;
  }
  v26 = *((_DWORD *)a4 + 1604);
  v27 = v26;
  v28 = 32LL * v26;
  if ( !is_mul_ok(v26, 0x20uLL) )
    v28 = -1LL;
  v29 = operator new(v28, 0x4B677844u, v22, PagedPool);
  *((_QWORD *)this + 12) = v29;
  if ( !v29 )
  {
LABEL_6:
    v17 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    WdLogEvent5_WdWarning(v17);
    return 3221225495LL;
  }
  CVirtualAddressAllocator::InsertVadToFreeList(this, Vad);
  v31 = *v5;
  v32 = (char *)Vad + 40;
  *((_QWORD *)Vad + 5) = *v5;
  *((_QWORD *)Vad + 6) = v5;
  if ( *(__int64 **)(v31 + 8) != v5 )
    __fastfail(3u);
  *(_QWORD *)(v31 + 8) = v32;
  *v5 = (__int64)v32;
  if ( v26 )
  {
    v33 = 0LL;
    do
    {
      v30 = v33 + *((_QWORD *)a4 + 4999);
      if ( (*(_BYTE *)(v30 + 420) & 1) != 0 )
      {
        *(_DWORD *)(v6 + *((_QWORD *)this + 12) + 16) = *(_DWORD *)(v30 + 48LL * *(unsigned int *)(v30 + 412) + 72);
        *(_DWORD *)(v6 + *((_QWORD *)this + 12) + 20) = *(_DWORD *)(v30 + 48LL * *(unsigned int *)(v30 + 412) + 80);
        v34 = *((_QWORD *)this + 12);
        if ( (*((_DWORD *)a5 + 12) & 2) != 0 )
        {
          *(_DWORD *)(v6 + v34 + 28) = *(_DWORD *)(v30 + 28);
          v35 = *(_DWORD *)(v30 + 44);
        }
        else
        {
          *(_DWORD *)(v6 + v34 + 28) = *(_DWORD *)(v30 + 20);
          v35 = *(_DWORD *)(v30 + 36);
        }
        *(_DWORD *)(v6 + *((_QWORD *)this + 12) + 24) = v35;
      }
      v33 += 456LL;
      v6 += 32LL;
      --v27;
    }
    while ( v27 );
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    Template_ppp(
      *((_QWORD *)this + 8),
      &CreateGpuVirtualAddressAllocator,
      v30,
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 64LL),
      *(_QWORD *)(*((_QWORD *)this + 8) + 24LL));
  return 0LL;
}
