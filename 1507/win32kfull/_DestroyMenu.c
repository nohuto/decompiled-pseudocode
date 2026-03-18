/*
 * XREFs of _DestroyMenu @ 0x1C00DD5A0
 * Callers:
 *     xxxGetSystemMenu @ 0x1C004EA78 (xxxGetSystemMenu.c)
 *     MNFreeItem @ 0x1C0054F24 (MNFreeItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00557DC (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     NtUserDestroyMenu @ 0x1C00DD540 (NtUserDestroyMenu.c)
 *     _DestroyMenu @ 0x1C00DD5A0 (_DestroyMenu.c)
 *     xxxSetSystemMenu @ 0x1C01182F8 (xxxSetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0128B38 (xxxLoadSysDesktopMenu.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0130508 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     _DestroyMenu @ 0x1C00DD5A0 (_DestroyMenu.c)
 *     ?RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z @ 0x1C023C354 (-RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall DestroyMenu(__int64 a1)
{
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rax
  void *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    v3 = *(_DWORD *)(a1 + 52);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 80) + 40LL;
      do
      {
        *(_QWORD *)(v4 + 64) = 0LL;
        --v3;
        if ( *(_QWORD *)v4 )
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 120LL), 0, *(PVOID *)v4);
        *(_QWORD *)v4 = 0LL;
        if ( *(_QWORD *)(v4 - 24) )
        {
          RemoveParentMenu((struct tagMENU *)a1, (struct tagMENU **)(v4 - 24));
          v5 = HMAssignmentUnlock(v4 - 24);
          if ( v5 )
            DestroyMenu(v5);
        }
        v4 += 152LL;
      }
      while ( v3 );
    }
    v6 = *(void **)(a1 + 80);
    if ( v6 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 120LL), 0, v6);
      *(_QWORD *)(a1 + 80) = 0LL;
      *(_DWORD *)(a1 + 52) = 0;
    }
    v7 = *(_QWORD *)(a1 + 24);
    v8 = 0LL;
    LockObjectAssignment(&v8, v7);
    HMAssignmentUnlock(a1 + 72);
    HMFreeObject(a1);
    UnlockObjectAssignment(&v8);
  }
  return 1LL;
}
