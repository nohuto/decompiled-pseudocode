/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C005A9B0
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1C0011D80 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011AFC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0011DB8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011F94 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0012028 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A144 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005B670 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C005D324 (--1VIDMM_RECYCLE_HEAP@@QEAA@XZ.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C005D70C (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C005D8C4 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(
        VIDMM_RECYCLE_HEAP_MGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD **v4; // rdx
  char *v6; // rax
  __int64 v7; // rdx
  char **v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  VIDMM_RECYCLE_HEAP_MGR *v16; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v17; // rsi
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  struct _LOOKASIDE_LIST_EX *v20; // rcx
  struct _LOOKASIDE_LIST_EX *v21; // rcx
  void *v22; // rcx
  struct VIDMM_RECYCLE_RANGE *v23; // rbx
  VIDMM_RECYCLE_MULTIRANGE **v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  char *v32; // [rsp+30h] [rbp-30h] BYREF
  char v33; // [rsp+38h] [rbp-28h]
  _BYTE v34[8]; // [rsp+40h] [rbp-20h] BYREF
  DXGPUSHLOCK *v35; // [rsp+48h] [rbp-18h]
  int v36; // [rsp+50h] [rbp-10h]
  int v37; // [rsp+80h] [rbp+20h] BYREF

  v4 = (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
  *(_QWORD *)this = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34, v4, 0LL, a4);
  DXGPUSHLOCK::AcquireExclusive(v35);
  v6 = (char *)this + 704;
  v36 = 2;
  if ( *((_QWORD *)this + 88) )
  {
    v7 = *(_QWORD *)v6;
    v8 = (char **)*((_QWORD *)this + 89);
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || *v8 != v6 )
      __fastfail(3u);
    *v8 = (char *)v7;
    *(_QWORD *)(v7 + 8) = v8;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  v33 = 0;
  v32 = (char *)this + 416;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-416LL )
  {
    v25 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v25 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v25);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v32, v9, v11, v12);
  _InterlockedExchange((volatile __int32 *)this + 172, 1);
  v16 = (VIDMM_RECYCLE_HEAP_MGR *)*((unsigned int *)this + 160);
  if ( (_DWORD)v16 && !KeCancelTimer((PKTIMER)((char *)this + 480)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v32, v26, v27, v28);
    KeWaitForSingleObject(*((PVOID *)this + 87), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v32, v29, v30, v31);
  }
  v17 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 81);
  while ( v17 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 648) )
  {
    v23 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v17 - 104);
    v17 = *(VIDMM_RECYCLE_HEAP_MGR **)v17;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v16, v23);
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v23);
    v16 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v23 + 17);
    if ( v16 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v16, 0);
  }
  v18 = (_QWORD *)((char *)this + 664);
  while ( 1 )
  {
    v19 = (_QWORD *)*v18;
    if ( (_QWORD *)*v18 == v18 )
      break;
    v24 = (VIDMM_RECYCLE_MULTIRANGE **)(v19 - 13);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v16, (struct VIDMM_RECYCLE_RANGE *)(v19 - 13));
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_RANGE *)v24, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v37);
    if ( !v37 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v24[17], 0);
  }
  v20 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 50);
  if ( v20 )
  {
    ExDeleteLookasideListEx(v20);
    operator delete(*((void **)this + 50));
  }
  v21 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 51);
  if ( v21 )
  {
    ExDeleteLookasideListEx(v21);
    operator delete(*((void **)this + 51));
  }
  v22 = (void *)*((_QWORD *)this + 87);
  if ( v22 )
    operator delete(v22);
  if ( v33 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v32, v13, v14, v15);
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), v13, v14, v15);
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 336));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 272));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 208));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 144));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 80));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 16));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
