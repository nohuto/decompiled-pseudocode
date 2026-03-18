/*
 * XREFs of ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C009F538
 * Callers:
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C009F4B4 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C015AE3C (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B054 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C000B08C (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0075CEC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::DestroyCddDeviceAndContext(SESSION_ADAPTER *this, struct DXGDEVICE *a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r14
  volatile signed __int64 *v5; // r15
  volatile signed __int64 *v6; // rdi
  __int64 v9; // r13
  struct DXGDEVICE *v10; // rax
  _QWORD *i; // rdi
  __int64 v12; // rbx
  __int64 v13; // r9
  volatile signed __int64 *v14; // r12
  volatile signed __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // r9
  _BYTE v18[16]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v21[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v22[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v23[80]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF
  char v25; // [rsp+150h] [rbp+50h]

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v25 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v9 = *(_QWORD *)(v2 + 18600);
  if ( v9 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9 + 160, 0LL);
    *(_QWORD *)(v9 + 168) = KeGetCurrentThread();
    v10 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
    if ( v10 && v10 == a2 )
    {
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18592LL));
      for ( i = (_QWORD *)*((_QWORD *)this + 10); i != (_QWORD *)((char *)this + 80); i = (_QWORD *)*i )
      {
        memset(i + 7, 0, 0x200uLL);
        i[71] = 0LL;
      }
      v5 = (volatile signed __int64 *)*((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = 0LL;
      v6 = v5;
      v3 = *((_QWORD *)this + 7);
      *((_QWORD *)this + 7) = 0LL;
      v4 = *((unsigned int *)this + 13);
    }
    *(_QWORD *)(v9 + 168) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 160, 0LL);
    KeLeaveCriticalRegion();
    if ( (unsigned int)v4 > 1 )
    {
      v14 = v5;
      do
      {
        v15 = *v14;
        if ( *v14 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v16 = *(_QWORD *)(v15 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v20,
            (struct DXGDEVICE *)v16);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v21,
            *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, v16, 2, v17, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v23);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 160LL) != 4 )
            DXGDEVICE::DestroyContext((PERESOURCE *)v16, (struct DXGCONTEXT *)v15, (struct COREDEVICEACCESS *)v23);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
          if ( v21[8] )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
          if ( v20[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v16 + 16), (struct DXGDEVICE *)v16);
        }
        ++v14;
        --v4;
      }
      while ( v4 );
      operator delete((void *)v5);
    }
    else if ( v6 && _InterlockedExchangeAdd64(v6 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v12 = *((_QWORD *)v6 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v19,
        (struct DXGDEVICE *)v12);
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v18,
        *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v22, v12, 2, v13, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v22);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 160LL) != 4 )
        DXGDEVICE::DestroyContext((PERESOURCE *)v12, (struct DXGCONTEXT *)v6, (struct COREDEVICEACCESS *)v22);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v22);
      if ( v18[8] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
      if ( v19[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v12 + 16), (struct DXGDEVICE *)v12);
    }
    if ( v3 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v3 + 16), (struct DXGDEVICE *)v3);
  }
  CPROCESSATTACHHELPER::Detach(&ApcState);
}
