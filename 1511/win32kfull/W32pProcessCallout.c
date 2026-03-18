/*
 * XREFs of W32pProcessCallout @ 0x1C00E2B80
 * Callers:
 *     <none>
 * Callees:
 *     AllocateW32Process @ 0x1C00E2CA0 (AllocateW32Process.c)
 *     DereferenceW32Process @ 0x1C00E2D80 (DereferenceW32Process.c)
 */

__int64 __fastcall W32pProcessCallout(__int64 *a1)
{
  int v1; // eax
  __int64 ProcessWin32Process; // rbx
  __int64 v3; // rbp
  __int64 v5; // rcx
  int W32Process; // edi
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 ThreadWin32Thread; // rax

  v1 = *((_DWORD *)a1 + 2);
  ProcessWin32Process = 0LL;
  v3 = *a1;
  v5 = *a1;
  if ( (v1 & 1) != 0 )
  {
    W32Process = AllocateW32Process(v5);
    if ( W32Process >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(v3);
      *(_DWORD *)(ProcessWin32Process + 56) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      W32Process = xxxUserProcessCallout(ProcessWin32Process, a1);
      result = 1073741851LL;
      if ( W32Process == 1073741851 )
        return result;
      if ( W32Process >= 0 )
      {
        LOBYTE(v7) = 1;
        W32Process = GdiProcessCallout(ProcessWin32Process, v7);
        if ( W32Process < 0 )
        {
          xxxUserProcessCallout(ProcessWin32Process, 0LL);
        }
        else
        {
          LOBYTE(v9) = 1;
          W32Process = DCompositionProcessCallout(ProcessWin32Process, v9);
          if ( W32Process < 0 )
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
    ProcessWin32Process = PsGetProcessWin32Process(v5);
    ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, ThreadWin32Thread);
    xxxUserProcessCallout(ProcessWin32Process, 0LL);
    DCompositionProcessCallout(ProcessWin32Process, 0LL);
    GdiProcessCallout(ProcessWin32Process, 0LL);
    W32Process = 0;
  }
  if ( (a1[1] & 1) == 0 || W32Process < 0 )
  {
    if ( ProcessWin32Process )
    {
      GdiUnmapGDIW32PIDLockedBitmaps(ProcessWin32Process);
      vMarkFreeW32Process(ProcessWin32Process);
      DereferenceW32Process(ProcessWin32Process);
    }
  }
  return (unsigned int)W32Process;
}
