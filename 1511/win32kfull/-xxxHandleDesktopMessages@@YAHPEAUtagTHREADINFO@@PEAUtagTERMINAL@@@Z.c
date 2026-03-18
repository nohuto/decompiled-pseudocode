/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D037C
 * Callers:
 *     xxxDesktopThread @ 0x1C00CFAE0 (xxxDesktopThread.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C0054E2C (xxxDispatchMessage.c)
 *     xxxInternalGetMessage @ 0x1C00D0420 (xxxInternalGetMessage.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D1434 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C011435C (xxxCleanupMotherDesktopWindow.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall xxxHandleDesktopMessages(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  int v5; // eax
  _QWORD v6[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v6, 0, 0x30uLL);
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)v6, 0, 0, 0, 1, 0) )
      return 1LL;
    if ( a2 == (struct tagTERMINAL *)&gTermNOIO )
    {
      v5 = v6[1];
      if ( LODWORD(v6[1]) != 18 )
        goto LABEL_6;
      xxxCleanupMotherDesktopWindow(a2);
    }
    v5 = v6[1];
    if ( LODWORD(v6[1]) == 18 && *((_DWORD *)a1 + 193) <= 1u )
      return 0LL;
LABEL_6:
    if ( v5 == 796 )
    {
      if ( v6[2] == 2LL )
        DestroyPendingDesktops(a1, a2);
    }
    else
    {
      xxxDispatchMessage(v6);
    }
  }
}
