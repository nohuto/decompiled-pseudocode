/*
 * XREFs of xxxPSMGetTextExtent @ 0x1C013821C
 * Callers:
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0053F14 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00F8334 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C013815C (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0242300 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0126A38 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0128938 (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C01382E8 (GetPrefixCount.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(HDC a1, __m128i *a2, int a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  __int64 ThreadWin32Thread; // r15
  unsigned __int16 *v9; // rbx
  unsigned __int64 v10; // rax
  __int64 result; // rax
  _QWORD v12[4]; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v13[512]; // [rsp+50h] [rbp-248h] BYREF

  v5 = a3;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( v5 >= 0xFF )
  {
    result = Win32AllocPool(2LL * ((int)v5 + 1), 1953657685LL);
    v9 = (unsigned __int16 *)result;
    if ( !result )
    {
      *(_DWORD *)(a4 + 4) = 0;
      *(_DWORD *)a4 = 0;
      return result;
    }
    PushW32ThreadLock(result, v12, (__int64)Win32FreePool);
  }
  else
  {
    v9 = (unsigned __int16 *)v13;
  }
  v10 = (unsigned __int64)GetPrefixCount(a2, (unsigned int)v5, v9, (unsigned int)v5) >> 16;
  if ( (_WORD)v10 )
  {
    a2 = (__m128i *)v9;
    LODWORD(v5) = v5 - (unsigned __int16)v10;
  }
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, (const WCHAR *)a2, v5, (_QWORD *)a4);
  else
    GreGetTextExtentW(a1, a2, v5, (struct tagSIZE *)a4, 1);
  if ( v9 != (unsigned __int16 *)v13 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v12);
  return 1LL;
}
