/*
 * XREFs of AddEllipsisAndDrawLine @ 0x1C024AC00
 * Callers:
 *     DrawTextExWorker @ 0x1C024B358 (DrawTextExWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     DT_DrawJustifiedLine @ 0x1C024ADD8 (DT_DrawJustifiedLine.c)
 *     NeedsEndEllipsis @ 0x1C024B614 (NeedsEndEllipsis.c)
 */

__int64 __fastcall AddEllipsisAndDrawLine(HDC a1, __int64 a2, void *a3, unsigned int a4, int a5, __int64 a6)
{
  char *v8; // rsi
  char *v9; // rbp
  __int64 result; // rax
  unsigned int v11; // edi
  _QWORD v13[4]; // [rsp+50h] [rbp-178h] BYREF
  char v14; // [rsp+70h] [rbp-158h] BYREF

  v8 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (a5 & 0x8000) != 0 && (unsigned int)NeedsEndEllipsis(a1, (unsigned __int16 *)a3, a5, a6) )
  {
    if ( (int)(a4 + 4) > 128 )
    {
      result = UserRtlAllocMem(2 * (a4 + 4));
      v8 = (char *)result;
      if ( !result )
        return result;
      PushW32ThreadLock(result, v13, (__int64)Win32FreePool);
      v9 = v8;
    }
    else
    {
      v9 = &v14;
    }
    memmove(v9, a3, 2LL * (int)a4);
    *(_QWORD *)&v9[2 * a4] = 0x2E002E002ELL;
    v11 = a4 + 3;
  }
  else
  {
    v11 = a4;
  }
  DT_DrawJustifiedLine(a1, a5, a6);
  if ( v8 )
  {
    PopW32ThreadLock(v13);
    UserRtlFreeMem(v8);
  }
  return v11;
}
