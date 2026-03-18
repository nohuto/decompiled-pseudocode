/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011F94 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0012004 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0012028 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005BCFC (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Rotate(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_GLOBAL *a2,
        VIDMM_RECYCLE_MULTIRANGE *a3,
        __int64 a4,
        struct _MDL *a5,
        unsigned __int64 a6,
        int (*a7)(struct _MDL *, struct _MDL *, void *),
        void *a8,
        int a9)
{
  enum _MM_ROTATE_DIRECTION v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _VIDMM_GLOBAL_ALLOC *v23; // [rsp+40h] [rbp-28h]
  _BYTE v24[24]; // [rsp+50h] [rbp-18h] BYREF

  v10 = (int)a4;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), (__int64)a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24, v12, v13, v14);
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerEnter, v16, 8005);
  v19 = VIDMM_RECYCLE_MULTIRANGE::Rotate(a3, a2, v10, a5, a6, a7, a8, a9, v23);
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v18, &EventProfilerExit, v20, 8005);
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24, v17, v20, v21);
  return v19;
}
