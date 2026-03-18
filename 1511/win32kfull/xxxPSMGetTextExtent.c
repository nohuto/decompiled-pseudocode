/*
 * XREFs of xxxPSMGetTextExtent @ 0x1C00CD07C
 * Callers:
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BFBC (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C00CD238 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C010E45C (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C0242490 (xxxRealDrawMenuItem.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00CCAFC (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C00CD148 (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C00CD17C (GetPrefixCount.c)
 *     GreGetTextExtentW @ 0x1C01027C0 (GreGetTextExtentW.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(HDC a1, unsigned __int16 *a2, int a3, __int64 a4)
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
    result = Win32AllocPool(2LL * ((int)v5 + 1));
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
    a2 = v9;
    LODWORD(v5) = v5 - (unsigned __int16)v10;
  }
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, a2, v5, (_QWORD *)a4);
  else
    GreGetTextExtentW(a1, a2, v5, (struct tagSIZE *)a4, 1u);
  if ( v9 != (unsigned __int16 *)v13 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v12);
  return 1LL;
}
