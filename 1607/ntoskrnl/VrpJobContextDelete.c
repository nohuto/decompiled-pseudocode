/*
 * XREFs of VrpJobContextDelete @ 0x140612E84
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x140612E20 (VrpCleanupNamespace.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
}
