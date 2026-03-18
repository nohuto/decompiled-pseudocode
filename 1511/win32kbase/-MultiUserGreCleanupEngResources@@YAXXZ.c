/*
 * XREFs of ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C0059CD4
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0063BC4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     IsVerifierEngFreeMemSupported_0 @ 0x1C0001368 (IsVerifierEngFreeMemSupported_0.c)
 *     VerifierEngFreeMem_0 @ 0x1C0001370 (VerifierEngFreeMem_0.c)
 *     IsEngFreeModuleSupported_0 @ 0x1C0001378 (IsEngFreeModuleSupported_0.c)
 *     EngFreeModule_0 @ 0x1C0001380 (EngFreeModule_0.c)
 *     GreDeleteSemaphore @ 0x1C0059DB0 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C0059DF0 (EngFreeMem.c)
 *     GreDeleteSemaphoreNonTracked @ 0x1C005CEE8 (GreDeleteSemaphoreNonTracked.c)
 */

void MultiUserGreCleanupEngResources(void)
{
  int Flink; // edx
  int v1; // edx
  int v2; // edx

  if ( WPP_MAIN_CB.Reserved )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( MultiUserGreEngAllocList.Flink == &MultiUserGreEngAllocList )
          goto LABEL_10;
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
            goto LABEL_5;
        }
        else if ( (int)IsVerifierEngFreeMemSupported_0() >= 0 )
        {
          VerifierEngFreeMem_0();
        }
      }
      else
      {
LABEL_5:
        GreDeleteSemaphore((PERESOURCE)&MultiUserGreEngAllocList.Flink[2]);
      }
    }
  }
LABEL_10:
  if ( WPP_MAIN_CB.DeviceObjectExtension )
  {
    while ( GreEngLoadModuleAllocList.Flink != &GreEngLoadModuleAllocList )
    {
      LODWORD(GreEngLoadModuleAllocList.Flink[1].Flink) = 1;
      if ( (int)IsEngFreeModuleSupported_0() >= 0 )
        EngFreeModule_0(&GreEngLoadModuleAllocList.Flink[1].Blink);
    }
  }
  GreDeleteSemaphoreNonTracked(WPP_MAIN_CB.Reserved);
  WPP_MAIN_CB.Reserved = 0LL;
  GreDeleteSemaphoreNonTracked(WPP_MAIN_CB.DeviceObjectExtension);
  WPP_MAIN_CB.DeviceObjectExtension = 0LL;
}
