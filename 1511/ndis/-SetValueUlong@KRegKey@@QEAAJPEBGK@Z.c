/*
 * XREFs of ?SetValueUlong@KRegKey@@QEAAJPEBGK@Z @ 0x1C00DCABC
 * Callers:
 *     ndisPnPAddDevice @ 0x1C009AE5C (ndisPnPAddDevice.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00AC080 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00BF118 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::SetValueUlong(KRegKey *this, wchar_t *a2, int a3)
{
  __int64 v4; // rax
  wchar_t *v5; // r8
  void **p; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  if ( !a2 )
    goto LABEL_7;
  v4 = 0x7FFFLL;
  v5 = a2;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( v4 )
  {
    ValueName.Buffer = a2;
    ValueName.Length = 2 * (0x7FFF - v4);
    ValueName.MaximumLength = ValueName.Length + 2;
LABEL_7:
    p = this->_p;
    Data = a3;
    return ZwSetValueKey(p, &ValueName, 0, 4u, &Data, 4u);
  }
  return -1073741811;
}
