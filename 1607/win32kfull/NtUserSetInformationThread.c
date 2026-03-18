/*
 * XREFs of NtUserSetInformationThread @ 0x1C00DCB90
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetInformationThread @ 0x1C00DCC90 (xxxSetInformationThread.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserSetInformationThread(__int64 a1, unsigned int a2, char *a3, unsigned int a4)
{
  size_t v4; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi
  _BYTE Src[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a4;
  memset(Src, 0, 0x20uLL);
  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v8) == gpepCSRSS || a2 == 1 )
  {
    if ( (unsigned int)v4 > 0x20 )
    {
      v11 = -1073741811;
    }
    else
    {
      if ( (_DWORD)v4 )
      {
        if ( ((unsigned __int8)a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&a3[v4] > W32UserProbeAddress || &a3[v4] < a3 )
          *W32UserProbeAddress = 0;
        memmove(Src, a3, v4);
      }
      v11 = xxxSetInformationThread(a1, a2, Src, (unsigned int)v4);
      if ( (_DWORD)v4 )
      {
        ProbeForWrite(a3, v4, 4u);
        memmove(a3, Src, v4);
      }
    }
  }
  else
  {
    v11 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
