/*
 * XREFs of ?AERTMemoryInitialize@@YAJ_K00@Z @ 0x140015DE8
 * Callers:
 *     wWinMain @ 0x140015C78 (wWinMain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AERTMemoryInitialize(__int64 a1, __int64 a2, void *a3)
{
  LPVOID Context; // [rsp+40h] [rbp+18h] BYREF

  Context = a3;
  if ( gMaxSize )
    return 2147943647LL;
  gInitialSize = 0x200000LL;
  gMinSize = 4LL;
  gMaxSize = 0x8000LL;
  return !InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context) ? 0x8007000E : 0;
}
