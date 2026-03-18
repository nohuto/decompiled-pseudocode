/*
 * XREFs of AddEllipsisAndDrawLine @ 0x1C0246ED0
 * Callers:
 *     DrawTextExWorker @ 0x1C0247624 (DrawTextExWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     DT_DrawJustifiedLine @ 0x1C02470A8 (DT_DrawJustifiedLine.c)
 *     NeedsEndEllipsis @ 0x1C02478DC (NeedsEndEllipsis.c)
 */

__int64 __fastcall AddEllipsisAndDrawLine(HDC a1, __int64 a2, void *a3, __int64 a4, int a5, __int64 a6)
{
  char *v8; // rsi
  char *v9; // rbp
  __int64 result; // rax
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // [rsp+40h] [rbp-188h]
  _QWORD v17[4]; // [rsp+50h] [rbp-178h] BYREF
  char v18; // [rsp+70h] [rbp-158h] BYREF

  v8 = 0LL;
  v16 = a4;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  if ( (a5 & 0x8000) != 0 && (unsigned int)NeedsEndEllipsis(a1, (unsigned __int16 *)a3, a5, a6) )
  {
    if ( (int)(v16 + 4) > 128 )
    {
      result = UserRtlAllocMem(2 * (v16 + 4));
      v8 = (char *)result;
      if ( !result )
        return result;
      PushW32ThreadLock(result, v17, (__int64)Win32FreePool, v11);
      v9 = v8;
    }
    else
    {
      v9 = &v18;
    }
    memmove(v9, a3, 2LL * (int)v16);
    *(_QWORD *)&v9[2 * v16] = 0x2E002E002ELL;
    v12 = v16 + 3;
  }
  else
  {
    v12 = v16;
  }
  DT_DrawJustifiedLine(a1, a5, a6);
  if ( v8 )
  {
    PopW32ThreadLock(v17, v13, v14, v15);
    UserRtlFreeMem(v8);
  }
  return v12;
}
