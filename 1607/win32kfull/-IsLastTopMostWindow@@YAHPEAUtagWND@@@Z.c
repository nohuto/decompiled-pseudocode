/*
 * XREFs of ?IsLastTopMostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0130FEC
 * Callers:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z @ 0x1C00A53E8 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLastTopMostWindow(struct tagWND *a1)
{
  unsigned int v1; // edx
  __int64 v3; // rax

  v1 = 0;
  if ( (*((_BYTE *)a1 + 48) & 8) != 0 )
  {
    v3 = *((_QWORD *)a1 + 9);
    if ( v3 )
      return (*(_BYTE *)(v3 + 48) & 8) == 0;
  }
  return v1;
}
