/*
 * XREFs of _dynamic_atexit_destructor_for__CInteraction::s_InteractionHandleTable__ @ 0x1800C2EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall dynamic_atexit_destructor_for__CInteraction::s_InteractionHandleTable__(struct _RTL_GENERIC_TABLE *a1)
{
  CInteraction::s_InteractionHandleTable = &HANDLE_TABLE::`vftable';
  CGenericTableMap<unsigned int,PropertyMapEntry>::FreeTableData(a1, Buffer);
}
