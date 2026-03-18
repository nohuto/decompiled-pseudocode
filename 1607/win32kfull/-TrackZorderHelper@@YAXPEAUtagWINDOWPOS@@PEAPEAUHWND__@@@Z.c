/*
 * XREFs of ?TrackZorderHelper@@YAXPEAUtagWINDOWPOS@@PEAPEAUHWND__@@@Z @ 0x1C00A54B8
 * Callers:
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@1PEAPEAUHWND__@@2@Z @ 0x1C00A531C (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@1PEAPEAUHWND__@@2@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TrackZorderHelper(struct tagWINDOWPOS *a1, HWND *a2)
{
  if ( *a2 )
    *((_QWORD *)a1 + 1) = *a2;
  *a2 = *(HWND *)a1;
}
