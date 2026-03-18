/*
 * XREFs of DesktopAlloc @ 0x14012D510
 * Callers:
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x14012CF58 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     DefSetText @ 0x14012D150 (DefSetText.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14017AF60 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     _InitPwSB @ 0x14018FBCC (_InitPwSB.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1401E3704 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     DesktopAllocInternal @ 0x140150424 (DesktopAllocInternal.c)
 */

__int64 __fastcall DesktopAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  _DWORD *v9; // rcx

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
    return 0LL;
  LOBYTE(a4) = 1;
  v7 = DesktopAllocInternal(a1, a2, a3, a4);
  if ( !v7 )
  {
    v9 = *(_DWORD **)(W32GetUserSessionState(v6, v5) + 19904);
    if ( (*v9 & 0x100) != 0 )
    {
      _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v9, v8) + 19904), 0xFFFFFEFF);
      UserLogError(2147483891LL);
    }
  }
  return v7;
}
