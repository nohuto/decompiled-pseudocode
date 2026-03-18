/*
 * XREFs of ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C006C860
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C006C400 (MultiUserNtGreCleanup.c)
 * Callees:
 *     IsVerifierEngFreeMemSupported_0 @ 0x1C00013C8 (IsVerifierEngFreeMemSupported_0.c)
 *     VerifierEngFreeMem_0 @ 0x1C00013D0 (VerifierEngFreeMem_0.c)
 *     IsEngFreeModuleSupported_0 @ 0x1C00013D8 (IsEngFreeModuleSupported_0.c)
 *     EngFreeModule_0 @ 0x1C00013E0 (EngFreeModule_0.c)
 *     GreDeleteSemaphore @ 0x1C005C6D0 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C005C710 (EngFreeMem.c)
 *     GreDeleteSemaphoreNonTracked @ 0x1C006C924 (GreDeleteSemaphoreNonTracked.c)
 */

void MultiUserGreCleanupEngResources(void)
{
  int Flink; // edx
  int v1; // edx
  int v2; // edx

  if ( MultiUserEngAllocListLock )
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
  if ( GreEngLoadModuleAllocListLock )
  {
    while ( GreEngLoadModuleAllocList.Flink != &GreEngLoadModuleAllocList )
    {
      LODWORD(GreEngLoadModuleAllocList.Flink[1].Flink) = 1;
      if ( (int)IsEngFreeModuleSupported_0() >= 0 )
        EngFreeModule_0(&GreEngLoadModuleAllocList.Flink[1].Blink);
    }
  }
  GreDeleteSemaphoreNonTracked(MultiUserEngAllocListLock);
  MultiUserEngAllocListLock = 0LL;
  GreDeleteSemaphoreNonTracked(GreEngLoadModuleAllocListLock);
  GreEngLoadModuleAllocListLock = 0LL;
}
