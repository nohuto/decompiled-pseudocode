/*
 * XREFs of VrpJobContextDelete @ 0x140612F38
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x140612ED4 (VrpCleanupNamespace.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
}
