/*
 * XREFs of GreCreateSemaphoreInternal @ 0x1C002439C
 * Callers:
 *     GreCreateSemaphore @ 0x1C0024380 (GreCreateSemaphore.c)
 *     EngCreateSemaphore @ 0x1C0024390 (EngCreateSemaphore.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00349B0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     HmgCreate @ 0x1C007CEA4 (HmgCreate.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B02CC (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     EngInitializeSafeSemaphore @ 0x1C00BD720 (EngInitializeSafeSemaphore.c)
 *     InitializeGre @ 0x1C0137A5C (InitializeGre.c)
 *     bInitPALOBJ @ 0x1C01381D0 (bInitPALOBJ.c)
 * Callees:
 *     MultiUserGreTrackAddEngResource @ 0x1C00244B0 (MultiUserGreTrackAddEngResource.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
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
