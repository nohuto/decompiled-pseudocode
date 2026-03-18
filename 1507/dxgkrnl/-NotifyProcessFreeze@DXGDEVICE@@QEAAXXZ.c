/*
 * XREFs of ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C0079E60
 * Callers:
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00AACE0 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C000239C (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C007B38C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z @ 0x1C0082850 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z.c)
 */

void __fastcall DXGDEVICE::NotifyProcessFreeze(DXGDEVICE *this)
{
  __int64 v2; // rax
  __int64 v3; // r9
  int *v4; // rdi
  int *i; // rbx
  int *j; // rbx
  __int64 v7; // [rsp+38h] [rbp-19h] BYREF
  char v8; // [rsp+40h] [rbp-11h]
  _QWORD v9[2]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v10[80]; // [rsp+58h] [rbp+7h] BYREF

  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9, this);
  v2 = *((_QWORD *)this + 2);
  v8 = 0;
  v7 = *(_QWORD *)(v2 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v7);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v10, (__int64)this, 0, v3, 0);
  if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v10) >= 0 )
  {
    v4 = (int *)((char *)this + 288);
    for ( i = (int *)*((_QWORD *)this + 36); i != v4 && i; i = *(int **)i )
    {
      DXGADAPTER::NotifyContextCreation(
        *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL),
        (struct DXGCONTEXT *)i,
        0,
        i[80]);
      *((_BYTE *)i + 349) = 1;
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v10);
    DXGDEVICE::FlushScheduler(this, 1LL);
    for ( j = *(int **)v4; j != v4 && j; j = *(int **)j )
    {
      if ( *((_QWORD *)j + 26) )
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)j + 2) + 16LL) + 400LL) + 8LL) + 448LL))();
    }
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v10);
  if ( v8 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v7);
  if ( v9[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9);
}
