/*
 * XREFs of _DestroyMenu @ 0x1C006AE40
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     MNFreeItem @ 0x1C006AEF4 (MNFreeItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006BE54 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 *     xxxGetSystemMenu @ 0x1C00BB39C (xxxGetSystemMenu.c)
 *     NtUserDestroyMenu @ 0x1C01253A0 (NtUserDestroyMenu.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C012BF54 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0130080 (xxxLoadSysDesktopMenu.c)
 *     xxxSetSystemMenu @ 0x1C0234264 (xxxSetSystemMenu.c)
 * Callees:
 *     MNFreeItem @ 0x1C006AEF4 (MNFreeItem.c)
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 */

__int64 __fastcall DestroyMenu(struct tagMENU *a1)
{
  int v2; // edi
  __int64 i; // rsi
  __int64 v4; // rdx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    v2 = *((_DWORD *)a1 + 13);
    for ( i = *((_QWORD *)a1 + 10); v2; --v2 )
    {
      MNFreeItem(a1);
      i += 152LL;
    }
    if ( *((_QWORD *)a1 + 10) )
    {
      DesktopFree(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 10) = 0LL;
      *((_DWORD *)a1 + 13) = 0;
    }
    v4 = *((_QWORD *)a1 + 3);
    v6 = 0LL;
    LockObjectAssignment(&v6, v4);
    HMAssignmentUnlock((char *)a1 + 72);
    HMFreeObject(a1);
    UnlockObjectAssignment(&v6);
  }
  return 1LL;
}
