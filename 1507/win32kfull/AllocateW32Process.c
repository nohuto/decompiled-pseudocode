/*
 * XREFs of AllocateW32Process @ 0x1C00E0710
 * Callers:
 *     W32pProcessCallout @ 0x1C00E05A0 (W32pProcessCallout.c)
 * Callees:
 *     ReferenceW32Process @ 0x1C00E07F0 (ReferenceW32Process.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall AllocateW32Process(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  int v5; // edi

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpW32FastMutex);
  if ( PsGetProcessWin32Process(a1) )
  {
    v5 = 1073741851;
  }
  else
  {
    v2 = (_QWORD *)Win32AllocPoolWithQuota(W32ProcessSize, 1768977237LL);
    v3 = v2;
    if ( v2 )
    {
      memset(v2, 0, W32ProcessSize);
      LOBYTE(v4) = 1;
      GdiPreUserProcessCallout(v3, v4);
      *v3 = a1;
      v5 = PsSetProcessWin32Process(a1, v3, 0LL);
      if ( v5 < 0 )
      {
        LODWORD(KeGetPcr()->NtTib.Self[1].Self) = 5;
        Win32FreePool(v3);
      }
      else
      {
        ReferenceW32Process(v3);
      }
    }
    else
    {
      v5 = -1073741801;
      LODWORD(KeGetPcr()->NtTib.Self[1].Self) = 8;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpW32FastMutex);
  return (unsigned int)v5;
}
