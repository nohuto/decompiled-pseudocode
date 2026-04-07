/*
 * XREFs of ?WriteInstruction@CDrawAtlasedRectsInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x1800194B0
 * Callers:
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180020070 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawAtlasedRectsInstruction::WriteInstruction(
        CDrawAtlasedRectsInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _QWORD, _QWORD))(*(_QWORD *)a2 + 24LL))(
           a2,
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *(unsigned int *)(*((_QWORD *)this + 3) + 24LL));
}
