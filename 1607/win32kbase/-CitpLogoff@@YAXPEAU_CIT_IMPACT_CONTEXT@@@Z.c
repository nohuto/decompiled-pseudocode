/*
 * XREFs of ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004EE38
 * Callers:
 *     CitUserChange @ 0x1C004EC50 (CitUserChange.c)
 *     CitModerncoreShutdown @ 0x1C00F8310 (CitModerncoreShutdown.c)
 * Callees:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C004EC88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F038 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C004FC78 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitpLogoff(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int64 v1; // r8
  void *v2; // r9
  struct _CIT_IMPACT_CONTEXT *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  CitpPostUpdateUseInfoLog(a1, 1u);
  CitpContextFlush(v3, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, v1, v2);
  CitpCleanupGlobalImpactContext(&v3);
}
