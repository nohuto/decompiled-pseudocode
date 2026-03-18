/*
 * XREFs of SecureDump_GetSecureDumpSettings @ 0x1401CB918
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1401C8248 (KeCapturePersistentThreadState.c)
 *     IopInitializeCrashDump @ 0x140569208 (IopInitializeCrashDump.c)
 *     IoCaptureLiveDump @ 0x140625F30 (IoCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SecureDump_GetSecureDumpSettings(__int64 a1)
{
  int v2; // eax

  if ( !a1 )
    return 3221225485LL;
  if ( SecureDmpEncryptionContext == 2 )
  {
    *(_BYTE *)a1 = byte_140323490;
    *(_DWORD *)(a1 + 4) = cbOutput;
    *(_BYTE *)(a1 + 1) = dword_1403234A8 == 1;
    v2 = dword_1403234C4;
  }
  else
  {
    v2 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v2;
  return 0LL;
}
