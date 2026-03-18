/*
 * XREFs of NtUserQueryInformationThread @ 0x1C00CE260
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     xxxQueryInformationThread @ 0x1C00CE3F8 (xxxQueryInformationThread.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, char *a3, unsigned int a4)
{
  size_t v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BYTE *v15; // rdi
  __int64 v16; // rax
  unsigned int InformationThread; // r14d
  _BYTE *v19; // [rsp+20h] [rbp-A8h]
  _QWORD v20[3]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE Src[64]; // [rsp+50h] [rbp-78h] BYREF

  v4 = a4;
  memset(Src, 0, sizeof(Src));
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
  v14 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      if ( (_DWORD)v4 )
      {
        if ( ((unsigned __int8)a3 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&a3[v4] > W32UserProbeAddress || &a3[v4] < a3 )
          *W32UserProbeAddress = 0;
      }
      if ( (unsigned int)v4 > 0x40 )
      {
        v16 = Win32AllocPoolWithQuota(v4, 1230271317LL);
        v15 = (_BYTE *)v16;
        v19 = (_BYTE *)v16;
        if ( !v16 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v16, v20, (__int64)Win32FreePool);
      }
      else
      {
        v15 = Src;
        v19 = Src;
      }
      memmove(v15, a3, v4);
    }
    else
    {
      v15 = 0LL;
      v19 = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v15, (unsigned int)v4, v19);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove(a3, v15, v4);
    }
    if ( v15 != Src && v15 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v20);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v14, v13);
  return InformationThread;
}
