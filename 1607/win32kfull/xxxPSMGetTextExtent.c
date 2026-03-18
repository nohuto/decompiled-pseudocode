/*
 * XREFs of xxxPSMGetTextExtent @ 0x1C00B92A4
 * Callers:
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00B5C4C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C00B91E4 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0131828 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9374 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C00B98EC (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C00B9920 (GetPrefixCount.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(HDC a1, unsigned __int16 *a2, __int64 a3, struct tagSIZE *a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int16 *v7; // rbp
  __int64 ThreadWin32Thread; // r15
  unsigned __int16 *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // r9
  _QWORD v17[4]; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v18[512]; // [rsp+50h] [rbp-248h] BYREF

  v5 = (int)a3;
  v7 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, (__int64)a4);
  if ( v5 >= 0xFF )
  {
    result = Win32AllocPool(2LL * ((int)v5 + 1), 1953657685LL);
    v9 = (unsigned __int16 *)result;
    if ( !result )
    {
      a4->cy = 0;
      a4->cx = 0;
      return result;
    }
    PushW32ThreadLock(result, v17, (__int64)Win32FreePool, v16);
  }
  else
  {
    v9 = (unsigned __int16 *)v18;
  }
  v10 = (unsigned int)GetPrefixCount(v7, (unsigned int)v5, v9, (unsigned int)v5) >> 16;
  if ( v10 )
  {
    v7 = v9;
    LODWORD(v5) = v5 - v10;
  }
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread, v11) )
    xxxClientGetTextExtentPointW(a1);
  else
    GreGetTextExtentW(a1, v7, v5, a4, 1u);
  if ( v9 != (unsigned __int16 *)v18 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v17, v12, v13, v14);
  return 1LL;
}
