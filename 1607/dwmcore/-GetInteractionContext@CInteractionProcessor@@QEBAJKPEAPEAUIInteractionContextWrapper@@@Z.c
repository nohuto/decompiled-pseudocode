/*
 * XREFs of ?GetInteractionContext@CInteractionProcessor@@QEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x18016E8BC
 * Callers:
 *     ?GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x180145270 (-GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x180145290 (-GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::ConvertToInputType @ 0x18000DE7C (_anonymous_namespace_--ConvertToInputType.c)
 */

__int64 __fastcall CInteractionProcessor::GetInteractionContext(
        CInteractionProcessor *this,
        int a2,
        struct IInteractionContextWrapper **a3)
{
  int v3; // eax
  _QWORD *v4; // r8
  _QWORD *v5; // r9

  v3 = anonymous_namespace_::ConvertToInputType(a2);
  return CInteractionProcessor::GetInteractionContext(v5, v3, v4);
}
