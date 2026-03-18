/*
 * XREFs of _DestroyMenu @ 0x1C006E710
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006F270 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     MNFreeItem @ 0x1C0072450 (MNFreeItem.c)
 *     xxxGetSystemMenu @ 0x1C00CA20C (xxxGetSystemMenu.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D1434 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserDestroyMenu @ 0x1C0104260 (NtUserDestroyMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C010FC68 (xxxLoadSysDesktopMenu.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 *     xxxSetSystemMenu @ 0x1C01431F8 (xxxSetSystemMenu.c)
 * Callees:
 *     MNFreeItem @ 0x1C0072450 (MNFreeItem.c)
 */

__int64 __fastcall DestroyMenu(struct tagMENU *a1)
{
  int v2; // edi
  __int64 i; // rsi
  void *v4; // r8
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

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
    v4 = (void *)*((_QWORD *)a1 + 10);
    if ( v4 )
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 120LL), 0, v4);
    v5 = *((_QWORD *)a1 + 3);
    v7 = 0LL;
    LockObjectAssignment(&v7, v5);
    HMAssignmentUnlock((char *)a1 + 72);
    HMFreeObject(a1);
    UnlockObjectAssignment(&v7);
  }
  return 1LL;
}
