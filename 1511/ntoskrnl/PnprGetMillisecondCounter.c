/*
 * XREFs of PnprGetMillisecondCounter @ 0x1403AF924
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1401C0F74 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1401C15F4 (PnprSwapFinalize.c)
 *     PnprQuiesceDevices @ 0x1403B02B8 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x1403B079C (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1403B0D18 (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x1403B0D90 (PnprWakeProcessors.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
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
    result = (unsigned int)(v3 - dword_14031D0F0 + dword_14031D0F4);
  dword_14031D0F4 = result;
  dword_14031D0F0 = v3;
  return result;
}
