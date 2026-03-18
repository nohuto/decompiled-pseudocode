/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x140126E68
 * Callers:
 *     BgkSetDisplayOwnership @ 0x140141248 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1401C3E00 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x1401C41A4 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BgLibraryEnable @ 0x1401269B0 (BgLibraryEnable.c)
 *     BgkpTryEnableConsole @ 0x140126E2C (BgkpTryEnableConsole.c)
 *     InbvSetFunction @ 0x14014113C (InbvSetFunction.c)
 *     BgkpDisableConsole @ 0x14014C880 (BgkpDisableConsole.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     BgkResumeFinished @ 0x1403C9590 (BgkResumeFinished.c)
 *     BgSetFrameBufferAccessCounter @ 0x140725008 (BgSetFrameBufferAccessCounter.c)
 *     BgkpLockBgfxCodeSection @ 0x140725674 (BgkpLockBgfxCodeSection.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14072572C (BgkpUnlockBgfxCodeSection.c)
 *     BgDisplayFade @ 0x140725814 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x140725A90 (BgConsoleGetInterface.c)
 *     BgkDestroy @ 0x140728724 (BgkDestroy.c)
 *     BgLibraryDisable @ 0x14072873C (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x1407287B8 (BgConsoleDestroyInterface.c)
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

  if ( byte_1403289A0 && !a1 )
  {
    BgkResumeFinished();
    qword_140328988 = 0LL;
    byte_140328CD3 = 0;
    return 0LL;
  }
  if ( a1 == byte_140328CD3 )
    return 0LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      qword_140328DD8 = a2;
    }
    else if ( !qword_140328DD8 )
    {
      return 3221225712LL;
    }
    BgDisplayFade();
    byte_140328CD2 = 0;
    byte_140328CD0 = 0;
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
      byte_140328CD3 = 0;
      byte_140328CD1 = 0;
      if ( qword_140328CC8 )
      {
        BgConsoleDestroyInterface();
        qword_140328CC8 = 0LL;
      }
    }
    BgSetFrameBufferAccessCounter(0LL);
    BgkpUnlockBgfxCodeSection();
    if ( qword_140328988 )
    {
      qword_140328988();
      qword_140328988 = 0LL;
    }
    return (unsigned int)v2;
  }
  if ( !qword_140328DD8 )
    return 3221225473LL;
  v7 = 0LL;
  result = qword_140328DD8(0LL, v8, &v7);
  if ( (int)result >= 0 )
  {
    qword_140328988 = v7;
    BgkpLockBgfxCodeSection();
    v4 = BgLibraryEnable((__int64)v8, 0);
    v5 = byte_140328CD3;
    v2 = v4;
    if ( v4 >= 0 )
      v5 = 1;
    byte_140328CD3 = v5;
    Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
    qword_140328CC8 = (__int64)Interface;
    if ( Interface )
      (*Interface)(0LL, 4291217094LL, (unsigned int)dword_1403420A8, 0LL);
    BgkpTryEnableConsole();
    return (unsigned int)v2;
  }
  return result;
}
