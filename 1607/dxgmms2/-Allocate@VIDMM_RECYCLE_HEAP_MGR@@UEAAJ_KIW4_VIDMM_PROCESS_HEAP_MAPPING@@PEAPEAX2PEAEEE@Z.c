/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C005FF40
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010388 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005F590 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C006096C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Allocate(
        VIDMM_RECYCLE_HEAP_MGR *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        void **a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned __int8 a8,
        int a9)
{
  DXGFASTMUTEX *v10; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // ebx
  VIDMM_RECYCLE_HEAP *v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  DXGFASTMUTEX *v25; // [rsp+40h] [rbp-48h] BYREF
  char v26; // [rsp+48h] [rbp-40h]
  char v27; // [rsp+90h] [rbp+8h]

  v10 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 896);
  v26 = 0;
  v25 = v10;
  if ( !v10 )
  {
    v19 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v19 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v19);
    if ( v26 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20, v22, v23);
      v24[5] = &v25;
      v24[3] = 275LL;
      v24[4] = 4LL;
      v24[6] = 0LL;
      v24[7] = 0LL;
      WdLogEvent5_WdCriticalError(v24);
    }
    v10 = v25;
  }
  DXGFASTMUTEX::Acquire(v10);
  LOBYTE(v15) = 0;
  v27 = 0;
  v16 = a9;
  v26 = 1;
  while ( 1 )
  {
    if ( (_BYTE)a9 )
    {
      v15 = a4;
      switch ( a4 )
      {
        case 1u:
          v17 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 448);
          break;
        case 2u:
          v17 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 520);
          break;
        case 3u:
          v17 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 592);
          break;
        case 4u:
          v17 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 664);
          break;
        case 5u:
          v17 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 736);
          break;
        case 6u:
          v17 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 808);
          break;
        default:
          goto LABEL_7;
      }
    }
    else
    {
      switch ( a4 )
      {
        case 1u:
          v17 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 16);
          break;
        case 2u:
          v17 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 88);
          break;
        case 3u:
          v17 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 160);
          break;
        case 4u:
          v17 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 232);
          break;
        case 5u:
          v17 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 304);
          break;
        case 6u:
          v17 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 376);
          break;
        default:
          goto LABEL_8;
      }
    }
    v16 = VIDMM_RECYCLE_HEAP::Allocate(v17, a2, a3, a5, a6, a7, a8);
LABEL_7:
    LOBYTE(v15) = v27;
LABEL_8:
    if ( v16 >= 0 || (_BYTE)v15 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(a1, 0, 0);
    LOBYTE(v15) = 1;
    v27 = 1;
  }
  if ( v26 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v25, v15, v13, v14);
  return (unsigned int)v16;
}
