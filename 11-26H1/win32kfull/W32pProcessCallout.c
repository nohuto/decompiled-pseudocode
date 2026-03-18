/*
 * XREFs of W32pProcessCallout @ 0x1401F2240
 * Callers:
 *     <none>
 * Callees:
 *     GreIsCurrentProcessSystemCritical @ 0x1400571F0 (GreIsCurrentProcessSystemCritical.c)
 *     FreeW32Process @ 0x1401F23E4 (FreeW32Process.c)
 *     GreSystemProcessCallout @ 0x14028CC90 (GreSystemProcessCallout.c)
 */

__int64 __fastcall W32pProcessCallout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 ProcessWin32Process; // rbx
  bool v6; // si
  int W32ProcessImpl; // eax
  int v8; // edi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  ProcessWin32Process = 0LL;
  v6 = 1;
  if ( GreIsCurrentProcessSystemCritical(a1, a2, a3) )
    return GreSystemProcessCallout(a1);
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
  {
    W32ProcessImpl = AllocateW32ProcessImpl(v3);
    v8 = W32ProcessImpl;
    if ( W32ProcessImpl >= 0 )
    {
      v6 = W32ProcessImpl != 1073741851;
      ProcessWin32Process = PsGetProcessWin32Process(v3);
      result = xxxUserProcessCallout(ProcessWin32Process, a1);
      v8 = result;
      if ( (_DWORD)result == 1073741851 )
        return result;
      if ( (int)result >= 0 )
      {
        LOBYTE(v10) = 1;
        v8 = GdiProcessCallout(ProcessWin32Process, v10);
        if ( v8 < 0 )
        {
          xxxUserProcessCallout(ProcessWin32Process, 0LL);
        }
        else
        {
          LOBYTE(v11) = 1;
          v8 = DCompositionProcessCallout(ProcessWin32Process, v11);
          if ( v8 < 0 )
          {
            xxxUserProcessCallout(ProcessWin32Process, 0LL);
            GdiProcessCallout(ProcessWin32Process, 0LL);
          }
        }
      }
    }
  }
  else
  {
    ProcessWin32Process = PsGetProcessWin32Process(v3);
    xxxUserProcessCallout(ProcessWin32Process, 0LL);
    DCompositionProcessCallout(ProcessWin32Process, 0LL);
    GdiProcessCallout(ProcessWin32Process, 0LL);
    v8 = 0;
  }
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || v8 < 0 )
  {
    if ( ProcessWin32Process )
    {
      GdiUnmapGDIW32PIDLockedBitmaps(ProcessWin32Process);
      if ( v6 )
        FreeW32Process(ProcessWin32Process, 1LL);
    }
  }
  return (unsigned int)v8;
}
