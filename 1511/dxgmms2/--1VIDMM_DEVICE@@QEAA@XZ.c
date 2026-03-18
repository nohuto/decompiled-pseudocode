/*
 * XREFs of ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0053BA4
 * Callers:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0011ADC (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0010278 (--_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0011520 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     VidSchDestroySyncObject @ 0x1C003ACE0 (VidSchDestroySyncObject.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C003AF80 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0053EE4 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::~VIDMM_DEVICE(VIDMM_DEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *j; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rcx
  __int64 k; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  VIDMM_DEVICE_PAGING_QUEUE *v21; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v22; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v23; // rcx
  __int64 v24; // rcx
  _BYTE v25[40]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 15); i = (unsigned int)(i + 1) )
  {
    v6 = *((_QWORD *)this + 8);
    if ( v6 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v6 + 160 * i));
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v7 + 160 * i));
    v8 = *((_QWORD *)this + 10);
    if ( v8 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v8 + 160 * i));
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v25,
    (struct _KTHREAD **)(*(_QWORD *)this + 41208LL),
    a3,
    a4);
  if ( *((_QWORD *)this + 21) )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v9, (struct _LIST_ENTRY *)((char *)this + 168));
  v10 = (_QWORD *)(*(_QWORD *)this + 41248LL);
  for ( j = (_QWORD *)*v10; j != v10; j = (_QWORD *)*j )
  {
    if ( this == (VIDMM_DEVICE *)j[5] )
      j[5] = 0LL;
  }
  KeSetEvent(*(PRKEVENT *)(**(_QWORD **)this + 120LL), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  v14 = (void *)*((_QWORD *)this + 5);
  if ( v14 )
    operator delete[](v14);
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 15); k = (unsigned int)(k + 1) )
  {
    v16 = *((_QWORD *)this + 8);
    if ( v16 )
    {
      v17 = *(_QWORD *)(160 * k + v16 + 152);
      if ( v17 )
        VidSchDestroySyncObject(v17, v16, v12, v13);
    }
    v18 = *((_QWORD *)this + 9);
    if ( v18 )
    {
      v19 = *(_QWORD *)(160 * k + v18 + 152);
      if ( v19 )
        VidSchDestroySyncObject(v19, v18, v12, v13);
    }
    v20 = *((_QWORD *)this + 10);
    if ( v20 )
    {
      v24 = *(_QWORD *)(160 * k + v20 + 152);
      if ( v24 )
        VidSchDestroySyncObject(v24, v20, v12, v13);
    }
  }
  v21 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 8);
  if ( v21 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v21);
  *((_QWORD *)this + 8) = 0LL;
  v22 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 9);
  if ( v22 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v22);
  *((_QWORD *)this + 9) = 0LL;
  v23 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 10);
  if ( v23 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v23);
  *((_QWORD *)this + 10) = 0LL;
  if ( (*((_BYTE *)this + 48) & 1) != 0 )
    VIDMM_PROCESS::CloseAdapter(*((VIDMM_PROCESS **)this + 1), *(struct VIDMM_GLOBAL **)this);
}
