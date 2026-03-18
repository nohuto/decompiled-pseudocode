/*
 * XREFs of ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00F94D0
 * Callers:
 *     xxxCloseClipboard @ 0x1C00F8DF0 (xxxCloseClipboard.c)
 *     FreeWindowStation @ 0x1C00F92C0 (FreeWindowStation.c)
 * Callees:
 *     <none>
 */

void __fastcall CloseClipboardToken(struct tagWINDOWSTATION *a1)
{
  void *v2; // rcx
  int v3; // eax

  v2 = (void *)*((_QWORD *)a1 + 16);
  if ( v2 )
  {
    v3 = *((_DWORD *)a1 + 8);
    if ( (v3 & 0x400) != 0 )
    {
      *((_DWORD *)a1 + 8) = v3 & 0xFFFFFBFF;
      PsDereferenceImpersonationToken(v2);
    }
    else
    {
      PsDereferencePrimaryToken(v2);
    }
    *((_QWORD *)a1 + 16) = 0LL;
  }
}
