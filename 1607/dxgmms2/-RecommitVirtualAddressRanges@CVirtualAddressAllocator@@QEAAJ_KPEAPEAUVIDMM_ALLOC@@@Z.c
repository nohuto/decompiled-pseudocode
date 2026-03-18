/*
 * XREFs of ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006A5FC
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0048A50 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C006A2E4 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0012BAC (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0048A50 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005D8CC (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::RecommitVirtualAddressRanges(
        struct _KTHREAD **this,
        __int64 a2,
        struct VIDMM_ALLOC **a3)
{
  CVirtualAddressAllocator *i; // rsi
  unsigned int v5; // edi
  _QWORD *v6; // r13
  _QWORD *v7; // r14
  struct _MDL *FullMDL; // r9
  int v9; // r15d
  int v10; // ecx
  __int64 VidMmGlobalAllocFromOwner; // rax
  struct _VIDMM_GLOBAL_ALLOC *v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  _QWORD *v20; // rax
  char v21; // [rsp+90h] [rbp+8h]
  __int64 v22; // [rsp+98h] [rbp+10h]
  __int64 v24; // [rsp+A8h] [rbp+20h]

  v22 = a2;
  v21 = 0;
  if ( this[6] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 5));
    a2 = v22;
    v21 = 1;
  }
  for ( i = this[1]; ; i = *(CVirtualAddressAllocator **)i )
  {
    if ( i == (CVirtualAddressAllocator *)(this + 1) )
      goto LABEL_18;
    v5 = 0;
    if ( *((_DWORD *)this[8] + 1604) )
      break;
LABEL_13:
    ;
  }
  while ( 1 )
  {
    if ( _bittest64(&a2, v5) )
    {
      v6 = (_QWORD *)((char *)i + 16 * v5 + 56);
      v7 = (_QWORD *)*v6;
      if ( (_QWORD *)*v6 != v6 )
        break;
    }
LABEL_12:
    if ( ++v5 >= *((_DWORD *)this[8] + 1604) )
      goto LABEL_13;
  }
  while ( 1 )
  {
    FullMDL = 0LL;
    v24 = 0LL;
    v9 = 0;
    v10 = (int)(*((_DWORD *)v7 + 14) << 28) >> 28;
    if ( v10 != 1 )
    {
      if ( v10 == 2 )
      {
        FullMDL = *(struct _MDL **)v7[6];
        goto LABEL_16;
      }
      if ( v10 <= 2 )
        goto LABEL_10;
      if ( v10 > 5 )
        break;
    }
    VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v10, v7[6]);
    v12 = (struct _VIDMM_GLOBAL_ALLOC *)VidMmGlobalAllocFromOwner;
    if ( *(_DWORD *)(VidMmGlobalAllocFromOwner + 128) != (_DWORD)FullMDL )
    {
      v13 = *(_QWORD *)(VidMmGlobalAllocFromOwner + 136);
      v14 = *(_DWORD *)(v13 + 56);
      if ( (v14 & 0x1001) != 0 )
      {
        FullMDL = VidMmGetFullMDL(v12, 0LL);
      }
      else
      {
        if ( (v14 & 0x1000) == 0 )
          v9 = *(_DWORD *)(v13 + 16) + 1;
        v24 = *((_QWORD *)v12 + 18);
      }
      goto LABEL_16;
    }
LABEL_10:
    v7 = (_QWORD *)*v7;
    if ( v7 == v6 )
    {
      a2 = v22;
      goto LABEL_12;
    }
  }
  if ( v10 != 6 )
    goto LABEL_10;
  v9 = -2;
LABEL_16:
  v15 = CVirtualAddressAllocator::CommitVirtualAddressRange(
          (CVirtualAddressAllocator *)this,
          (struct VIDMM_MAPPED_VA_RANGE *)(v7 - 1),
          v5,
          v9,
          v7[8] + v24,
          FullMDL,
          0,
          a3);
  v18 = v15;
  if ( v15 >= 0 )
    goto LABEL_10;
  v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16);
  v20[3] = v18;
  v20[4] = v7[11];
  v20[5] = v7[12];
  v20[6] = v5;
  WdLogEvent5_WdAssertion(v20);
LABEL_18:
  if ( v21 )
  {
    this[6] = 0LL;
    ExReleasePushLockExclusiveEx(this + 5, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
