/*
 * XREFs of ExpLegacyWorkerInitialization @ 0x14016D024
 * Callers:
 *     ExpWorkerInitialization @ 0x1407E01DC (ExpWorkerInitialization.c)
 * Callees:
 *     <none>
 */

char ExpLegacyWorkerInitialization()
{
  int v0; // eax
  int v1; // ecx
  int v2; // edx
  int v3; // edx
  int v4; // eax
  __int64 v5; // rcx
  ULONG_PTR v6; // rcx
  char result; // al

  v0 = ExpAdditionalCriticalWorkerThreads;
  if ( (unsigned int)ExpAdditionalCriticalWorkerThreads > 0x64 )
  {
    v0 = 100;
    ExpAdditionalCriticalWorkerThreads = 100;
  }
  v1 = ExpAdditionalDelayedWorkerThreads;
  if ( (unsigned int)ExpAdditionalDelayedWorkerThreads > 0x64 )
  {
    v1 = 100;
    ExpAdditionalDelayedWorkerThreads = 100;
  }
  v2 = 5;
  if ( (_BYTE)dword_1403D0108 )
    v2 = 10;
  v3 = v0 + v2;
  v4 = v1 + 7;
  v5 = KeNodeBlock[0];
  ExDelayedWorkerThreads = v4;
  ExCriticalWorkerThreads = v3;
  if ( (_UNKNOWN *)KeNodeBlock[0] == &KiNodeInit )
    v5 = 0LL;
  v6 = *(_QWORD *)(v5 + 256);
  result = v6 & 1;
  if ( (v6 & 1) != 0 )
    v6 = 0LL;
  ExWorkerQueue = v6;
  return result;
}
