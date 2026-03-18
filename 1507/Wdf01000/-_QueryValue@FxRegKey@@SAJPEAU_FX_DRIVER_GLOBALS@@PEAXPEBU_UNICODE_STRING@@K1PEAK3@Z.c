/*
 * XREFs of ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C002C4B8
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0023480 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryQueryString @ 0x1C002C6C0 (imp_WdfRegistryQueryString.c)
 *     FxVerifierGetObjectDebugInfo @ 0x1C0079A7C (FxVerifierGetObjectDebugInfo.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C007D690 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C007DA70 (imp_WdfRegistryQueryUnicodeString.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C009ABC0 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 */

__int64 __fastcall FxRegKey::_QueryValue(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *Key,
        _UNICODE_STRING *ValueName,
        unsigned int ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  ULONG Length; // eax
  _KEY_VALUE_PARTIAL_INFORMATION *PoolWithTag; // rbx
  NTSTATUS v12; // eax
  unsigned int v13; // edi
  ULONG Tag; // r8d
  unsigned int DataLength; // eax
  unsigned int length; // [rsp+30h] [rbp-58h] BYREF
  _KEY_VALUE_PARTIAL_INFORMATION partial; // [rsp+38h] [rbp-50h] BYREF

  if ( Value )
  {
    Tag = FxDriverGlobals->Tag;
    length = ValueLength + 12;
    PoolWithTag = (_KEY_VALUE_PARTIAL_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ValueLength + 12, Tag);
    if ( !PoolWithTag )
      return 3221225626LL;
    Length = length;
  }
  else
  {
    Length = 12;
    length = 12;
    PoolWithTag = &partial;
    *(_QWORD *)&partial.TitleIndex = 0LL;
    partial.DataLength = 0;
  }
  v12 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &length);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( Value )
    {
      DataLength = PoolWithTag->DataLength;
      if ( ValueLength >= DataLength )
        memmove(Value, PoolWithTag->Data, DataLength);
    }
    goto LABEL_5;
  }
  if ( v12 == -2147483643 )
  {
LABEL_5:
    if ( ValueLengthQueried )
      *ValueLengthQueried = PoolWithTag->DataLength;
    if ( ValueType )
      *ValueType = PoolWithTag->Type;
  }
  if ( PoolWithTag != &partial )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v13;
}
