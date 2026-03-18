/*
 * XREFs of ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004F224
 * Callers:
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004F4A0 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0059238 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000ED20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0063528 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  VIDMM_PROCESS *v4; // r13
  unsigned int v5; // r8d
  struct _KTHREAD **VirtualAddressAllocator; // rbp
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 **v9; // r14
  __int64 *i; // rsi
  unsigned int v11; // r8d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 j; // rsi
  CVirtualAddressAllocator *v17; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-468h] BYREF
  struct _KTHREAD **v19; // [rsp+28h] [rbp-460h]
  int v20; // [rsp+30h] [rbp-458h]
  unsigned __int64 v21[64]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v22[64]; // [rsp+240h] [rbp-248h] BYREF

  *((_BYTE *)a2 + 26) = 0;
  v4 = *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL);
  if ( (*((_DWORD *)v4 + 12) & 2) != 0 )
    v5 = *(_DWORD *)(**(_QWORD **)a2 + 76LL) & 0x3F;
  else
    v5 = -1;
  VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                  *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL),
                                                  *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                                                  v5);
  if ( VirtualAddressAllocator )
  {
    v7 = *((_DWORD *)this + 1604);
    if ( v7 )
    {
      memset(v22, 0xFFu, 8LL * v7);
      memset(v21, 0, 8LL * v7);
    }
    v8 = 0;
    v19 = VirtualAddressAllocator + 5;
    v20 = 0;
    if ( VirtualAddressAllocator[6] != KeGetCurrentThread() )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(VirtualAddressAllocator + 5));
      v20 = 2;
    }
    v9 = (__int64 **)((char *)a2 + 128);
    for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
    {
      if ( ((*((_DWORD *)i + 10) | (*((_DWORD *)i + 10) >> 1)) & 0x400) != 0 )
      {
        CVirtualAddressAllocator::UncommitVirtualAddressRange(
          (CVirtualAddressAllocator *)VirtualAddressAllocator,
          (struct VIDMM_MAPPED_VA_RANGE *)(i - 3),
          0LL,
          0);
        v11 = *((_DWORD *)i + 10);
        v12 = i[9];
        v13 = i[10];
        v14 = (v11 >> 4) & 0x3F;
        if ( v22[v14] < v12 )
          v12 = v22[v14];
        v15 = v21[v14];
        v22[v14] = v12;
        if ( v15 > v13 )
          v13 = v15;
        v21[v14] = v13;
        v8 |= 1 << ((v11 >> 4) & 0x3F);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    for ( j = 0LL; v8; v8 >>= 1 )
    {
      if ( (v8 & 1) != 0 )
      {
        v17 = VIDMM_PROCESS::GetVirtualAddressAllocator(v4, *(_DWORD *)(*((_QWORD *)this + 3) + 184LL), j);
        CVirtualAddressAllocator::FlushGpuVaTlb(v17, j, v22[j], v21[j]);
      }
      j = (unsigned int)(j + 1);
    }
  }
}
