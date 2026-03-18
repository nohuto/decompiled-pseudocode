/*
 * XREFs of ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DA6A4
 * Callers:
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C00DA62C (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0156B24 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000A708 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C000A740 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0081AC0 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::DestroyCddDeviceAndContext(SESSION_ADAPTER *this, struct DXGDEVICE *a2)
{
  struct DXGDEVICE *v2; // rax
  _QWORD *i; // rdi
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  char v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  char v20; // [rsp+50h] [rbp-B0h]
  _QWORD v21[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp-98h] BYREF
  PERESOURCE *v23[10]; // [rsp+80h] [rbp-80h] BYREF
  PERESOURCE *v24[10]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF
  char v26; // [rsp+150h] [rbp+50h]

  v2 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
  v26 = 0;
  if ( v2 && v2 == a2 )
  {
    CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18568LL));
    for ( i = (_QWORD *)*((_QWORD *)this + 10); i != (_QWORD *)((char *)this + 80); i = (_QWORD *)*i )
    {
      memset(i + 7, 0, 0x200uLL);
      i[71] = 0LL;
    }
    if ( *((_DWORD *)this + 13) > 1u )
    {
      v11 = 0;
      do
      {
        v12 = *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v11);
        if ( v12 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          {
            v13 = *(_QWORD *)(v12 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v21,
              (struct DXGDEVICE *)v13);
            v14 = *(_QWORD *)(v12 + 16);
            v18 = 0;
            v17 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v17);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, v13, 2, v15, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v24);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 160LL) != 4 )
              DXGDEVICE::DestroyContext((PERESOURCE *)v13, (struct DXGCONTEXT *)v12, v24, v16);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
            if ( v18 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v17);
            if ( v21[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
          }
          *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v11) = 0LL;
        }
        ++v11;
      }
      while ( v11 < *((_DWORD *)this + 13) );
      operator delete(*((void **)this + 8));
    }
    else
    {
      v5 = *((_QWORD *)this + 8);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v6 = *(_QWORD *)(v5 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v22,
          (struct DXGDEVICE *)v6);
        v7 = *(_QWORD *)(v5 + 16);
        v20 = 0;
        v19 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v19);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, v6, 2, v8, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v23);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 160LL) != 4 )
          DXGDEVICE::DestroyContext((PERESOURCE *)v6, (struct DXGCONTEXT *)v5, v23, v9);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
        if ( v20 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v19);
        if ( v22[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v6 + 16), (struct DXGDEVICE *)v6);
      }
    }
    v10 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 8) = 0LL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
    *((_QWORD *)this + 7) = 0LL;
  }
  CPROCESSATTACHHELPER::Detach(&ApcState);
}
