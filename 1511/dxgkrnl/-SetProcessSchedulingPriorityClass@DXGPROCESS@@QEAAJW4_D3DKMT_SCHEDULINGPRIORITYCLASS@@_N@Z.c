/*
 * XREFs of ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C014DFF0
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00B1F90 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C00040A8 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C1CC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     VidSchSetPriorityClassProcessX @ 0x1C00B9E84 (VidSchSetPriorityClassProcessX.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityClass(
        struct _KTHREAD ***this,
        unsigned int a2,
        unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  struct _KTHREAD **v8; // r14
  struct DXGADAPTER *v9; // rbx
  __int64 v10; // r8
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v12; // rsi
  char *v13; // [rsp+20h] [rbp-60h] BYREF
  struct _KTHREAD **v14; // [rsp+28h] [rbp-58h]
  _BYTE v15[16]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v16[64]; // [rsp+40h] [rbp-40h] BYREF

  if ( *this[11] != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 1913LL;
    WdLogEvent5_WdAssertion(v6);
  }
  result = VidSchSetPriorityClassProcessX((__int64)this, a2, a3);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 60) = a2;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this + 18, 0LL);
    this[19] = (struct _KTHREAD **)KeGetCurrentThread();
    v8 = this[31];
    v13 = (char *)(this + 31);
    while ( 1 )
    {
      v14 = v8;
      Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v13);
      v12 = Current;
      if ( !Current )
        break;
      v9 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v15, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, v9, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16) >= 0 )
      {
        LOBYTE(v10) = a3;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 400LL) + 8LL)
                                                        + 160LL))(
          *((_QWORD *)v12 + 68),
          *((unsigned int *)this + 79),
          v10);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v15);
        v8 = v14;
      }
      else
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v15);
      }
      v8 = (struct _KTHREAD **)*v8;
    }
    this[19] = 0LL;
    ExReleasePushLockExclusiveEx(this + 18, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
