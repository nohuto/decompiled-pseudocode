/*
 * XREFs of PnprGetMillisecondCounter @ 0x1403DBA40
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1401D02F0 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1401D0964 (PnprSwapFinalize.c)
 *     PnprQuiesceDevices @ 0x1403DC3D4 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x1403DC8B8 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1403DCE3C (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x1403DCEB4 (PnprWakeProcessors.c)
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnprGetMillisecondCounter(char a1)
{
  __int128 v2; // rtt
  LONGLONG v3; // r8
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = v2 / PerformanceFrequency.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = (unsigned int)(v3 - dword_1403420F0 + dword_1403420F4);
  dword_1403420F4 = result;
  dword_1403420F0 = v3;
  return result;
}
