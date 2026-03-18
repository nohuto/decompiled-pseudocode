/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007C798
 * Callers:
 *     xxxDesktopThread @ 0x1C0142CC0 (xxxDesktopThread.c)
 * Callees:
 *     ClientGetMessageMPH @ 0x1C0067748 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C007C9DC (xxxDispatchMessage.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0130508 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0130A74 (xxxCleanupMotherDesktopWindow.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall xxxHandleDesktopMessages(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  int MessageMPH; // eax
  int v6; // eax
  _OWORD v7[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v7, 0, sizeof(v7));
  while ( 1 )
  {
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 408LL) + 16LL) > 0 )
      MessageMPH = ClientGetMessageMPH(v7, 0LL, 0, 0, 1, 0);
    else
      MessageMPH = xxxRealInternalGetMessage((__int64)v7, 0LL, 0, 0, 1u, 0);
    if ( !MessageMPH )
      return 1LL;
    if ( a2 == (struct tagTERMINAL *)&gTermNOIO )
    {
      v6 = DWORD2(v7[0]);
      if ( DWORD2(v7[0]) != 18 )
        goto LABEL_8;
      xxxCleanupMotherDesktopWindow(a2);
    }
    v6 = DWORD2(v7[0]);
    if ( DWORD2(v7[0]) == 18 && *((_DWORD *)a1 + 195) <= 1u )
      return 0LL;
LABEL_8:
    if ( v6 == 796 )
    {
      if ( *(_QWORD *)&v7[1] == 2LL )
        DestroyPendingDesktops(a1, a2);
    }
    else
    {
      xxxDispatchMessage(v7);
    }
  }
}
