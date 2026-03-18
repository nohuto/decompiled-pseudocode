/*
 * XREFs of ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C005B580
 * Callers:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C000FEE8 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C000F628 (--_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FA58 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000FC84 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0045578 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C005D0EC (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C0090BD0 (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::~VIDMM_DEVICE(__int64 **this)
{
  unsigned int i; // ebx
  __int64 *v3; // rdx
  __int64 *v4; // rdx
  __int64 *v5; // rdx
  VIDMM_GLOBAL *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *j; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  bool v12; // bl
  __int64 v13; // rbx
  VIDMM_DEVICE **v14; // rdx
  VIDMM_DEVICE **v15; // rcx
  __int64 *v16; // rcx
  unsigned int k; // ebx
  __int64 *v18; // rdx
  __int64 *v19; // rdx
  __int64 *v20; // rdx
  VIDMM_DEVICE_PAGING_QUEUE *v21; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v22; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v23; // rcx
  _BYTE v24[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v25[32]; // [rsp+38h] [rbp-20h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 15); ++i )
  {
    v3 = this[9];
    if ( v3 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)&v3[21 * i]);
    v4 = this[10];
    if ( v4 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)&v4[21 * i]);
    v5 = this[11];
    if ( v5 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)&v5[21 * i]);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, (struct _KTHREAD **)*this + 5190);
  if ( this[22] )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, (struct _LIST_ENTRY *)this + 11);
  v7 = *this + 5195;
  for ( j = (_QWORD *)*v7; j != v7; j = (_QWORD *)*j )
  {
    if ( this == (__int64 **)j[7] )
      j[7] = 0LL;
  }
  KeSetEvent(*(PRKEVENT *)(**this + 152), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  v9 = **this;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v9 + 8) )
  {
    v10 = v9 + 128;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9 + 128, 0LL);
    v11 = v9 + 128;
    *(_QWORD *)(v9 + 136) = KeGetCurrentThread();
    v12 = this == *(__int64 ***)(v9 + 16);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    if ( v12 )
    {
      v13 = **this;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v13 + 48, 0LL);
      *(_QWORD *)(v13 + 56) = KeGetCurrentThread();
      *(_QWORD *)(v13 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v13 + 48, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v25, (struct _KTHREAD **)*this + 5190);
  v14 = (VIDMM_DEVICE **)this[24];
  v15 = (VIDMM_DEVICE **)this[25];
  if ( v14[1] != (VIDMM_DEVICE *)(this + 24) || *v15 != (VIDMM_DEVICE *)(this + 24) )
    __fastfail(3u);
  *v15 = (VIDMM_DEVICE *)v14;
  v14[1] = (VIDMM_DEVICE *)v15;
  DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v25);
  v16 = this[5];
  if ( v16 )
    operator delete[](v16);
  for ( k = 0; k < *((_DWORD *)this + 15); ++k )
  {
    v18 = this[9];
    if ( v18 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)&v18[21 * k]);
    v19 = this[10];
    if ( v19 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)&v19[21 * k]);
    v20 = this[11];
    if ( v20 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)&v20[21 * k]);
  }
  v21 = (VIDMM_DEVICE_PAGING_QUEUE *)this[9];
  if ( v21 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v21);
  this[9] = 0LL;
  v22 = (VIDMM_DEVICE_PAGING_QUEUE *)this[10];
  if ( v22 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v22);
  this[10] = 0LL;
  v23 = (VIDMM_DEVICE_PAGING_QUEUE *)this[11];
  if ( v23 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v23);
  this[11] = 0LL;
  if ( (*((_BYTE *)this + 50) & 1) != 0 )
    VIDMM_PROCESS::CloseAdapter((VIDMM_PROCESS *)this[1], (struct VIDMM_GLOBAL *)*this);
}
