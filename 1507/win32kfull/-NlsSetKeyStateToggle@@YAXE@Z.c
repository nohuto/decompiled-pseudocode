/*
 * XREFs of ?NlsSetKeyStateToggle@@YAXE@Z @ 0x1C0138A00
 * Callers:
 *     NlsKbdInitializePerSystem @ 0x1C0138854 (NlsKbdInitializePerSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsSetKeyStateToggle(unsigned __int8 a1)
{
  if ( gpqForeground )
    *(_BYTE *)(((unsigned __int64)a1 >> 2) + gpqForeground + 184) |= 1 << (2 * (a1 & 3) + 1);
  gafAsyncKeyState[(unsigned __int64)a1 >> 2] |= 1 << (2 * (a1 & 3) + 1);
}
