/*
 * XREFs of AddEllipsisAndDrawLine @ 0x1C024ABC0
 * Callers:
 *     DrawTextExWorker @ 0x1C024B318 (DrawTextExWorker.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     DT_DrawJustifiedLine @ 0x1C024AD98 (DT_DrawJustifiedLine.c)
 *     NeedsEndEllipsis @ 0x1C024B5AC (NeedsEndEllipsis.c)
 */

__int64 __fastcall AddEllipsisAndDrawLine(int a1, __int64 a2, void *a3, unsigned int a4, int a5, __int64 a6)
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
