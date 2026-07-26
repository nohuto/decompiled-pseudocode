/*
 * XREFs of ?DeleteValue@KRegKey@@QEAAJPEBG@Z @ 0x1C00E2854
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00ACC00 (ndisPnPAddDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::DeleteValue(KRegKey *this, wchar_t *a2)
{
  __int64 v2; // rax
  wchar_t *v3; // r8
  _UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  if ( !a2 )
    return ZwDeleteValueKey(this->_p, &ValueName);
  v2 = 0x7FFFLL;
  v3 = a2;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  if ( v2 )
  {
    ValueName.Buffer = a2;
    ValueName.Length = 2 * (0x7FFF - v2);
    ValueName.MaximumLength = ValueName.Length + 2;
    return ZwDeleteValueKey(this->_p, &ValueName);
  }
  return -1073741811;
}
