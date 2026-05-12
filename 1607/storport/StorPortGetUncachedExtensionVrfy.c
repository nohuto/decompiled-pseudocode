/*
 * XREFs of StorPortGetUncachedExtensionVrfy @ 0x1C00622A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorPortGetUncachedExtensionVrfy(__int64 a1, __int64 a2, int a3)
{
  _BYTE *v3; // r9

  v3 = *(_BYTE **)(a1 - 16);
  if ( (v3[248] & 1) == 0 || !*(_BYTE *)(a2 + 82) || ((*(_DWORD *)(*(_QWORD *)v3 + 444LL) + 7) & 0xFFFFFFF8) == 0 )
    KeBugCheckEx(0xF1u, 0x2002uLL, 0LL, 0LL, 0LL);
  return StorPortGetUncachedExtension(a1, a2, a3);
}
