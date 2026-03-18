/*
 * XREFs of ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C023EEA4
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C0242490 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C0040128 (GreExtTextOutWInternal.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 *     GetAppCompatFlags2 @ 0x1C00722A8 (GetAppCompatFlags2.c)
 *     CALL_LPK @ 0x1C00CD148 (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C00CD17C (GetPrefixCount.c)
 *     xxxClientExtTextOutW @ 0x1C014C20C (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C023EBC4 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C02449F4 (xxxPSMTextOut.c)
 */

void __fastcall xxxDrawMenuItemText(
        struct tagMENU *a1,
        struct tagITEM *a2,
        HDC a3,
        unsigned int a4,
        int a5,
        unsigned __int16 *a6,
        int a7,
        int a8)
{
  __int64 ThreadWin32Thread; // r13
  __int64 v11; // rax
  unsigned __int16 *SourceString; // rbx
  int PrefixCount; // r15d
  int v14; // esi
  _QWORD v17[4]; // [rsp+60h] [rbp-268h] BYREF
  _BYTE v18[512]; // [rsp+80h] [rbp-248h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a7 < 255 )
  {
    SourceString = (unsigned __int16 *)v18;
  }
  else
  {
    v11 = Win32AllocPool(2LL * (a7 + 1));
    SourceString = (unsigned __int16 *)v11;
    if ( !v11 )
      return;
    PushW32ThreadLock(v11, v17, (__int64)Win32FreePool);
  }
  PrefixCount = GetPrefixCount((__int16 *)a6, a7, SourceString, a7);
  if ( !(unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    v14 = a5;
    GreExtTextOutWInternal(a3, a4, a5, 0, 0LL, SourceString, a7 - HIWORD(PrefixCount), 0LL, 0LL, 0);
    goto LABEL_9;
  }
  v14 = a5;
  xxxClientExtTextOutW(a3, a4, a5, 0, 0LL, SourceString, a7 - HIWORD(PrefixCount));
  if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) != -1 )
  {
LABEL_9:
    if ( a8
      || (gdwPUDFlags & 0x20000) != 0
      || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000
      || (GetAppCompatFlags2(0x400u) & 2) != 0 )
    {
      if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        xxxPSMTextOut(a3, a4, v14, a6, a7, 0x200000);
      else
        xxxDrawItemUnderline(a1, a2, a3, a4, v14, SourceString, (unsigned __int16)PrefixCount);
    }
  }
  if ( SourceString != (unsigned __int16 *)v18 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v17);
}
