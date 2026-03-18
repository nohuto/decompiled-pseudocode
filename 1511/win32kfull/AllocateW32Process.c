/*
 * XREFs of AllocateW32Process @ 0x1C00E2CA0
 * Callers:
 *     W32pProcessCallout @ 0x1C00E2B80 (W32pProcessCallout.c)
 * Callees:
 *     ReferenceW32Process @ 0x1C00E2D5C (ReferenceW32Process.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall AllocateW32Process(__int64 a1)
{
  int v2; // edi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx

  v2 = 0;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpW32FastMutex);
  if ( !PsGetProcessWin32Process(a1) )
  {
    v4 = (_QWORD *)Win32AllocPoolWithQuota(W32ProcessSize, 1768977237LL);
    v5 = v4;
    if ( v4 )
    {
      memset(v4, 0, W32ProcessSize);
      LOBYTE(v6) = 1;
      GdiPreUserProcessCallout(v5, v6);
      *v5 = a1;
      v2 = PsSetProcessWin32Process(a1, v5, 0LL);
      if ( v2 < 0 )
      {
        LODWORD(KeGetPcr()->NtTib.Self[1].Self) = 5;
        Win32FreePool(v5);
      }
      else
      {
        ReferenceW32Process(v5);
      }
    }
    else
    {
      v2 = -1073741801;
      LODWORD(KeGetPcr()->NtTib.Self[1].Self) = 8;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpW32FastMutex);
  return (unsigned int)v2;
}
