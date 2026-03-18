/*
 * XREFs of ExemptedFromImmersiveRestrictions @ 0x1C01D3168
 * Callers:
 *     zzzAttachThreadInput @ 0x1C008AE54 (zzzAttachThreadInput.c)
 *     xxxEnableWindow @ 0x1C0090D00 (xxxEnableWindow.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall ExemptedFromImmersiveRestrictions(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v4; // r8d

  v2 = *(_QWORD *)(a1 + 376);
  if ( *(int *)(v2 + 12) < 0 || (unsigned int)IsImmersiveBroker(v2) )
    return 1LL;
  LOBYTE(v4) = IAMThreadAccessGranted((const struct tagTHREADINFO *)a1);
  return v4;
}
