/*
 * XREFs of ?WriteInstruction@CPopInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18003F3E0
 * Callers:
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180020070 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPopInstruction::WriteInstruction(
        CPopInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)a2 + 96LL))(a2);
}
