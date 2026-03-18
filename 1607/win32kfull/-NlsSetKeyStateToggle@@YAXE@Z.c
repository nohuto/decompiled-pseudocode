/*
 * XREFs of ?NlsSetKeyStateToggle@@YAXE@Z @ 0x1C00BC79C
 * Callers:
 *     NlsKbdInitializePerSystem @ 0x1C00BC5F4 (NlsKbdInitializePerSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsSetKeyStateToggle(unsigned __int8 a1)
{
  if ( gpqForeground )
    *(_BYTE *)(((unsigned __int64)a1 >> 2) + gpqForeground + 192) |= 1 << (2 * (a1 & 3) + 1);
  gafAsyncKeyState[(unsigned __int64)a1 >> 2] |= 1 << (2 * (a1 & 3) + 1);
}
