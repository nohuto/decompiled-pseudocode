/*
 * XREFs of ZwAlpcConnectPort @ 0x14017FE90
 * Callers:
 *     DbgkRegisterErrorPort @ 0x1405BE8F4 (DbgkRegisterErrorPort.c)
 *     VfZwAlpcConnectPort @ 0x140754F04 (VfZwAlpcConnectPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
