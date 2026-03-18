/*
 * XREFs of CountNumClipFormatForIL @ 0x1C01435C0
 * Callers:
 *     NtUserCountClipboardFormats @ 0x1C0143570 (NtUserCountClipboardFormats.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014C8A4 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C021C090 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C0143634 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01F09F8 (IsFmtBlocked.c)
 */

__int64 __fastcall CountNumClipFormatForIL(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbx
  unsigned int v3; // edi
  int v4; // esi
  _QWORD *v5; // r14
  __int64 v7; // [rsp+30h] [rbp+8h]

  v7 = a1;
  v2 = *(unsigned int **)(a2 + 96);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(_DWORD *)(a2 + 104);
    if ( v4 )
    {
      v5 = v2 + 5;
      while ( 1 )
      {
        --v4;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(*v5, a1) || !(unsigned int)IsFmtBlocked(*v2) )
          ++v3;
        v2 += 8;
        v5 += 4;
        if ( !v4 )
          break;
        a1 = v7;
      }
    }
  }
  return v3;
}
