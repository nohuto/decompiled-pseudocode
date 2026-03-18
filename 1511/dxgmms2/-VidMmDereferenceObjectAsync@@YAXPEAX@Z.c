/*
 * XREFs of ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C005E70C
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004DF58 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C0059B94 (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 *     ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007AE28 (-FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0088A70 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C0088C94 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 * Callees:
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C005E748 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

void __fastcall VidMmDereferenceObjectAsync(PVOID Object, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  _BYTE v6[32]; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  PVOID v8; // [rsp+48h] [rbp-20h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_p((__int64)Object, &BeginVidMmDereferenceObjectAsync, a3, Object);
  v7 = 1;
  v8 = Object;
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v6) )
  {
    ObfDereferenceObject(Object);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_p(v4, &EndVidMmDereferenceObjectAsync, v5, Object);
  }
}
