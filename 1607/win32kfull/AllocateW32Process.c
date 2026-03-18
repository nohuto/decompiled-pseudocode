/*
 * XREFs of AllocateW32Process @ 0x1C0104AC0
 * Callers:
 *     W32pProcessCallout @ 0x1C0104950 (W32pProcessCallout.c)
 * Callees:
 *     ReferenceW32Process @ 0x1C009E9F4 (ReferenceW32Process.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall AllocateW32Process(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8

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
        UserSetLastError(5LL);
        Win32FreePool(v3, v6, v7);
      }
      else
      {
        ReferenceW32Process((__int64)v3);
      }
    }
    else
    {
      UserSetLastError(8LL);
      v5 = -1073741801;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpW32FastMutex);
  return (unsigned int)v5;
}
