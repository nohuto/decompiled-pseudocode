/*
 * XREFs of _DestroyMenu @ 0x140033000
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140033B50 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNFreeItem @ 0x140034288 (MNFreeItem.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxGetSystemMenu @ 0x140121614 (xxxGetSystemMenu.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     NtUserDestroyMenu @ 0x1401F4A70 (NtUserDestroyMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x14022E810 (xxxLoadSysDesktopMenu.c)
 *     xxxSetSystemMenu @ 0x14023E21C (xxxSetSystemMenu.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x1400296A0 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z.c)
 *     MNFreeItem @ 0x140034288 (MNFreeItem.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x14014FB64 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401BA348 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyMenu(struct _HEAD *a1)
{
  __int64 v2; // rsi
  int i; // edi
  __int64 v4; // rdx
  __int64 v5; // rdi
  bool v6; // zf
  void *CurrentWin32kStackRefLookAside; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  if ( !a1 )
    return 0LL;
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v14, a1);
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    v2 = *((_QWORD *)a1 + 11);
    for ( i = *(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL); i; --i )
    {
      MNFreeItem(a1, v2, 1LL);
      v2 += 96LL;
    }
    if ( *((_QWORD *)a1 + 11) )
    {
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 136LL), 0, *((PVOID *)a1 + 12));
      Win32FreePool(*((void **)a1 + 11));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 32LL) = 0LL;
      *((_QWORD *)a1 + 11) = 0LL;
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) = 0;
    }
    v4 = *((_QWORD *)a1 + 3);
    v15 = 0LL;
    LockObjectAssignment(&v15, v4);
    HMAssignmentUnlock((char *)a1 + 80);
    v5 = *((_QWORD *)a1 + 19);
    v6 = *(_DWORD *)(v5 + 8) == 0;
    *(_QWORD *)v5 = 0LL;
    *(_BYTE *)(v5 + 12) = 1;
    if ( v6 )
    {
      CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
      Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v5);
    }
    HMFreeObject(a1);
    DeferrableUnlockObjectAssignment<tagDESKTOP>(&v15, v8, v9, v10);
    if ( v14 )
      *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19800) = 0LL;
  }
  else
  {
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v14);
  }
  return 1LL;
}
