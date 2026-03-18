/*
 * XREFs of ?Init@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C005A840
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011AFC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Init(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_PROCESS *a2)
{
  struct _KEVENT *v3; // rax
  __int64 v4; // rcx
  struct _LOOKASIDE_LIST_EX *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  NTSTATUS v8; // edi
  struct _LOOKASIDE_LIST_EX *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9
  struct _LIST_ENTRY **v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v17[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v18; // [rsp+48h] [rbp-20h]
  int v19; // [rsp+50h] [rbp-18h]

  *((_QWORD *)this + 1) = a2;
  v3 = (struct _KEVENT *)operator new(0x18uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 87) = v3;
  if ( !v3 )
  {
    _InterlockedIncrement(&dword_1C002F5A0);
    v15 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v15 + 24) = 8904LL;
LABEL_10:
    WdLogEvent5_WdLowResource(v15);
    return 3221225495LL;
  }
  KeInitializeEvent(v3, NotificationEvent, 0);
  v5 = (struct _LOOKASIDE_LIST_EX *)operator new(0x60uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 50) = v5;
  if ( !v5 )
  {
    _InterlockedIncrement(&dword_1C002F5A0);
    v15 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v15 + 24) = 8918LL;
    goto LABEL_10;
  }
  v8 = ExInitializeLookasideListEx(v5, 0LL, 0LL, PagedPool, 0, 0xA8uLL, 0x32316956u, 0);
  if ( v8 < 0 )
  {
    _InterlockedIncrement(&dword_1C002F5A0);
    v16 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v16 + 24) = 8927LL;
LABEL_14:
    WdLogEvent5_WdLowResource(v16);
    return (unsigned int)v8;
  }
  v9 = (struct _LOOKASIDE_LIST_EX *)operator new(0x60uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 51) = v9;
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1C002F5A0);
    v15 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v15 + 24) = 8936LL;
    goto LABEL_10;
  }
  v8 = ExInitializeLookasideListEx(v9, 0LL, 0LL, PagedPool, 0, 0xE0uLL, 0x32316956u, 0);
  if ( v8 < 0 )
  {
    _InterlockedIncrement(&dword_1C002F5A0);
    v16 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v16 + 24) = 8945LL;
    goto LABEL_14;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
    (DXGAUTOPUSHLOCK *)v17,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock,
    0LL,
    v12);
  DXGPUSHLOCK::AcquireExclusive(v18);
  v13 = (struct _LIST_ENTRY **)qword_1C002F618;
  *((_QWORD *)this + 89) = qword_1C002F618;
  *((_QWORD *)this + 88) = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  v19 = 2;
  if ( *v13 != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
    __fastfail(3u);
  *v13 = (struct _LIST_ENTRY *)((char *)this + 704);
  qword_1C002F618 = (__int64)this + 704;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return 0LL;
}
