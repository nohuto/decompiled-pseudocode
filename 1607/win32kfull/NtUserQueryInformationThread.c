/*
 * XREFs of NtUserQueryInformationThread @ 0x1C0096910
 * Callers:
 *     <none>
 * Callees:
 *     xxxQueryInformationThread @ 0x1C0096AA8 (xxxQueryInformationThread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, char *a3, unsigned int a4)
{
  size_t v4; // rbx
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // rdi
  __int64 v13; // rax
  unsigned int InformationThread; // r14d
  _BYTE *v16; // [rsp+20h] [rbp-A8h]
  _BYTE v17[24]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE Src[64]; // [rsp+50h] [rbp-78h] BYREF

  v4 = a4;
  memset(Src, 0, sizeof(Src));
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v8);
  v11 = gpepCSRSS;
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
        v13 = Win32AllocPoolWithQuota(v4, 1230271317LL);
        v12 = (_BYTE *)v13;
        v16 = (_BYTE *)v13;
        if ( !v13 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v13, v17, Win32FreePool);
      }
      else
      {
        v12 = Src;
        v16 = Src;
      }
      memmove(v12, a3, v4);
    }
    else
    {
      v12 = 0LL;
      v16 = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v12, (unsigned int)v4, v16);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove(a3, v12, v4);
    }
    if ( v12 != Src && v12 )
      PopAndFreeAlwaysW32ThreadLock(v17);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return InformationThread;
}
