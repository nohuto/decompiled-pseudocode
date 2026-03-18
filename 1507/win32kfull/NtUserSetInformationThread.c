/*
 * XREFs of NtUserSetInformationThread @ 0x1C007CF80
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetInformationThread @ 0x1C007D080 (xxxSetInformationThread.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall NtUserSetInformationThread(__int64 a1, unsigned int a2, char *a3, unsigned int a4)
{
  size_t v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  _BYTE Src[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a4;
  memset(Src, 0, 0x20uLL);
  EnterCrit(1LL);
  if ( PsGetCurrentProcess(v9, v8) == gpepCSRSS || a2 == 1 )
  {
    if ( (unsigned int)v4 > 0x20 )
    {
      v12 = -1073741811;
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
      v12 = xxxSetInformationThread(a1, a2, Src, (unsigned int)v4);
      if ( (_DWORD)v4 )
      {
        ProbeForWrite(a3, v4, 4u);
        memmove(a3, Src, v4);
      }
    }
  }
  else
  {
    v12 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
