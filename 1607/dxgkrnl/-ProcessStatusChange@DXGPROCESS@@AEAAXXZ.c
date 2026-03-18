/*
 * XREFs of ?ProcessStatusChange@DXGPROCESS@@AEAAXXZ @ 0x1C00A2BDC
 * Callers:
 *     ?DxgkpProcessStatusChangeWork@@YAXPEAX@Z @ 0x1C00D92A0 (-DxgkpProcessStatusChangeWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C9E4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGPROCESS::ProcessStatusChange(DXGPROCESS *this)
{
  char *v2; // rdi
  __int64 Current; // rax
  struct DXGDEVICE *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r8
  _QWORD v7[2]; // [rsp+30h] [rbp-69h] BYREF
  char *v8; // [rsp+40h] [rbp-59h] BYREF
  _QWORD *i; // [rsp+48h] [rbp-51h]
  _BYTE v10[96]; // [rsp+50h] [rbp-49h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B0h] [rbp+17h] BYREF

  KeStackAttachProcess(*((PRKPROCESS *)this + 6), &ApcState);
  v2 = (char *)this + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  _InterlockedExchange((volatile __int32 *)this + 74, 0);
  v8 = (char *)this + 240;
  for ( i = (_QWORD *)*((_QWORD *)this + 30); ; i = (_QWORD *)*i )
  {
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v8);
    v4 = (struct DXGDEVICE *)Current;
    if ( !Current )
      break;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL)) )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v7, v4);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v10, (__int64)v4, 2, v5, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v10) >= 0 )
      {
        LOBYTE(v6) = 1;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 376LL) + 8LL)
                                                        + 160LL))(
          *((_QWORD *)v4 + 71),
          *(unsigned int *)(*((_QWORD *)v4 + 5) + 292LL),
          v6);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 400LL) + 8LL) + 1016LL))(*(_QWORD *)(*((_QWORD *)v4 + 2) + 408LL));
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v10);
      if ( v7[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v7);
    }
  }
  KeUnstackDetachProcess(&ApcState);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
