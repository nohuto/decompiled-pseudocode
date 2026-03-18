/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C00601E0
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1C0010200 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000FCC0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0010270 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010388 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010408 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005E730 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F9EC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C0061750 (--1VIDMM_RECYCLE_HEAP@@QEAA@XZ.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061C04 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0061DC0 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(VIDMM_RECYCLE_HEAP_MGR *this)
{
  struct _KTHREAD **v1; // rdx
  char *v3; // rax
  __int64 v4; // rdx
  char **v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  VIDMM_RECYCLE_HEAP_MGR *v13; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v14; // rsi
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  struct _LOOKASIDE_LIST_EX *v17; // rcx
  struct _LOOKASIDE_LIST_EX *v18; // rcx
  void *v19; // rcx
  struct VIDMM_RECYCLE_RANGE *v20; // rbx
  VIDMM_RECYCLE_MULTIRANGE **v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char *v29; // [rsp+30h] [rbp-30h] BYREF
  char v30; // [rsp+38h] [rbp-28h]
  _BYTE v31[8]; // [rsp+40h] [rbp-20h] BYREF
  DXGPUSHLOCK *v32; // [rsp+48h] [rbp-18h]
  int v33; // [rsp+50h] [rbp-10h]
  int v34; // [rsp+80h] [rbp+20h] BYREF

  v1 = (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
  *(_QWORD *)this = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31, v1, 0);
  DXGPUSHLOCK::AcquireExclusive(v32);
  v3 = (char *)this + 1160;
  v33 = 2;
  if ( *((_QWORD *)this + 145) )
  {
    v4 = *(_QWORD *)v3;
    v5 = (char **)*((_QWORD *)this + 146);
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || *v5 != v3 )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  v30 = 0;
  v29 = (char *)this + 896;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-896LL )
  {
    v22 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v22 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v22);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v29, v6, v8, v9);
  _InterlockedExchange((volatile __int32 *)this + 286, 1);
  v13 = (VIDMM_RECYCLE_HEAP_MGR *)*((unsigned int *)this + 274);
  if ( (_DWORD)v13 && !KeCancelTimer((PKTIMER)((char *)this + 936)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v29, v23, v24, v25);
    KeWaitForSingleObject(*((PVOID *)this + 144), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v29, v26, v27, v28);
  }
  v14 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 138);
  while ( v14 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1104) )
  {
    v20 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v14 - 104);
    v14 = *(VIDMM_RECYCLE_HEAP_MGR **)v14;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v13, v20, v11, v12);
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v20);
    v13 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v20 + 17);
    if ( v13 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v13, 0);
  }
  v15 = (_QWORD *)((char *)this + 1120);
  while ( 1 )
  {
    v16 = (_QWORD *)*v15;
    if ( (_QWORD *)*v15 == v15 )
      break;
    v21 = (VIDMM_RECYCLE_MULTIRANGE **)(v16 - 13);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v13, (struct VIDMM_RECYCLE_RANGE *)(v16 - 13), v11, v12);
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_RANGE *)v21, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v34);
    if ( !v34 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v21[17], 0);
  }
  v17 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 110);
  if ( v17 )
  {
    ExDeleteLookasideListEx(v17);
    operator delete(*((void **)this + 110));
  }
  v18 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 111);
  if ( v18 )
  {
    ExDeleteLookasideListEx(v18);
    operator delete(*((void **)this + 111));
  }
  v19 = (void *)*((_QWORD *)this + 144);
  if ( v19 )
    operator delete(v19);
  if ( v30 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v29, v10, v11, v12);
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 896), v10);
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 808));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 736));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 664));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 592));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 520));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 448));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 376));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 304));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 232));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 160));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 88));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 16));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
