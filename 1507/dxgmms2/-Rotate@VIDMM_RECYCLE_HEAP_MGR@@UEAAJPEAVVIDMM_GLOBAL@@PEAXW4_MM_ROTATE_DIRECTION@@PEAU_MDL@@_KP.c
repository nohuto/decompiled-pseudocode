/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0069620
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DE9C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DED4 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF24 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0069710 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
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
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _VIDMM_GLOBAL_ALLOC *v21; // [rsp+40h] [rbp-28h]
  _BYTE v22[24]; // [rsp+50h] [rbp-18h] BYREF

  v10 = (int)a4;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), (__int64)a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22, v12);
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerEnter, v14, 8005);
  v17 = VIDMM_RECYCLE_MULTIRANGE::Rotate(a3, a2, v10, a5, a6, a7, a8, a9, v21);
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v16, &EventProfilerExit, v18, 8005);
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22, v15, v18, v19);
  return v17;
}
