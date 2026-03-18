/*
 * XREFs of ?ProcessStatusChange@DXGPROCESS@@AEAAXXZ @ 0x1C0067ED8
 * Callers:
 *     ?DxgkpProcessStatusChangeWork@@YAXPEAX@Z @ 0x1C00C3430 (-DxgkpProcessStatusChangeWork@@YAXPEAX@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C1CC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGPROCESS::ProcessStatusChange(DXGPROCESS *this)
{
  char *v2; // rdi
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 Current; // rax
  struct DXGDEVICE *v6; // rbx
  char *v7; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *i; // [rsp+38h] [rbp-51h]
  _QWORD v9[2]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v10[80]; // [rsp+50h] [rbp-39h] BYREF
  _KAPC_STATE ApcState; // [rsp+A0h] [rbp+17h] BYREF

  KeStackAttachProcess(*((PRKPROCESS *)this + 7), &ApcState);
  v2 = (char *)this + 144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_QWORD *)this + 19) = KeGetCurrentThread();
  _InterlockedExchange((volatile __int32 *)this + 80, 0);
  v7 = (char *)this + 248;
  for ( i = (_QWORD *)*((_QWORD *)this + 31); ; i = (_QWORD *)*i )
  {
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v7);
    v6 = (struct DXGDEVICE *)Current;
    if ( !Current )
      break;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL)) )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9, v6);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v10, (__int64)v6, 2, v3, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v10) >= 0 )
      {
        LOBYTE(v4) = 1;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 400LL) + 8LL)
                                                        + 160LL))(
          *((_QWORD *)v6 + 68),
          *(unsigned int *)(*((_QWORD *)v6 + 5) + 316LL),
          v4);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 424LL) + 8LL) + 1000LL))(*(_QWORD *)(*((_QWORD *)v6 + 2) + 432LL));
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v10);
      if ( v9[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9);
    }
  }
  KeUnstackDetachProcess(&ApcState);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
