/*
 * XREFs of ExpLegacyWorkerInitialization @ 0x140148214
 * Callers:
 *     ExpWorkerInitialization @ 0x1407B4A64 (ExpWorkerInitialization.c)
 * Callees:
 *     <none>
 */

ULONG_PTR ExpLegacyWorkerInitialization()
{
  int v0; // eax
  int v1; // ecx
  int v2; // edx
  int v3; // edx
  __int64 v4; // rax
  ULONG_PTR result; // rax

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
  if ( (_BYTE)dword_1403A9160 )
    v2 = 10;
  v3 = v0 + v2;
  ExDelayedWorkerThreads = v1 + 7;
  v4 = KeNodeBlock[0];
  ExCriticalWorkerThreads = v3;
  if ( (_UNKNOWN *)KeNodeBlock[0] == &KiNodeInit )
    v4 = 0LL;
  result = *(_QWORD *)(v4 + 320);
  if ( (result & 1) != 0 )
    result = 0LL;
  ExWorkerQueue = result;
  return result;
}
