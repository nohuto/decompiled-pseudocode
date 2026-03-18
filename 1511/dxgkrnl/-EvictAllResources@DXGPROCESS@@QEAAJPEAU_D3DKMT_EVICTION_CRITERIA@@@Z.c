/*
 * XREFs of ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C014D8B0
 * Callers:
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C012A89C (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C1CC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C001BC4C (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 */

__int64 __fastcall DXGPROCESS::EvictAllResources(DXGPROCESS *this, struct _D3DKMT_EVICTION_CRITERIA *a2)
{
  char *v3; // r15
  _QWORD *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r9
  __int64 i; // rbx
  struct _VIDMM_MULTI_ALLOC *v9; // r8
  __int64 j; // rbx
  __int64 k; // rdi
  struct _VIDMM_MULTI_ALLOC *v12; // r8
  struct DXGDEVICE *Current; // rax
  __int64 v14; // rdi
  unsigned int v15; // ebx
  _QWORD v17[2]; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v19[32]; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v20[80]; // [rsp+78h] [rbp-19h] BYREF

  v3 = (char *)this + 144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 31);
  v18[0] = (char *)this + 248;
  while ( 1 )
  {
    v18[1] = v5;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v18);
    v14 = (__int64)Current;
    if ( !Current )
    {
      v15 = 0;
      goto LABEL_21;
    }
    v6 = *((_QWORD *)Current + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17, Current);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v20, v14, 2, v7, 0);
    if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v20) < 0 )
      break;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, this);
    for ( i = *(_QWORD *)(v14 + 48); i; i = *(_QWORD *)(i + 64) )
    {
      v9 = *(struct _VIDMM_MULTI_ALLOC **)(i + 24);
      if ( v9 )
        VIDMM_EXPORT::VidMmEvictAllocation(
          *(VIDMM_EXPORT **)(v6 + 424),
          *(struct VIDMM_GLOBAL **)(v6 + 432),
          v9,
          0LL,
          a2);
    }
    for ( j = *(_QWORD *)(v14 + 56); j; j = *(_QWORD *)(j + 40) )
    {
      for ( k = *(_QWORD *)(j + 24); k; k = *(_QWORD *)(k + 64) )
      {
        v12 = *(struct _VIDMM_MULTI_ALLOC **)(k + 24);
        if ( v12 )
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(v6 + 424),
            *(struct VIDMM_GLOBAL **)(v6 + 432),
            v12,
            0LL,
            a2);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
    if ( v17[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
    v5 = (_QWORD *)*v5;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
  if ( v17[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
  v15 = -1073741130;
LABEL_21:
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v15;
}
