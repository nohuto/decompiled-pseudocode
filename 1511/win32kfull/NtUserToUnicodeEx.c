/*
 * XREFs of NtUserToUnicodeEx @ 0x1C0098E90
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     xxxToUnicodeEx @ 0x1C0099088 (xxxToUnicodeEx.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtUserToUnicodeEx(int a1, int a2, _OWORD *a3, volatile void *a4, int a5, int a6, __int64 a7)
{
  _OWORD *v10; // rax
  __int64 v11; // rcx
  SIZE_T v12; // rsi
  __int64 *p_Src; // rdi
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+40h] [rbp-1B8h]
  _QWORD v22[3]; // [rsp+88h] [rbp-170h] BYREF
  __int64 Src; // [rsp+A0h] [rbp-158h] BYREF
  _BYTE v24[256]; // [rsp+B0h] [rbp-148h] BYREF

  Src = 0LL;
  v20 = 0;
  EnterCrit(0LL, 1LL);
  if ( a5 > 0
    && ((a6 & 4) == 0
     || (v19 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 240LL)) != 0
     && *(_QWORD *)(*(_QWORD *)(v19 + 16) + 376LL) == *(_QWORD *)(gptiCurrent + 376LL)) )
  {
    v10 = v24;
    v11 = 2LL;
    do
    {
      *v10 = *a3;
      v10[1] = a3[1];
      v10[2] = a3[2];
      v10[3] = a3[3];
      v10[4] = a3[4];
      v10[5] = a3[5];
      v10[6] = a3[6];
      v10 += 8;
      *(v10 - 1) = a3[7];
      a3 += 8;
      --v11;
    }
    while ( v11 );
    v12 = 2LL * a5;
    ProbeForWrite(a4, v12, 2u);
    if ( a5 >= 4 )
    {
      v14 = Win32AllocPoolWithQuotaZInit(v12, 1651864405LL);
      p_Src = (__int64 *)v14;
      if ( !v14 )
        ExRaiseStatus(-1073741801);
      v20 = 1;
      PushW32ThreadLock(v14, v22, (__int64)Win32FreePool);
    }
    else
    {
      p_Src = &Src;
    }
    v15 = xxxToUnicodeEx(a1, a2, (unsigned int)v24, (_DWORD)p_Src, a5, a6, a7);
    memmove((void *)a4, p_Src, v12);
    if ( v20 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v22);
  }
  else
  {
    v15 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v17, v16);
  return v15;
}
