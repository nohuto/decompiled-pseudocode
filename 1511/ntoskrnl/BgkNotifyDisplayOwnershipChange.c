/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x14011BC4C
 * Callers:
 *     BgkSetDisplayOwnership @ 0x140137CB0 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1401B6324 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x1401B66CC (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BgLibraryEnable @ 0x1401178FC (BgLibraryEnable.c)
 *     BgkpTryEnableConsole @ 0x14011BC10 (BgkpTryEnableConsole.c)
 *     InbvSetFunction @ 0x140137BA4 (InbvSetFunction.c)
 *     BgkpDisableConsole @ 0x1401429A4 (BgkpDisableConsole.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     BgkResumeFinished @ 0x14039DEA4 (BgkResumeFinished.c)
 *     BgSetFrameBufferAccessCounter @ 0x1406D9000 (BgSetFrameBufferAccessCounter.c)
 *     BgkpLockBgfxCodeSection @ 0x1406D9690 (BgkpLockBgfxCodeSection.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1406D9748 (BgkpUnlockBgfxCodeSection.c)
 *     BgDisplayFade @ 0x1406D97F4 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x1406D9BB4 (BgConsoleGetInterface.c)
 *     BgkDestroy @ 0x1406DC654 (BgkDestroy.c)
 *     BgLibraryDisable @ 0x1406DC66C (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x1406DC6E8 (BgConsoleDestroyInterface.c)
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

  if ( byte_140305B50 && !a1 )
  {
    BgkResumeFinished();
    qword_140305D70 = 0LL;
    byte_140305D99 = 0;
    return 0LL;
  }
  if ( a1 == byte_140305D99 )
    return 0LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      qword_140305D80 = a2;
    }
    else if ( !qword_140305D80 )
    {
      return 3221225712LL;
    }
    BgDisplayFade();
    byte_140305C20 = 0;
    byte_140305C21 = 0;
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
      byte_140305D99 = 0;
      byte_140305D98 = 0;
      if ( qword_140305D88 )
      {
        BgConsoleDestroyInterface();
        qword_140305D88 = 0LL;
      }
    }
    BgSetFrameBufferAccessCounter(0LL);
    BgkpUnlockBgfxCodeSection();
    if ( qword_140305D70 )
    {
      qword_140305D70();
      qword_140305D70 = 0LL;
    }
    return (unsigned int)v2;
  }
  if ( !qword_140305D80 )
    return 3221225473LL;
  v7 = 0LL;
  result = qword_140305D80(0LL, v8, &v7);
  if ( (int)result >= 0 )
  {
    qword_140305D70 = v7;
    BgkpLockBgfxCodeSection();
    v4 = BgLibraryEnable((__int64)v8, 0);
    v5 = byte_140305D99;
    v2 = v4;
    if ( v4 >= 0 )
      v5 = 1;
    byte_140305D99 = v5;
    Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
    qword_140305D88 = (__int64)Interface;
    if ( Interface )
      (*Interface)(0LL, 4291217094LL, (unsigned int)dword_14031D098, 0LL);
    BgkpTryEnableConsole();
    return (unsigned int)v2;
  }
  return result;
}
