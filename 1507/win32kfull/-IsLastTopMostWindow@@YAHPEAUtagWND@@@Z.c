/*
 * XREFs of ?IsLastTopMostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01008D8
 * Callers:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z @ 0x1C0083BD4 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLastTopMostWindow(struct tagWND *a1)
{
  unsigned int v1; // edx
  __int64 v2; // rax

  v1 = 0;
  if ( (*((_BYTE *)a1 + 48) & 8) != 0 )
  {
    v2 = *((_QWORD *)a1 + 9);
    if ( v2 )
      return (*(_BYTE *)(v2 + 48) & 8) == 0;
  }
  return v1;
}
