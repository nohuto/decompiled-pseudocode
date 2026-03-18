/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x14014FED8
 * Callers:
 *     BgkSetDisplayOwnership @ 0x1401664B4 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1401F1254 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x1401F16B0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BgLibraryEnable @ 0x14014C8C8 (BgLibraryEnable.c)
 *     BgkpTryEnableConsole @ 0x14014FE9C (BgkpTryEnableConsole.c)
 *     InbvSetFunction @ 0x1401663A8 (InbvSetFunction.c)
 *     BgkpDisableConsole @ 0x14017065C (BgkpDisableConsole.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     BgkResumeFinished @ 0x1403EC37C (BgkResumeFinished.c)
 *     BgkpLockBgfxCodeSection @ 0x14075C67C (BgkpLockBgfxCodeSection.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14075C764 (BgkpUnlockBgfxCodeSection.c)
 *     BgDisplayFade @ 0x14075C83C (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x14075CBFC (BgConsoleGetInterface.c)
 *     BgkDestroy @ 0x14075F69C (BgkDestroy.c)
 *     BgLibraryDisable @ 0x14075F6B4 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x14075F730 (BgConsoleDestroyInterface.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipChange(char a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  int v2; // ebx
  __int64 result; // rax
  int v4; // eax
  char v5; // cl
  void (__fastcall **Interface)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 (*v7)(void); // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[40]; // [rsp+28h] [rbp-40h] BYREF

  if ( byte_1403538D0 && !a1 )
  {
    BgkResumeFinished();
    qword_140353AE8 = 0LL;
    byte_140353B10 = 0;
    return 0LL;
  }
  if ( a1 == byte_140353B10 )
    return 0LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      qword_140353AF8 = a2;
    }
    else if ( !qword_140353AF8 )
    {
      return 3221225712LL;
    }
    BgDisplayFade();
    byte_1403539A0 = 0;
    byte_1403539A1 = 0;
    BgkpDisableConsole();
    v2 = BgLibraryDisable();
    if ( v2 < 0 )
    {
      BgkDestroy();
      InbvSetFunction(3LL);
      v2 = 0;
    }
    else
    {
      byte_140353B10 = 0;
      if ( qword_140353B00 )
      {
        BgConsoleDestroyInterface();
        qword_140353B00 = 0LL;
      }
    }
    BgkpUnlockBgfxCodeSection();
    if ( qword_140353AE8 )
    {
      qword_140353AE8();
      qword_140353AE8 = 0LL;
    }
    return (unsigned int)v2;
  }
  if ( !qword_140353AF8 )
    return 3221225473LL;
  v7 = 0LL;
  result = qword_140353AF8(0LL, v8, &v7);
  if ( (int)result >= 0 )
  {
    qword_140353AE8 = v7;
    BgkpLockBgfxCodeSection();
    v4 = BgLibraryEnable((__int64)v8, 0);
    v5 = byte_140353B10;
    v2 = v4;
    if ( v4 >= 0 )
      v5 = 1;
    byte_140353B10 = v5;
    Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
    qword_140353B00 = (__int64)Interface;
    if ( Interface )
      (*Interface)(0LL, 4291217094LL, (unsigned int)dword_14036E098, 0LL);
    BgkpTryEnableConsole();
    return (unsigned int)v2;
  }
  return result;
}
