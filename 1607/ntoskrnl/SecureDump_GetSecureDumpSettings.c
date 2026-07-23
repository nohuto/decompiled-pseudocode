/*
 * XREFs of SecureDump_GetSecureDumpSettings @ 0x1401CB7FC
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1401C80E8 (KeCapturePersistentThreadState.c)
 *     IopInitializeCrashDump @ 0x140569748 (IopInitializeCrashDump.c)
 *     IoCaptureLiveDump @ 0x140625FE4 (IoCaptureLiveDump.c)
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
    *(_BYTE *)a1 = byte_1403234D0;
    *(_DWORD *)(a1 + 4) = cbOutput;
    *(_BYTE *)(a1 + 1) = dword_1403234E8 == 1;
    v2 = dword_140323504;
  }
  else
  {
    v2 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v2;
  return 0LL;
}
