/*
 * XREFs of ?_SetValue@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@K0K@Z @ 0x1C007FC8C
 * Callers:
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C009ABC0 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxRegKey::_SetValue(
        void *Key,
        _UNICODE_STRING *ValueName,
        ULONG ValueType,
        void *Value,
        ULONG ValueLength)
{
  return ZwSetValueKey(Key, ValueName, 0, ValueType, Value, ValueLength);
}
