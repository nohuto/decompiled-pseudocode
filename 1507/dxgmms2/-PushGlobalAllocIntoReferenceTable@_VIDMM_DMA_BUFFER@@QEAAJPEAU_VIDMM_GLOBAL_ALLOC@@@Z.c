/*
 * XREFs of ?PushGlobalAllocIntoReferenceTable@_VIDMM_DMA_BUFFER@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059E78
 * Callers:
 *     ?AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004B7D4 (-AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _VIDMM_DMA_BUFFER::PushGlobalAllocIntoReferenceTable(
        _VIDMM_DMA_BUFFER *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *((unsigned int *)this + 42);
  if ( (unsigned int)v2 >= 0x400 )
    return 3221225473LL;
  *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v2) = a2;
  result = 0LL;
  ++*((_DWORD *)this + 42);
  return result;
}
