/*
 * XREFs of ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00954B4
 * Callers:
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00D25D0 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0004428 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004584 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0008E04 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000D45C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C0095210 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00967F4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C009D5E0 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ @ 0x1C015F0A8 (-TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::NotifyProcessFreeze(struct _KTHREAD **this)
{
  bool v2; // si
  __int64 v3; // r9
  struct _KTHREAD *i; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  DXGDEVICE *v11; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+40h] [rbp-41h]
  _BYTE v13[24]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v14[24]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v15[96]; // [rsp+78h] [rbp-9h] BYREF

  v12 = 0;
  v11 = (DXGDEVICE *)this;
  if ( DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)this[2] + 2)) )
  {
    v2 = (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v11) != 0;
  }
  else
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v11);
    v2 = 1;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v13,
    *((struct DXGADAPTER **)this[2] + 2),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v15, (__int64)this, 0, v3, 0);
  if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v15) >= 0 )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v14, this + 35);
    for ( i = this[39]; i != (struct _KTHREAD *)(this + 39) && i; i = *(struct _KTHREAD **)i )
    {
      DXGADAPTER::NotifyContextCreation(*((DXGADAPTER **)this[2] + 2), i, 0, *((_DWORD *)i + 80));
      *((_BYTE *)i + 349) = 1;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
    if ( v2 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v15);
      if ( DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)this[2] + 2)) )
      {
        DXGDEVICE::FlushDeferredDestruction((DXGDEVICE *)this, 0LL, 0, 1u);
      }
      else
      {
        DXGDEVICE::FlushScheduler(this, 1LL);
        DXGDEVICE::FlushDeferredDestruction((DXGDEVICE *)this, 0LL, 0, 0);
        DXGDEVICE::TrimAllDmaPoolsToMinimum((DXGDEVICE *)this);
      }
      if ( DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)this[2] + 2)) )
      {
        DXGDEVICE::FlushPagingQueues((DXGDEVICE *)this);
        LOBYTE(v9) = 1;
        (*(void (__fastcall **)(struct _KTHREAD *, __int64))(*(_QWORD *)(*((_QWORD *)this[2] + 50) + 8LL) + 1096LL))(
          this[70],
          v9);
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
      *(_QWORD *)(v10 + 24) = this;
      WdLogEvent5_WdWarning(v10);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v15);
  if ( v13[16] )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  if ( v11 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v11);
}
