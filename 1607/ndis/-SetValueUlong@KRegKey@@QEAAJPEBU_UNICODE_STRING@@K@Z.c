/*
 * XREFs of ?SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z @ 0x1C00E29C4
 * Callers:
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D3C20 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBGK@Z @ 0x1C00E2950 (-SetValueUlong@KRegKey@@QEAAJPEBGK@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::SetValueUlong(KRegKey *this, struct _UNICODE_STRING *a2, int a3)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ZwSetValueKey(this->_p, a2, 0, 4u, &v4, 4u);
}
