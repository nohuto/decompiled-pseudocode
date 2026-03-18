/*
 * XREFs of ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0074B80
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 *     CleanupInputDelegation @ 0x1C0074BE0 (CleanupInputDelegation.c)
 * Callees:
 *     ScrubDelegatedWindow @ 0x1C0074C00 (ScrubDelegatedWindow.c)
 */

void __fastcall ScrubDelegatedWindows(struct tagTHREADINFO *a1)
{
  _BYTE *v1; // rbx
  unsigned int v3; // edi

  v1 = (_BYTE *)qword_1C0102D48;
  v3 = 0;
  do
  {
    if ( v1[16] == 1
      && *(_DWORD *)(*(_QWORD *)v1 + 320LL)
      && *(struct tagTHREADINFO **)(*(_QWORD *)v1 + 312LL) == a1
      && (unsigned int)ScrubDelegatedWindow() )
    {
      break;
    }
    ++v3;
    v1 += 24;
  }
  while ( v3 <= giheLast );
}
