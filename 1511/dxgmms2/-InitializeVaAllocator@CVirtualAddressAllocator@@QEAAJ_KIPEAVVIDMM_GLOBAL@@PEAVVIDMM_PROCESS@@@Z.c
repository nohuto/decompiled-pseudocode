/*
 * XREFs of ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0041950
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0054758 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0069FD0 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0012DEC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     Template_ppp @ 0x1C001D53C (Template_ppp.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0041598 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0053758 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0053828 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C005EFE4 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::InitializeVaAllocator(
        CVirtualAddressAllocator *this,
        unsigned __int64 a2,
        unsigned int a3,
        struct VIDMM_GLOBAL *a4,
        struct VIDMM_PROCESS *a5)
{
  __int64 *v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v10; // r15
  VIDMM_DEVICE *v11; // rax
  __int64 v12; // rcx
  VIDMM_DEVICE *v13; // rax
  unsigned __int8 v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct VIDMM_VAD *Vad; // r15
  unsigned int v20; // r12d
  __int64 v21; // r14
  SIZE_T v22; // rax
  PVOID v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  char *v26; // rax
  __int64 v27; // r9
  __int64 v28; // rcx
  int v29; // eax
  __int64 v31; // rax
  __int64 v32; // rax

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
      v13 = VIDMM_DEVICE::VIDMM_DEVICE(v11, a4, 0LL);
    else
      v13 = 0LL;
    *((_QWORD *)this + 10) = v13;
    if ( !v13 || (int)VIDMM_DEVICE::Init(v13, a5) < 0 )
      goto LABEL_28;
    if ( dword_1C002F3D8 == 2 )
    {
      if ( (*((_BYTE *)a4 + 40608) & 0x20) != 0 )
        goto LABEL_8;
    }
    else if ( !dword_1C002F3D8 )
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
  *((_QWORD *)this + 10) = *((_QWORD *)a4 + 5008);
  *((_DWORD *)this + 30) = *((_DWORD *)this + 30) & 0xFFFFFFFA | 4;
LABEL_10:
  *((_DWORD *)this + 30) ^= ((unsigned __int8)*((_DWORD *)this + 30) ^ (unsigned __int8)(2 * *((_DWORD *)this + 30))) & 2;
  Vad = CVirtualAddressAllocator::AllocateVad(v10, a2, *((_DWORD *)a4 + 1604));
  if ( !Vad )
  {
    v32 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v32 + 24) = 2027LL;
    WdLogEvent5_WdAssertion(v32);
    return 3221225495LL;
  }
  v20 = *((_DWORD *)a4 + 1604);
  v21 = v20;
  v22 = 32LL * v20;
  if ( !is_mul_ok(v20, 0x20uLL) )
    v22 = -1LL;
  v23 = operator new(v22, 0x4B677844u, v17, PagedPool);
  *((_QWORD *)this + 12) = v23;
  if ( !v23 )
  {
LABEL_28:
    v31 = WdLogNewEntry5_WdWarning(v12);
    WdLogEvent5_WdWarning(v31);
    return 3221225495LL;
  }
  CVirtualAddressAllocator::InsertVadToFreeList(this, Vad);
  v25 = *v5;
  v26 = (char *)Vad + 40;
  *((_QWORD *)Vad + 5) = *v5;
  *((_QWORD *)Vad + 6) = v5;
  if ( *(__int64 **)(v25 + 8) != v5 )
    __fastfail(3u);
  *(_QWORD *)(v25 + 8) = v26;
  *v5 = (__int64)v26;
  if ( v20 )
  {
    v27 = 0LL;
    do
    {
      v24 = v27 + *((_QWORD *)a4 + 5006);
      if ( (*(_BYTE *)(v24 + 420) & 1) != 0 )
      {
        *(_DWORD *)(v6 + *((_QWORD *)this + 12) + 16) = *(_DWORD *)(v24 + 48LL * *(unsigned int *)(v24 + 412) + 72);
        *(_DWORD *)(v6 + *((_QWORD *)this + 12) + 20) = *(_DWORD *)(v24 + 48LL * *(unsigned int *)(v24 + 412) + 80);
        v28 = *((_QWORD *)this + 12);
        if ( (*((_DWORD *)a5 + 12) & 2) != 0 )
        {
          *(_DWORD *)(v6 + v28 + 28) = *(_DWORD *)(v24 + 28);
          v29 = *(_DWORD *)(v24 + 44);
        }
        else
        {
          *(_DWORD *)(v6 + v28 + 28) = *(_DWORD *)(v24 + 20);
          v29 = *(_DWORD *)(v24 + 36);
        }
        *(_DWORD *)(v6 + *((_QWORD *)this + 12) + 24) = v29;
      }
      v27 += 456LL;
      v6 += 32LL;
      --v21;
    }
    while ( v21 );
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    Template_ppp(
      *((_QWORD *)this + 8),
      &CreateGpuVirtualAddressAllocator,
      v24,
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 64LL),
      *(_QWORD *)(*((_QWORD *)this + 8) + 24LL));
  return 0LL;
}
