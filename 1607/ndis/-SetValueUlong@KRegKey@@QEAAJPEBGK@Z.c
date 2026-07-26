/*
 * XREFs of ?SetValueUlong@KRegKey@@QEAAJPEBGK@Z @ 0x1C00E2950
 * Callers:
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00AC124 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ndisPnPAddDevice @ 0x1C00ACC00 (ndisPnPAddDevice.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00C3E60 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 * Callees:
 *     ?SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z @ 0x1C00E29C4 (-SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall KRegKey::SetValueUlong(KRegKey *this, wchar_t *a2, unsigned int a3)
{
  __int64 v4; // rax
  wchar_t *v5; // r8
  struct _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&v7.Length = 0;
  v7.Buffer = 0LL;
  if ( !a2 )
    return KRegKey::SetValueUlong(this, &v7, a3);
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
    v7.Buffer = a2;
    v7.Length = 2 * (0x7FFF - v4);
    v7.MaximumLength = v7.Length + 2;
    return KRegKey::SetValueUlong(this, &v7, a3);
  }
  return 3221225485LL;
}
