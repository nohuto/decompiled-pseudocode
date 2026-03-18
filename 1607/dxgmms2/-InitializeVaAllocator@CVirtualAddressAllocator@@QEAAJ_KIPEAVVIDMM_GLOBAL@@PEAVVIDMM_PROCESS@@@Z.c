/*
 * XREFs of ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0047C90
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C005CD7C (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006FE94 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000F76C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_ppp @ 0x1C001E8B0 (Template_ppp.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C00454A0 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0047914 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C005B124 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C005B250 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::InitializeVaAllocator(
        CVirtualAddressAllocator *this,
        __int64 a2,
        unsigned int a3,
        struct VIDMM_GLOBAL *a4,
        struct VIDMM_PROCESS *a5)
{
  char *v5; // rsi
  __int64 v6; // rdi
  __int64 v10; // r15
  VIDMM_DEVICE *v11; // rax
  __int64 v12; // rcx
  VIDMM_DEVICE *v13; // rax
  unsigned __int8 v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct VIDMM_VAD *Vad; // r15
  unsigned int v19; // r12d
  __int64 v20; // r14
  SIZE_T v21; // rax
  PVOID v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // eax
  __int64 v30; // rax
  __int64 v31; // rax

  v5 = (char *)this + 8;
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
    v11 = (VIDMM_DEVICE *)operator new(0x120uLL, 0x4B677844u, PagedPool);
    if ( v11 )
      v13 = VIDMM_DEVICE::VIDMM_DEVICE(v11, a4, 0LL);
    else
      v13 = 0LL;
    *((_QWORD *)this + 10) = v13;
    if ( !v13 || (int)VIDMM_DEVICE::Init(v13, a5) < 0 )
      goto LABEL_28;
    if ( dword_1C00353E4 == 2 )
    {
      if ( (*((_BYTE *)a4 + 40872) & 0x20) != 0 )
        goto LABEL_8;
    }
    else if ( !dword_1C00353E4 )
    {
LABEL_8:
      v14 = 0;
LABEL_9:
      *((_DWORD *)this + 30) ^= (*((_DWORD *)this + 30) ^ v14) & 1;
      goto LABEL_10;
    }
    v14 = 1;
    goto LABEL_9;
  }
  *((_QWORD *)this + 10) = *((_QWORD *)a4 + 5041);
  *((_DWORD *)this + 30) = *((_DWORD *)this + 30) & 0xFFFFFFFA | 4;
LABEL_10:
  *((_DWORD *)this + 30) ^= ((unsigned __int8)*((_DWORD *)this + 30) ^ (unsigned __int8)(2 * *((_DWORD *)this + 30))) & 2;
  Vad = CVirtualAddressAllocator::AllocateVad(v10, a2, *((_DWORD *)a4 + 1604));
  if ( !Vad )
  {
    v31 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v31 + 24) = 2761LL;
    WdLogEvent5_WdAssertion(v31);
    return 3221225495LL;
  }
  v19 = *((_DWORD *)a4 + 1604);
  v20 = v19;
  v21 = 32LL * v19;
  if ( !is_mul_ok(v19, 0x20uLL) )
    v21 = -1LL;
  v22 = operator new(v21, 0x4B677844u, v17, PagedPool);
  *((_QWORD *)this + 12) = v22;
  if ( !v22 )
  {
LABEL_28:
    v30 = WdLogNewEntry5_WdWarning(v12);
    WdLogEvent5_WdWarning(v30);
    return 3221225495LL;
  }
  CVirtualAddressAllocator::InsertVadToFreeList(this, Vad);
  v24 = *(_QWORD *)v5;
  v25 = (_QWORD *)((char *)Vad + 40);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v25 = v24;
  *((_QWORD *)Vad + 6) = v5;
  *(_QWORD *)(v24 + 8) = v25;
  *(_QWORD *)v5 = v25;
  if ( v19 )
  {
    v26 = 0LL;
    do
    {
      v23 = v26 + *((_QWORD *)a4 + 5017);
      if ( (*(_BYTE *)(v23 + 420) & 1) != 0 )
      {
        *(_DWORD *)(v6 + *((_QWORD *)this + 12) + 16) = *(_DWORD *)(v23 + 48LL * *(unsigned int *)(v23 + 412) + 72);
        *(_DWORD *)(v6 + *((_QWORD *)this + 12) + 20) = *(_DWORD *)(v23 + 48LL * *(unsigned int *)(v23 + 412) + 80);
        v27 = *((_QWORD *)this + 12);
        if ( (*((_DWORD *)a5 + 12) & 2) != 0 )
        {
          *(_DWORD *)(v6 + v27 + 28) = *(_DWORD *)(v23 + 28);
          v28 = *(_DWORD *)(v23 + 44);
        }
        else
        {
          *(_DWORD *)(v6 + v27 + 28) = *(_DWORD *)(v23 + 20);
          v28 = *(_DWORD *)(v23 + 36);
        }
        *(_DWORD *)(v6 + *((_QWORD *)this + 12) + 24) = v28;
      }
      v26 += 456LL;
      v6 += 32LL;
      --v20;
    }
    while ( v20 );
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
    Template_ppp(
      *((_QWORD *)this + 8),
      &CreateGpuVirtualAddressAllocator,
      v23,
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 56LL),
      *(_QWORD *)(*((_QWORD *)this + 8) + 24LL));
  return 0LL;
}
