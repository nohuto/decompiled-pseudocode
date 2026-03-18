/*
 * XREFs of PnprGetMillisecondCounter @ 0x1403FFF10
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1401FCB38 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1401FD194 (PnprSwapFinalize.c)
 *     PnprQuiesceDevices @ 0x1404008A4 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x140400DAC (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1404013F4 (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x14040146C (PnprWakeProcessors.c)
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
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
    result = (unsigned int)(v3 - dword_14036E0F0 + dword_14036E0F4);
  dword_14036E0F4 = result;
  dword_14036E0F0 = v3;
  return result;
}
