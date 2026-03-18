/*
 * XREFs of NtUserQueryInformationThread @ 0x1C012B1A0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxQueryInformationThread @ 0x1C012B334 (xxxQueryInformationThread.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, char *a3, unsigned int a4)
{
  size_t v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // rdi
  __int64 v14; // rax
  unsigned int InformationThread; // r14d
  _BYTE *v17; // [rsp+20h] [rbp-A8h]
  _QWORD v18[3]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE Src[64]; // [rsp+50h] [rbp-78h] BYREF

  v4 = a4;
  memset(Src, 0, sizeof(Src));
  EnterCrit(1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8);
  v12 = gpepCSRSS;
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
        v14 = Win32AllocPoolWithQuota(v4, 1230271317LL);
        v13 = (_BYTE *)v14;
        v17 = (_BYTE *)v14;
        if ( !v14 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v14, v18, (__int64)Win32FreePool);
      }
      else
      {
        v13 = Src;
        v17 = Src;
      }
      memmove(v13, a3, v4);
    }
    else
    {
      v13 = 0LL;
      v17 = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v13, (unsigned int)v4, v17);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove(a3, v13, v4);
    }
    if ( v13 != Src && v13 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v18);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return InformationThread;
}
