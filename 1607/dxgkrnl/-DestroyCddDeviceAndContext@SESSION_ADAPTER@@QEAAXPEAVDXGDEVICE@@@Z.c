/*
 * XREFs of ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C007C294
 * Callers:
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C007C210 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0180738 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001388 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C00013C0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096C5C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
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
  _QWORD v18[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v20[24]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v21[32]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v22[96]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v23[96]; // [rsp+F8h] [rbp-10h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+158h] [rbp+50h] BYREF
  char v25; // [rsp+188h] [rbp+80h]

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v25 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v9 = *(_QWORD *)(v2 + 18592);
  if ( v9 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9 + 152, 0LL);
    *(_QWORD *)(v9 + 160) = KeGetCurrentThread();
    v10 = (struct DXGDEVICE *)*((_QWORD *)this + 9);
    if ( v10 && v10 == a2 )
    {
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18584LL));
      for ( i = (_QWORD *)*((_QWORD *)this + 12); i != (_QWORD *)((char *)this + 96); i = (_QWORD *)*i )
      {
        memset(i + 7, 0, 0x200uLL);
        i[71] = 0LL;
      }
      v5 = (volatile signed __int64 *)*((_QWORD *)this + 10);
      *((_QWORD *)this + 10) = 0LL;
      v6 = v5;
      v3 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0LL;
      v4 = *((unsigned int *)this + 17);
    }
    *(_QWORD *)(v9 + 160) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 152, 0LL);
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
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v18,
            (struct DXGDEVICE *)v16);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v20,
            *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v22, v16, 2, v17, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v22);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 176LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v16, (struct DXGCONTEXT *)v15, (struct COREDEVICEACCESS *)v22);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v22);
          if ( v20[16] )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
          if ( v18[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
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
        (DXGADAPTERSTOPRESETLOCKSHARED *)v21,
        *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, v12, 2, v13, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v23);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v12, (struct DXGCONTEXT *)v6, (struct COREDEVICEACCESS *)v23);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
      if ( v21[16] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
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
