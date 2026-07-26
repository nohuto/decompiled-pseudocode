/*
 * XREFs of ?SetValueBlob@KRegKey@@QEAAJPEBGKPEBE@Z @ 0x1C00DCA30
 * Callers:
 *     ndisPnPAddDevice @ 0x1C009AE5C (ndisPnPAddDevice.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00BF118 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::SetValueBlob(KRegKey *this, wchar_t *a2, ULONG a3, unsigned __int8 *Data)
{
  __int64 v5; // rax
  wchar_t *v6; // r8
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  if ( !a2 )
    return ZwSetValueKey(this->_p, &ValueName, 0, 3u, Data, a3);
  v5 = 0x7FFFLL;
  v6 = a2;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  if ( v5 )
  {
    ValueName.Buffer = a2;
    ValueName.Length = 2 * (0x7FFF - v5);
    ValueName.MaximumLength = ValueName.Length + 2;
    return ZwSetValueKey(this->_p, &ValueName, 0, 3u, Data, a3);
  }
  return -1073741811;
}
