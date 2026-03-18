/*
 * XREFs of ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0064DF8
 * Callers:
 *     CitUserChange @ 0x1C0064C50 (CitUserChange.c)
 *     CitModerncoreShutdown @ 0x1C00E6530 (CitModerncoreShutdown.c)
 * Callees:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0064C88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0064E70 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00656FC (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitpLogoff(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned int v1; // r8d
  void *v2; // r9
  struct _CIT_IMPACT_CONTEXT *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  CitpPostUpdateUseInfoLog(a1, 1u);
  CitpContextFlush(v3, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, v1, v2);
  CitpCleanupGlobalImpactContext(&v3);
}
