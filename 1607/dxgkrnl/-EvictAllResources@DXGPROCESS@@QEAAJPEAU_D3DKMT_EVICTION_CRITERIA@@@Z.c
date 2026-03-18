/*
 * XREFs of ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0173790
 * Callers:
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0168520 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C9E4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??1DXGPROCESSDEVICECREATIONLOCK@@QEAA@XZ @ 0x1C001D2CC (--1DXGPROCESSDEVICECREATIONLOCK@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00223F0 (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 */

__int64 __fastcall DXGPROCESS::EvictAllResources(DXGPROCESS *this, struct _D3DKMT_EVICTION_CRITERIA *a2)
{
  char *v4; // rbx
  BOOL v5; // eax
  unsigned int v6; // ebx
  _QWORD *v7; // r15
  bool v8; // si
  struct DXGDEVICE *Current; // rax
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 i; // rsi
  struct _VIDMM_MULTI_ALLOC *v13; // r8
  _QWORD *v14; // rdi
  __int64 j; // rsi
  struct _VIDMM_MULTI_ALLOC *v16; // r8
  __int64 k; // rsi
  struct _VIDMM_MULTI_ALLOC *v18; // r8
  __int64 m; // rdi
  __int64 n; // rsi
  struct _VIDMM_MULTI_ALLOC *v21; // r8
  __int64 v22; // rdi
  char *v24; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v25; // [rsp+38h] [rbp-C8h]
  _QWORD v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v28[24]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v30[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v31[144]; // [rsp+B0h] [rbp-50h] BYREF
  bool v32; // [rsp+150h] [rbp+50h]
  DXGPROCESS *v33; // [rsp+160h] [rbp+60h] BYREF

  v33 = this;
  v4 = (char *)this + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v5 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails);
  v6 = 0;
  v7 = (_QWORD *)*((_QWORD *)this + 30);
  v8 = v5;
  v25 = v7;
  v32 = v5;
  v24 = (char *)this + 240;
  Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v24);
  while ( 1 )
  {
    v22 = (__int64)Current;
    if ( !Current )
      break;
    v10 = *((_QWORD *)Current + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26, Current);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, v22, 2, v11, 0);
    if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31) < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
      if ( v26[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
      v6 = -1073741130;
      break;
    }
    if ( v8 )
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, (struct _KTHREAD **)this);
      for ( i = *(_QWORD *)(v22 + 48); i; i = *(_QWORD *)(i + 64) )
      {
        v13 = *(struct _VIDMM_MULTI_ALLOC **)(i + 24);
        if ( v13 )
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(v10 + 400),
            *(struct VIDMM_GLOBAL **)(v10 + 408),
            v13,
            0LL,
            a2);
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v29,
        (struct _KTHREAD **)(v22 + 160));
      v14 = *(_QWORD **)(v22 + 56);
      while ( v14 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(v14 + 10));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
        for ( j = v14[3]; j; j = *(_QWORD *)(j + 64) )
        {
          v16 = *(struct _VIDMM_MULTI_ALLOC **)(j + 24);
          if ( v16 )
            VIDMM_EXPORT::VidMmEvictAllocation(
              *(VIDMM_EXPORT **)(v10 + 400),
              *(struct VIDMM_GLOBAL **)(v10 + 408),
              v16,
              0LL,
              a2);
        }
        v14 = (_QWORD *)v14[5];
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, (struct _KTHREAD **)this);
      for ( k = *(_QWORD *)(v22 + 48); k; k = *(_QWORD *)(k + 64) )
      {
        v18 = *(struct _VIDMM_MULTI_ALLOC **)(k + 24);
        if ( v18 )
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(v10 + 400),
            *(struct VIDMM_GLOBAL **)(v10 + 408),
            v18,
            0LL,
            a2);
      }
      for ( m = *(_QWORD *)(v22 + 56); m; m = *(_QWORD *)(m + 40) )
      {
        for ( n = *(_QWORD *)(m + 24); n; n = *(_QWORD *)(n + 64) )
        {
          v21 = *(struct _VIDMM_MULTI_ALLOC **)(n + 24);
          if ( v21 )
            VIDMM_EXPORT::VidMmEvictAllocation(
              *(VIDMM_EXPORT **)(v10 + 400),
              *(struct VIDMM_GLOBAL **)(v10 + 408),
              v21,
              0LL,
              a2);
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
    if ( v26[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
    v7 = (_QWORD *)*v7;
    v25 = v7;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v24);
    v8 = v32;
  }
  DXGPROCESSDEVICECREATIONLOCK::~DXGPROCESSDEVICECREATIONLOCK((DXGPROCESSDEVICECREATIONLOCK *)&v33);
  return v6;
}
