/*
 * XREFs of GreCreateSemaphoreInternal @ 0x1C000D92C
 * Callers:
 *     GreCreateSemaphore @ 0x1C000D910 (GreCreateSemaphore.c)
 *     EngCreateSemaphore @ 0x1C000D920 (EngCreateSemaphore.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032010 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     HmgCreate @ 0x1C00533A4 (HmgCreate.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00BE240 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     EngInitializeSafeSemaphore @ 0x1C00CAB60 (EngInitializeSafeSemaphore.c)
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 *     bInitPALOBJ @ 0x1C0156360 (bInitPALOBJ.c)
 * Callees:
 *     MultiUserGreTrackAddEngResource @ 0x1C000DA40 (MultiUserGreTrackAddEngResource.c)
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 */

__int64 GreCreateSemaphoreInternal()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 ThreadWin32Thread; // rax

  v0 = Win32AllocPoolNonPaged(136LL, 1835365191LL);
  v1 = v0;
  if ( v0 )
  {
    v1 = v0 + 32;
    v2 = v0;
    if ( ExInitializeResourceLite((PERESOURCE)(v0 + 32)) < 0 )
    {
      Win32FreePool(v2);
      return 0LL;
    }
    else
    {
      MultiUserGreTrackAddEngResource(v2);
      if ( v1 )
      {
        *(_QWORD *)(v1 - 8) = 0LL;
      }
      else
      {
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
        {
          *(_DWORD *)(ThreadWin32Thread + 104) = 0;
          *(_DWORD *)(ThreadWin32Thread + 108) = 0;
        }
      }
    }
  }
  return v1;
}
