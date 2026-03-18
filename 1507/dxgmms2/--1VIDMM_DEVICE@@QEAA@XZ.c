/*
 * XREFs of ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C003228C
 * Callers:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0003D58 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0003D28 (--_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000F264 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00317CC (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0032074 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C005895C (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::~VIDMM_DEVICE(VIDMM_DEVICE *this)
{
  unsigned int i; // edi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  VIDMM_GLOBAL *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *j; // rax
  void *v9; // rcx
  unsigned int k; // edi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  VIDMM_DEVICE_PAGING_QUEUE *v14; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v15; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v16; // rcx
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 15); ++i )
  {
    v3 = *((_QWORD *)this + 8);
    if ( v3 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v3 + 152LL * i));
    v4 = *((_QWORD *)this + 9);
    if ( v4 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v4 + 152LL * i));
    v5 = *((_QWORD *)this + 10);
    if ( v5 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v5 + 152LL * i));
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v17,
    (struct DXGPUSHLOCK *const)(*(_QWORD *)this + 41152LL));
  if ( *((_QWORD *)this + 21) )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, (struct _LIST_ENTRY *)((char *)this + 168));
  v7 = (_QWORD *)(*(_QWORD *)this + 41192LL);
  for ( j = (_QWORD *)*v7; j != v7; j = (_QWORD *)*j )
  {
    if ( this == (VIDMM_DEVICE *)j[5] )
      j[5] = 0LL;
  }
  KeSetEvent(*(PRKEVENT *)(**(_QWORD **)this + 120LL), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  v9 = (void *)*((_QWORD *)this + 5);
  if ( v9 )
    operator delete(v9);
  for ( k = 0; k < *((_DWORD *)this + 15); ++k )
  {
    v11 = *((_QWORD *)this + 8);
    if ( v11 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v11 + 152LL * k));
    v12 = *((_QWORD *)this + 9);
    if ( v12 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v12 + 152LL * k));
    v13 = *((_QWORD *)this + 10);
    if ( v13 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v13 + 152LL * k));
  }
  v14 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 8);
  if ( v14 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v14);
  *((_QWORD *)this + 8) = 0LL;
  v15 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 9);
  if ( v15 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v15);
  *((_QWORD *)this + 9) = 0LL;
  v16 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 10);
  if ( v16 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v16);
  *((_QWORD *)this + 10) = 0LL;
  if ( (*((_BYTE *)this + 48) & 1) != 0 )
    VIDMM_PROCESS::CloseAdapter(*((VIDMM_PROCESS **)this + 1), *(struct VIDMM_GLOBAL **)this);
}
