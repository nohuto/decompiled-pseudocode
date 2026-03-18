/*
 * XREFs of ?Lock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@IPEAPEAX@Z @ 0x1C0140888
 * Callers:
 *     DxgkLock2 @ 0x1C0140DB0 (DxgkLock2.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Lock2(PERESOURCE *this, struct DXGALLOCATION *a2, __int64 a3, void **a4)
{
  PERESOURCE v7; // rax
  __int64 v8; // rdi
  KSPIN_LOCK SpinLock; // rsi
  _QWORD *Address; // rbx
  struct _KTHREAD **Current; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[10]);
  v7 = this[2];
  v8 = *((_QWORD *)a2 + 3);
  SpinLock = v7[3].SpinLock;
  Address = v7[3].Address;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v13, Current);
  LODWORD(Address) = (*(__int64 (__fastcall **)(KSPIN_LOCK, __int64, _QWORD, void **))(Address[1] + 792LL))(
                       SpinLock,
                       v8,
                       0LL,
                       a4);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v13);
  return (unsigned int)Address;
}
