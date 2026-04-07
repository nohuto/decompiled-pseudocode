/*
 * XREFs of ?WriteInstruction@CPushTransformInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180015740
 * Callers:
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180020070 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPushTransformInstruction::WriteInstruction(
        CPushTransformInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _QWORD))(*(_QWORD *)a2 + 104LL))(
           a2,
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}
