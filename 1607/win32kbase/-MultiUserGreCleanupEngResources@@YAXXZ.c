/*
 * XREFs of ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C006A050
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C006D778 (MultiUserNtGreCleanup.c)
 * Callees:
 *     IsVerifierEngFreeMemSupported_0 @ 0x1C00013D8 (IsVerifierEngFreeMemSupported_0.c)
 *     VerifierEngFreeMem_0 @ 0x1C00013E0 (VerifierEngFreeMem_0.c)
 *     IsEngFreeModuleSupported_0 @ 0x1C00013E8 (IsEngFreeModuleSupported_0.c)
 *     EngFreeModule_0 @ 0x1C00013F0 (EngFreeModule_0.c)
 *     GreDeleteSemaphore @ 0x1C006A130 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C006A170 (EngFreeMem.c)
 *     GreDeleteSemaphoreNonTracked @ 0x1C006CE04 (GreDeleteSemaphoreNonTracked.c)
 */

void MultiUserGreCleanupEngResources(void)
{
  int Flink; // edx
  int v1; // edx
  int v2; // edx

  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( MultiUserGreEngAllocList.Flink == &MultiUserGreEngAllocList )
          goto LABEL_11;
        Flink = (int)MultiUserGreEngAllocList.Flink[1].Flink;
        if ( Flink )
          break;
        EngFreeMem(&MultiUserGreEngAllocList.Flink[2]);
      }
      v1 = Flink - 1;
      if ( v1 )
      {
        v2 = v1 - 1;
        if ( v2 )
        {
          if ( v2 == 2 )
            goto LABEL_7;
        }
        else if ( (int)IsVerifierEngFreeMemSupported_0() >= 0 )
        {
          VerifierEngFreeMem_0();
        }
      }
      else
      {
LABEL_7:
        GreDeleteSemaphore((PERESOURCE)&MultiUserGreEngAllocList.Flink[2]);
      }
    }
  }
LABEL_11:
  if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
  {
    while ( GreEngLoadModuleAllocList.Flink != &GreEngLoadModuleAllocList )
    {
      LODWORD(GreEngLoadModuleAllocList.Flink[1].Flink) = 1;
      if ( (int)IsEngFreeModuleSupported_0() >= 0 )
        EngFreeModule_0(&GreEngLoadModuleAllocList.Flink[1].Blink);
    }
  }
  GreDeleteSemaphoreNonTracked(*(PVOID *)&WPP_MAIN_CB.SectorSize);
  *(_QWORD *)&WPP_MAIN_CB.SectorSize = 0LL;
  GreDeleteSemaphoreNonTracked(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = 0LL;
}
