/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010388 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00103E4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010408 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006805C (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Rotate(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_GLOBAL *a2,
        VIDMM_RECYCLE_MULTIRANGE *a3,
        enum _MM_ROTATE_DIRECTION a4,
        struct _MDL *a5,
        SIZE_T Size,
        int (*a7)(struct _MDL *, struct _MDL *, void *),
        void *a8,
        int a9)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct VIDMM_GLOBAL *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _VIDMM_GLOBAL_ALLOC *v23; // [rsp+40h] [rbp-28h]
  _BYTE v24[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 896));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24, v11, v12, v13);
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v15, &EventProfilerEnter, v16, 8005);
  v19 = VIDMM_RECYCLE_MULTIRANGE::Rotate(a3, v14, a4, a5, Size, a7, a8, a9, v23);
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v18, &EventProfilerExit, v20, 8005);
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24, v17, v20, v21);
  return v19;
}
