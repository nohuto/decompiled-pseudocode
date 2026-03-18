/*
 * XREFs of ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0017BB8
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0015CB0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryQueryString @ 0x1C0015FF0 (imp_WdfRegistryQueryString.c)
 *     QueryAndAllocString @ 0x1C0017A74 (QueryAndAllocString.c)
 *     ?FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z @ 0x1C006E80C (-FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z.c)
 *     FxVerifierGetObjectDebugInfo @ 0x1C007BF90 (FxVerifierGetObjectDebugInfo.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C007FDC0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C0080080 (imp_WdfRegistryQueryUnicodeString.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C00937CC (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     memmove @ 0x1C003C440 (memmove.c)
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
  ULONG Tag; // r8d
  ULONG Length; // eax
  _KEY_VALUE_PARTIAL_INFORMATION *PoolWithTag; // rbx
  NTSTATUS v13; // eax
  unsigned int v14; // edi
  unsigned int DataLength; // eax
  unsigned int length; // [rsp+30h] [rbp-58h] BYREF
  _KEY_VALUE_PARTIAL_INFORMATION partial; // [rsp+38h] [rbp-50h] BYREF

  if ( FxDriverGlobals )
    Tag = FxDriverGlobals->Tag;
  else
    Tag = 1917089862;
  if ( Value )
  {
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
  v13 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &length);
  v14 = v13;
  if ( v13 >= 0 )
  {
    if ( Value )
    {
      DataLength = PoolWithTag->DataLength;
      if ( ValueLength >= DataLength )
        memmove(Value, PoolWithTag->Data, DataLength);
    }
    goto LABEL_11;
  }
  if ( v13 == -2147483643 )
  {
LABEL_11:
    if ( ValueLengthQueried )
      *ValueLengthQueried = PoolWithTag->DataLength;
    if ( ValueType )
      *ValueType = PoolWithTag->Type;
  }
  if ( PoolWithTag != &partial )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v14;
}
