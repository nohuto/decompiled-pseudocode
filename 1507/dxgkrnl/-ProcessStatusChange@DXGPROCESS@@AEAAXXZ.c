/*
 * XREFs of ?ProcessStatusChange@DXGPROCESS@@AEAAXXZ @ 0x1C00850A0
 * Callers:
 *     ?DxgkpProcessStatusChangeWork@@YAXPEAX@Z @ 0x1C00AF9D0 (-DxgkpProcessStatusChangeWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0009A4C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchSyncPriorityDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_D3DKMT_PROCESS_STATUS_TYPE@@@Z @ 0x1C001D4B0 (-VidSchSyncPriorityDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_D3DKMT_PROCESS_STATUS_TYPE@.c)
 */

void __fastcall DXGPROCESS::ProcessStatusChange(DXGPROCESS *this)
{
  char *v2; // rdi
  __int64 v3; // r9
  __int64 Current; // rax
  struct DXGDEVICE *v5; // rbx
  char *v6; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *i; // [rsp+38h] [rbp-51h]
  _QWORD v8[2]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v9[80]; // [rsp+50h] [rbp-39h] BYREF
  _KAPC_STATE ApcState; // [rsp+A0h] [rbp+17h] BYREF

  KeStackAttachProcess(*((PRKPROCESS *)this + 7), &ApcState);
  v2 = (char *)this + 144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_QWORD *)this + 19) = KeGetCurrentThread();
  _InterlockedExchange((volatile __int32 *)this + 80, 0);
  v6 = (char *)this + 248;
  for ( i = (_QWORD *)*((_QWORD *)this + 31); ; i = (_QWORD *)*i )
  {
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v6);
    v5 = (struct DXGDEVICE *)Current;
    if ( !Current )
      break;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL)) )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v8, v5);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v9, (__int64)v5, 2, v3, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v9) >= 0 )
      {
        VIDSCH_EXPORT::VidSchSyncPriorityDevice(
          *(_QWORD *)(*((_QWORD *)v5 + 2) + 376LL),
          *((_QWORD *)v5 + 68),
          *(_DWORD *)(*((_QWORD *)v5 + 5) + 316LL));
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 400LL) + 8LL) + 992LL))(*(_QWORD *)(*((_QWORD *)v5 + 2) + 408LL));
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v9);
      if ( v8[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v8);
    }
  }
  KeUnstackDetachProcess(&ApcState);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
