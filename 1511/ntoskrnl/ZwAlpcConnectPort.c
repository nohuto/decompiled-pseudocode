/*
 * XREFs of ZwAlpcConnectPort @ 0x1401514C0
 * Callers:
 *     DbgkRegisterErrorPort @ 0x140547930 (DbgkRegisterErrorPort.c)
 *     VfZwAlpcConnectPort @ 0x1406D133C (VfZwAlpcConnectPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
