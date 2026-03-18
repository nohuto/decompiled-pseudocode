/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x140167D5C
 * Callers:
 *     PpmRegisterPerfStates @ 0x1405AF60C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405AFF04 (PpmCheckInitProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x1406B1428 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(_DWORD *a1)
{
  unsigned __int16 v1; // dx
  __int64 v3; // rcx

  v1 = 0;
  *a1 = KeActiveProcessors[0];
  a1[1] = 0;
  while ( v1 < LOWORD(KeActiveProcessors[0]) )
  {
    v3 = v1++;
    *(_QWORD *)&a1[2 * v3 + 2] = qword_1403D15E8[v3];
  }
  return (unsigned int)KeNumberProcessors_0;
}
