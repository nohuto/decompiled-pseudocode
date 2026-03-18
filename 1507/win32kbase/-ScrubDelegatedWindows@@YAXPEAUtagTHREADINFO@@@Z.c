/*
 * XREFs of ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0012694
 * Callers:
 *     CleanupInputDelegation @ 0x1C0012700 (CleanupInputDelegation.c)
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ScrubDelegatedWindow @ 0x1C0012720 (ScrubDelegatedWindow.c)
 */

void __fastcall ScrubDelegatedWindows(struct tagTHREADINFO *a1)
{
  _BYTE *v1; // rbx
  unsigned int v3; // edi

  v1 = (_BYTE *)qword_1C01003E8;
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
