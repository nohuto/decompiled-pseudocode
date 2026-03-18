/*
 * XREFs of ?TrackZorderHelper@@YAXPEAUtagWINDOWPOS@@PEAPEAUHWND__@@@Z @ 0x1C00768EC
 * Callers:
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@1PEAPEAUHWND__@@2@Z @ 0x1C0076750 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@1PEAPEAUHWND__@@2@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TrackZorderHelper(struct tagWINDOWPOS *a1, HWND *a2)
{
  if ( *a2 )
    *((_QWORD *)a1 + 1) = *a2;
  *a2 = *(HWND *)a1;
}
