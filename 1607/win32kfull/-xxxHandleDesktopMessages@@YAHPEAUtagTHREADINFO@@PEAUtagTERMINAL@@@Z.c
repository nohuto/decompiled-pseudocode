/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00DFFA0
 * Callers:
 *     xxxDesktopThread @ 0x1C00DF620 (xxxDesktopThread.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     ClientGetMessageMPH @ 0x1C0104E3C (ClientGetMessageMPH.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C012BF54 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C012C494 (xxxCleanupMotherDesktopWindow.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxHandleDesktopMessages(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  int MessageMPH; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // eax
  _QWORD v10[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, 0x30uLL);
  while ( 1 )
  {
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
      MessageMPH = ClientGetMessageMPH((unsigned int)v10, 0, 0, 0, 1, 0);
    else
      MessageMPH = xxxRealInternalGetMessage((__int64)v10, 0LL, 0, 0, 1u, 0);
    if ( !MessageMPH )
      return 1LL;
    if ( a2 == (struct tagTERMINAL *)&gTermNOIO )
    {
      v9 = v10[1];
      if ( LODWORD(v10[1]) != 18 )
        goto LABEL_8;
      xxxCleanupMotherDesktopWindow(a2);
    }
    v9 = v10[1];
    if ( LODWORD(v10[1]) == 18 && *((_DWORD *)a1 + 195) <= 1u )
      return 0LL;
LABEL_8:
    if ( v9 == 796 )
    {
      if ( v10[2] == 2LL )
        DestroyPendingDesktops(a1, a2);
    }
    else
    {
      xxxDispatchMessage(v10, v5, v6, v7);
    }
  }
}
