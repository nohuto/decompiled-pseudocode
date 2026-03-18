/*
 * XREFs of ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C000E014
 * Callers:
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C005B3AC (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::CompleteAsynchronousUnpin(DXGDEVICE *this, unsigned int a2, struct DXGALLOCATION *a3)
{
  ((__int64 (__fastcall **)(_QWORD, struct DXGALLOCATION *))DxgCoreInterface)[8](a2, a3);
}
