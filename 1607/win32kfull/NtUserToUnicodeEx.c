/*
 * XREFs of NtUserToUnicodeEx @ 0x1C00E7620
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxToUnicodeEx @ 0x1C00E77F8 (xxxToUnicodeEx.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtUserToUnicodeEx(int a1, int a2, _OWORD *a3, volatile void *a4, int a5, int a6, __int64 a7)
{
  _OWORD *v11; // rax
  __int64 v12; // rcx
  __int64 *p_Src; // rbx
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v22; // [rsp+40h] [rbp-1A8h]
  _QWORD v23[3]; // [rsp+78h] [rbp-170h] BYREF
  __int64 Src; // [rsp+90h] [rbp-158h] BYREF
  _BYTE v25[256]; // [rsp+A0h] [rbp-148h] BYREF

  Src = 0LL;
  v22 = 0;
  EnterCrit(0LL, 1LL);
  if ( a5 <= 0 )
  {
    v16 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    v11 = v25;
    v12 = 2LL;
    do
    {
      *v11 = *a3;
      v11[1] = a3[1];
      v11[2] = a3[2];
      v11[3] = a3[3];
      v11[4] = a3[4];
      v11[5] = a3[5];
      v11[6] = a3[6];
      v11 += 8;
      *(v11 - 1) = a3[7];
      a3 += 8;
      --v12;
    }
    while ( v12 );
    ProbeForWrite(a4, 2LL * a5, 2u);
    if ( a5 >= 4 )
    {
      v14 = Win32AllocPoolWithQuotaZInit(2LL * a5, 1651864405LL);
      p_Src = (__int64 *)v14;
      if ( !v14 )
        ExRaiseStatus(-1073741801);
      v22 = 1;
      PushW32ThreadLock(v14, v23, (__int64)Win32FreePool, v15);
    }
    else
    {
      p_Src = &Src;
    }
    v16 = xxxToUnicodeEx(a1, a2, (unsigned int)v25, (_DWORD)p_Src, a5, a6, a7);
    memmove((void *)a4, p_Src, 2LL * a5);
    if ( v22 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v23, v17, v19, v20);
  }
  UserSessionSwitchLeaveCrit(v18, v17);
  return v16;
}
