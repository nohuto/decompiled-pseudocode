/*
 * XREFs of EtwpIsRegEntryAllowed @ 0x1404CDCE4
 * Callers:
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpIsCaptureStateAllowed @ 0x1403B5208 (EtwpIsCaptureStateAllowed.c)
 *     EtwpIsGuidAllowed @ 0x14046D428 (EtwpIsGuidAllowed.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1404CDDBC (EtwpCheckProviderLoggingAccess.c)
 */

bool __fastcall EtwpIsRegEntryAllowed(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, char a6)
{
  int v7; // esi
  __int64 v8; // rbx
  bool result; // al

  v7 = *(_DWORD *)(a4 + 72);
  v8 = a3;
  result = 0;
  if ( ((*(_BYTE *)(a1 + 98) & 1) == 0 || !*(_BYTE *)(a3 + 17) && !*(_BYTE *)(a3 + 18))
    && (v7 != 2 || EtwpIsCaptureStateAllowed(a1, a4, a5, a4))
    && ((*(_BYTE *)(a1 + 98) & 8) == 0
     || a6 != 2 && (v7 || *(_WORD *)(a4 + 104) == *(_WORD *)(*(_QWORD *)(a1 + 32) + 72LL))) )
  {
    if ( *(_BYTE *)(v8 + 18) )
      return 1;
    if ( a6 != 2 || EtwpIsGuidAllowed(a2, (const void *)(*(_QWORD *)(a1 + 32) + 24LL)) )
    {
      LOBYTE(a3) = *(_BYTE *)(v8 + 16);
      if ( !(unsigned int)EtwpCheckProviderLoggingAccess(a1, v8, a3) )
        return 1;
    }
  }
  return result;
}
